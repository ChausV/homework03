#include "Move.h"
#include <iostream>

using std::cout;
using std::endl;

int main()
{
	// Move constructor tests
	cout << "        Move constructor tests:" << endl;
	Move m1;
	Move m2(2.2);
	Move m3(2.2, 4.4);
	m1.showmove();
	m2.showmove();
	m3.showmove();
	cout << endl;

	// reset() tests
	cout << "        Move::reset() tests:" << endl;
	m1.reset(2.2, 4.4);
	m2.reset(4.4);
	m3.reset(0.0, -2.2);
	m1.showmove();
	m2.showmove();
	m3.showmove();
	cout << endl;

	// add() tests
	cout << "        Move::add() tests:" << endl;

	constexpr int N = 3;
	Move m[N] = {m1, m2, m3};

	for (int i = 0; i < N; ++i)
	{
		cout << "m" << i + 1 << " before addition: ";
		m[i].showmove();
	}

	Move arr[N][N];
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			arr[i][j] = m[i].add(m[j]);
			cout << "m" << i + 1 << ".add(m" << j + 1 << ") returns Move: ";
			arr[i][j].showmove();
		}
	}

	for (int i = 0; i < N; ++i)
	{
		cout << "m" << i + 1 << " after addition: ";
		m[i].showmove();
	}

	return 0;
}