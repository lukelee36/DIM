#include "euclide.h"

static void isGreater(unsigned int * a, unsigned int *b)
{
	unsigned int t = 0;
	if(a<b)
	{
		t = a;
		a = b;
		b = t;
	}
}

unsigned int nsd(unsigned int a, unsigned int b)
{
	unsigned int result = 0;
	isGreater(a,b);
	printf("%d is greater then %d", a,b);


	return result;
}
