#include "Person.h"

void printOut(const std::string & ln, const char * fn)
{
	Person p(ln, fn);
	p.Show();
	p.FormalShow();
}