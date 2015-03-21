#pragma once
#include <string>
#include"employee.h"
using namespace std;

	class Subdivision
	{

	private:
		Employee *pEmp;
		string Title;
		string Place;
		char  Staff;
		unsigned char Budget;
		bool work;
	public:
		Subdivision();
	string		getTitle();
	void		setTitle(string );
	string		getPlace();
	void		setPlace(string);
	char		getStaff();
	void		setStaff(char);
	unsigned char getBudget();
	void		setBudget(char);
	bool		setWork(bool);
	bool		getWork();
		~Subdivision();
	};
