#ifndef PERSON_H
#define PERSON_H

#include <cstring>
#include <iostream>

class Person
{
private:
	constexpr int static LIMIT = 25;
	std::string mLastName;		// Person's last name
	char mFirstName[LIMIT];		// Person's first name
public:
	Person()
	{
		mLastName = "";
		mFirstName[0] = '\0';
	} // #1
	Person(const std::string & ln, const char * fn = "Heyyou")
	{
		mLastName = ln;
		if (fn)
		{
			strncpy(mFirstName, fn, LIMIT - 1);
			mFirstName[LIMIT - 1] = '\0';
		}
		else
		{
			mFirstName[0] = '\0';
		}
	} // #2
	// the following methods display mLastName and mFirstName
	void Show() const			// firstname lastname format
	{
		std::cout << mFirstName << " " << mLastName << std::endl;
	}
	void FormalShow() const		// lastname, firstname format
	{
		std::cout << mLastName << ", " << mFirstName << std::endl;
	}
};

#endif // PERSON_H