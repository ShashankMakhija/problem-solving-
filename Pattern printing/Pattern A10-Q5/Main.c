/*
	Input : iRow = 4 iCol = 4
	Output : 
	1 1 1 1
	2 2 2 2
	3 3 3 3
	4 4 4 4
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
	int iRowFill = 0;
	int iRowCnt = 0;
	
	for ( iRowCnt = 1 ; iRowCnt <= iRow ; iRowCnt++ )
	{
		for ( iRowFill = 1 ; iRowFill <= iCol ; iRowFill++ )
		{
			printf ("%d " , iRowCnt);
		}
		
		printf ("\n") ;
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
