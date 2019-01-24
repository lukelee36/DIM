#include "euclide.h"

static void isGreater(unsigned int * a, unsigned int *b)
{
	unsigned int t;
	if(a<b)
	{
		t = *b;
		*b = *a;
		*a = t;
	}
}

unsigned int nsd(unsigned int a, unsigned int b)
{
	unsigned int r = 0;
	isGreater(&a,&b);
	printf("%d is greater then %d\n", a,b);

	r = a%b;
	while(r>0)
	{
		a = b;
		b = r;
		r = a%b;
	}

	return b;
}
