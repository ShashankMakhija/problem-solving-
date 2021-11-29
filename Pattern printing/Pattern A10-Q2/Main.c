/*
	Input : iRow = 4 iCol = 3
	Output : 
	1 2 3
	1 2 3
	1 2 3
	1 2 3
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
	int iItr = 1;
	
	for ( iItr ; iItr <= iRow ; iItr++ )
	{
		for ( int iItr2 =1 ; iItr2 <= iCol ; iItr2++ )
		{
			printf ("%d ",iItr2);
		}
		printf ("\n");
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
