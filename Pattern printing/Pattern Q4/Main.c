/*
	Input : 4
	Output : # 1 * # 2 * # 3 * # 4 *
*/

#include <stdio.h>


void Pattern(int iNo)
{
	for ( int iCnt = 1 ; iCnt <= iNo ; iCnt++ )
	{
		printf("# %d * " , iCnt );
	}
	printf("\n");
}

int main()
{
	int iValue = 0;

	printf("Enter number of elements");
	scanf("%d",&iValue);

	Pattern(iValue);

return 0;
}

