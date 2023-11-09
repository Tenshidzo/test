#include "D1.h"

D1::D1(int x)
	:B1(x), B2(x)
{
	c = x;
}

void D1::show() const
{
	B1::show();
	B2::show();
	cout << "c: " << c << endl;
}
