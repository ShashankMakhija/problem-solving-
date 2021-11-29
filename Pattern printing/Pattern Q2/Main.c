/*
	Input : 5
	Output : 5 # 4 # 3 # 2 # 1 #
*/

#include <stdio.h>


void Pattern(int iNo)
{
	for ( int iCnt = iNo ; iCnt!=0 ; iCnt-- )
	{
		printf("%d\t#\t" , iCnt );
	}
}

int main()
{
	int iValue = 0;

	printf("Enter number of elements");
	scanf("%d",&iValue);

	Pattern(iValue);

return 0;
}

