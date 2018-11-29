#include "Person.h"
#include <string>

void printOut(const std::string & ln, const char * fn);

int main()
{
	// Default Person constructor test
	std::cout << "        Default (#1) Person constructor test:" << std::endl;
	Person p0;
	p0.Show();
	p0.FormalShow();
	std::cout << std::endl;

	// Parametric Person constructor test
	std::cout << "        Parametric (#2) Person constructor test:" << std::endl;
	std::string	ln1 = "Smith";
	char fn1[25] = "Nick";
	Person p1(ln1, fn1);
	p1.Show();
	p1.FormalShow();
	std::cout << std::endl;

	// null fn pointer test
	std::cout << "        Passing nullptr to #2 constructor:" << std::endl;
	char * fn2 = nullptr;
	Person p2(ln1, fn2);
	p2.Show();
	p2.FormalShow();
	std::cout << std::endl;

	// mFirstName oversize test
	std::cout << "        Long / not null terminated array passing:" << std::endl;
	char fn3[40] = "ABCDERGHIJKLMNOPQRSTUVWXYZabcd";	// 30 characters
	Person p3(ln1, fn3);
	p3.Show();
	p3.FormalShow();
	std::cout << std::endl;

	// default parameter test
	std::cout << "        Default parameter in #2 test:" << std::endl;
	Person p4("Dude");
	p4.Show();
	p4.FormalShow();
	std::cout << std::endl;

	// multiple Person.h include test
	std::cout << "        printOut() test:" << std::endl;
	printOut("LastName", "FirstName");
	std::cout << std::endl;

	// signoff
	Person p5("Chaus", "Vitalii");
	p5.Show();

	return 0;
}