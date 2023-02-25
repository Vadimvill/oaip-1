#include"gronsfeld.h"
#include<stdlib.h>

int main()
{
	char* a = (char*)malloc(6);
	a[0] = 'e';
	a[1] = 'g';
	a[2] = 'i';
	a[3] = 'e';
	a[4] = 'j';
	a[5] = '\0';
	
	gronsfeld(a, 0,DECODE_WITH_KEY);
	return 0;
}