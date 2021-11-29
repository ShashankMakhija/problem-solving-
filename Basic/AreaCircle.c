#include <stdio.h>
#define PI 3.14f

double CircleArea(float fRadius)
{
	return ( PI * (fRadius * fRadius) ) ;
}


int main()
{
	float fValue = 0.0;
	double dRet = 0.0;
	printf("Enter radius");
	scanf("%f",&fValue);
	dRet = CircleArea(fValue);
	printf("%.4lf" , dRet );
return 0;
}
