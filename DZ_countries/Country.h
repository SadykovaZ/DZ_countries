#include"Capital.h"
#ifndef _COUNTRY_
#define _COUNTY_


struct Country
{
	string Title;
	string President;
	Capital Country_Capital;
	void enter()
	{
		
		in_file >> Title >> President;
		Country_Capital.enter();
	}
	void print()
	{
		cout<< Title <<" "<< President<<" ";
		Country_Capital.print();
	}

};
#endif // !_COUNTRY_