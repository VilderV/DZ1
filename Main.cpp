# DZ1
#include<iostream>
#include<conio.h>
#include"employee.h"
#include"Subdivision_.cpp"
using namespace std;
		Employee::Employee(string FIO, string Job, int Number, int Passport)
		{

		}
		Employee::Employee()
		{

		}

		void Employee::setFIO(string fio)
		{
			FIO = fio;
		}
		string Employee::getFIO()
		{
			return FIO;
		}
		void	Employee::setJOB(string job)
		{
			Job = job;
		}
		string  Employee::getJOB()
		{
			return Job;
		}
		void	Employee::setNumber(int numb)
		{
			Number = numb;
		}
		int	Employee::getNumber()
		{
			return Number;
		}
		void	Employee::setPassport(int pass)
		{
			Passport = pass;
		}
		int	Employee::getPassport()
		{
			return Passport;
		}
		bool Employee::getWork()
		{
			return work;
		}
		bool Employee::setWork(bool b)
		{
			work = b;
		}
		void Employee::setDepartment(int dep)
		{
			Department = dep;
		}
		int Employee::getDepartment()
		{
			return Department;
		}
		void Employee::Printf_INF(int n, Employee *pList)
		{
			int numb = n;
			bool flag1;
			flag1 = pList[n].getWork();
			string Name;
			cout << "For information , enter the name of the employee : ";
			cin >> Name;
			bool flag2 = 0;
			for (int i = 0; i < n; i++)
			{

				if (!flag1)
				{
					cout << "Employee wiht Name : " << Name << " was dismissed ";
				}
				else
				if (Name == pList[i].getFIO())
				{
					cout << pList[i];
					flag2 = true;
				}
				if (!flag2)
				{
					cout << "Employee wiht Name : " << Name << " not enter." << endl << endl;
				}
			}

		}

		void Add_Emp(int n)
		{
			int numb = n;
			Employee *pList;
			string name = 0, job = 0; int prs_numb = 0, numb_passp = 0, dep = 0; bool work;
			cout << "Enter number of employee to change data "; cin >> n;
			cout << "Enter full name: "; cin >> name; pList[numb].setFIO(name); cout << "\n";
			cout << "Enter the employee's position: "; cin >> job; pList[numb].setJOB(job); cout << "\n";
			cout << "Enter person number"; cin >> prs_numb; pList[numb].setNumber(prs_numb); cout << "\n";
			cout << "Enter number of the passport"; cin >> numb_passp; pList[numb].setPassport(numb_passp); cout << "\n";
			cout << "Enter department : \n 1.Finacial department \n 2.Marketing department \n 3.IT-department \n 4.Security department \n 5.Sales department \n 6.Logistics department";
			cin >> dep; pList[numb].setDepartment(dep);
			pList[numb].setWork(true);
		}
		void Print_Subd(int n)
		{
			Subdivision *sList;
			Employee *pList;
			cout << "Enter department : \n 1.Finacial department \n 2.Marketing department \n 3.IT - department \n 4.Security department \n 5.Sales department \n 6.Logistics department \n";
			int n1; cin >> n1;
			int flag = sList[n1].setWork(true);
			if (!flag)
			{
				cout << "Department was closed";
			}

			for (int i = 0; i < n; i++)
			{
				if (pList[i].getDepartment() == n)
				{
					cout << pList[i];
				}
				cout << sList[n1];
			}
		}
		void Add_Subd(int n)
		{
			Subdivision *sList;
			string dep = 0, place = 0; unsigned int bug=0;
			cout << "Enter department : \n 1.Finacial department \n 2.Marketing department \n 3.IT-department \n 4.Security department \n 5.Sales department \n 6.Logistics department";
			cin >> dep; sList[n].setTitle(dep);
			cout << "Enter Place"; cin >> place; sList[n].setPlace(place);
			cout << "Enter Budget"; cin >> bug; sList[n].setBudget(bug);
		}
		void Delet(int n)
		{
			int numb = n;
			Employee *pList;
			pList[numb].setWork(false);
		}

		struct List
		{
			Employee a, *pList, *ins, *b;
			List* next;
		};
		Employee *pList;

		void Init(List **begin, int n)
		{
			*begin = new List;
			(*begin)->pList;
			(*begin)->next = NULL;

			List *end = *begin;

			for (int i(0); i < n; i++)
			{
				end->next = new List;
				end = end->next;
				end->a = pList[i];
				end->next = NULL;
			}
		}

		void main() ///main для Employee
		{
			struct List
			{
				Employee  *pList, *b;
				List* next;
			};
			Employee *pList, x;///обьявление переменной типа class Employee
			int n, i;
			Subdivision *sList;
			sList = new Subdivision[6];
			cout << "Enter the number of employees"; cin >> n;
			pList = new Employee[n];//создание n копий классов Emloyee
			for (int i = 0; i < n; i++)
			{
				Add_Emp(i);
			}
			_getch();
			return;

		}	

