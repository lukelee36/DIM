/*
 * main.c
 *
 *  Created on: 23. 1. 2019
 *      Author: lukelee36
 */
#include <stdio.h>
#include <stdlib.h>
#include "lib/euclide.h"

int main()
{
	unsigned int a = 15;
	unsigned int b = 50;
	unsigned int result = nsd(a,b);
	printf("NDS id %d", result);
	printf("\n End of operation");
	return 0;
}
