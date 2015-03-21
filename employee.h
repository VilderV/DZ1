#pragma once
#include<string>
using namespace std;


	class Employee
	{
	private:
		string FIO;
		string Job;
		int Number;
		int Passport;
		int Department;
		bool work;
	public://методы
		Employee();
		Employee(string FIO, string Job, int Number, int Passport);
	void		setFIO(string);
	string		getFIO();
	void		setJOB(string);
	string		getJOB();
	void		setNumber(int);
	int			getNumber();
	void		setPassport(int);
	int			getPassport();
	void		Add(int, Employee pList );
	void		Delet(int);
	bool		setWork(bool);
	bool		getWork();
	void		setDepartment(int);
	int			getDepartment();
	void Employee::Printf_INF(int n, Employee *pList);
	~Employee();
	
	};
