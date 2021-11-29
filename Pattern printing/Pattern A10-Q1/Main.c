/*
	Input : iRow = 4 iCol = 3
	Output : 
	* * *
	* * *
	* * *
	* * *
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
	int iTemp = 0;
	
	for ( iRow ; iRow !=0 ; iRow-- )
	{
		iTemp = iCol;
		while ( iTemp != 0 )
		{
			printf ("* ");
			iTemp--;
		}
		
		printf("\n");
	}
}

int main()
{
	int iValue1 = 0, iValue2 = 0;

	printf("Enter number of rows and columns");
	scanf("%d%d",&iValue1, &iValue2);

	Pattern(iValue1, iValue2);

return 0;
}
