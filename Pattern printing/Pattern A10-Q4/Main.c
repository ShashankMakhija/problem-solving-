/*
	Input : iRow = 3 iCol = 4
	Output : 
	* # * #
	* # * #
	* # * #	

*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
	int iRowCnt = 1;
	int iRowFill = 1;
	
	for ( iRowCnt ; iRowCnt <= iRow ; iRowCnt++ )
	{
		for ( iRowFill = 1 ; iRowFill <= iCol ; iRowFill++ )
		{
			if ( (iRowFill % 2) == 0  )
			{
				printf("# ");
			}
			else
			{
				printf("* ");
			}
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
