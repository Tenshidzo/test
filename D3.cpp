#include "D3.h"

D3::D3(int x)
	:D2(x), D1(x)
{
	e = x;
}

void D3::show() const
{
	D1::show();
	D2::show();
	cout << "e: " << e << endl;
}
