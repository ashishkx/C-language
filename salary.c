#include <stdio.h>

int main()
{
	float bs, ts, da, hr;
	printf("Enter basic salary");
	scanf("%f", &bs);
	da = bs*0.4;
	hr = bs*0.2;
	ts = bs + da + hr;
	printf("%f\n%f\n%f\n", da, hr, ts);
	return(0);
}
	
	