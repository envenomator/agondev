/************************************************************************/
/*									*/
/*                      Copyright (C)1999-2008 by Zilog, Inc.               */
/*                                                                      */
/************************************************************************/
#include <math.h>
#define	ln10	2.30258509299404

double log10(double arg)
{
	return(log(arg)/ln10);
}

float log10f(float) __attribute__((alias("log10")));
