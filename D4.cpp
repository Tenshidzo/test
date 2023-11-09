#include "D4.h"

D4::D4(int x)
	:D3(x)
{
	f = x;
}

void D4::show() const
{
	D3::show();
	cout << "F: " << f << endl;
}
