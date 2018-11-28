#include <iostream>
#include <cstring>

#include "golf.h"

using std::cout;
using std::cin;
using std::endl;

void setGolf(golf & g, const char * name, int hc)
{
	if (name)
	{
		strncpy(g.fullname, name, Len - 1);
		g.fullname[Len - 1] = '\0';
	}
	else
	{
		strcpy(g.fullname, "Default_fullname");
	}
	g.handicap = hc;
}

static bool graphCheck(const char * str)
{
	if (!*str)
		return true;
	while (*str)
	{
		if (isgraph(*str))
			return true;
		++str;
	}
	return false;
}

int setGolf(golf & g)
{
	char buff[Len];
	cout << "Enter name: ";
	cin.getline(buff, Len);
	if (!cin.good() || !graphCheck(buff))
	{
		cout << "not valid input" << endl;
		return 0;
	}
	if (buff[0] == '\0')
		return 0;

	int hc;
	cout << "Enter handicap: ";
	cin >> hc;
	if (!cin.good())
	{
		cout << "not valid input" << endl;
		return 0;
	}
	while (cin.get() != '\n')
		continue;

	setGolf(g, buff, hc);
	return 1;
}

void handicap(golf & g, int hc)
{
	g.handicap = hc;
}

void showGolf(const golf & g)
{
	cout << "Name: " << g.fullname << "," << endl;
	cout << "Handicap: " << g.handicap << "." << endl;
}