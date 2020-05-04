#include "stdafx.h"
#include "w32.h"



int factorial(int n)
{
	int mtp = 1;
	while (n > 0)
	{
		mtp = mtp*n;
		n = n - 1;
	}
	return mtp;
}