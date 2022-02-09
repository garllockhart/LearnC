#include "maxmodul.h"

int max(int x[], int t, int *p)
{
	int i;
	*p = 0;
	i = 1;
	
	while(i < t)
	{
		if(x[*p] < x[i])
		{
			*p = i;
		}
		i = i+ 1;
	}
	
	return *p;
}
