#include<iostream>
#include<string>
#include<fstream>
using namespace std;

ifstream in_file("in.txt");
#ifndef _CAPITAL_
#define _CAPITAL_

struct Capital
{
	string Name;
	int population;
	string major;

	void enter()
	{
		
		in_file >> Name >> population >> major;
	}
	void print()
	{
		cout << Name << " " << population << " " << major << endl;
	}


};
#endif // !_CAPITAL_
