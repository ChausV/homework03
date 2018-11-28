#include "golf.h"
#include <iostream>

using std::cout;
using std::endl;

int main()
{
	// setGolf() non-interactive test
	cout << "        setGolf()-non-interactive tests:" << endl;
	golf g1;
	setGolf(g1, "John Smith", 36);
	showGolf(g1);
	setGolf(g1, nullptr, 22);
	showGolf(g1);
	setGolf(g1, "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnop", 13); // 42 ch.
	showGolf(g1);
	setGolf(g1, "John Smith", 36);
	showGolf(g1);
	cout << endl;

	// handicap() tests
	cout << "        handicap() tests:" << endl;
	golf g2;
	setGolf(g2, "Jane Doe", 36);
	showGolf(g2);
	handicap(g2, 17);
	showGolf(g2);
	handicap(g2, 0);
	showGolf(g2);
	handicap(g2, -1);
	showGolf(g2);
	cout << endl;

	// setGolf() interactive test
	cout << "        setGolf()-interactive tests (empty name to finish):" << endl;
	golf g3;
	while (setGolf(g3))
	{
		cout << "   setGolf() result: " << endl;
		showGolf(g3);
		cout << endl;
	}

	return 0;
}