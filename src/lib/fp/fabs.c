/************************************************************************/
/*									*/
/*			Copyright (C) 2000-2008 Zilog, Inc.		*/
/*									*/
/************************************************************************/

/*************************************************
*
* fabs - absolute value
*
* Inputs:
*	j	- value to calculate abs of
*
* Returns:
*	absloute value of j
*
*************************************************/
double fabs(double j)
{
  return(j >= 0.0 ? j : -j);
}

float fabsf(float) __attribute__((alias("fabs")));
