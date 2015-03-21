#include<string>
#include"subdivision.h"

using namespace std;

	//Subdivivsion::Subdivision()
	//{
	//}
	void Subdivision::setTitle(string title)
	{
		Title = title;
	}
	string Subdivision::getTitle()
	{
		return Title;
	}
	void Subdivision::setPlace(string place)
	{
		Place = place;
	}

	string Subdivision::getPlace()
	{
		return Place;
	}
	void Subdivision::setStaff(char staff)
	{
		Staff = staff;
	}
	char Subdivision::getStaff()
	{
		return Staff;
	}
	void Subdivision::setBudget(char bud)
	{
		Budget = bud;
	}
	unsigned char Subdivision::getBudget()
	{
		return Budget;
	}
	bool Subdivision::getWork()
	{
		return work;
	}
	bool Subdivision::setWork(bool b)
	{
		work = b;
	}
	void Delet_Sub(int n, Subdivision *sList)
	{
		bool flag = false;
		int numb = n;
		sList[numb].setWork(flag);
	}


	
