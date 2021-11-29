/*
	Input : 5
	Output : A B C D E
	
*/

#include <stdio.h>


void Pattern(int iNo)
{
	char ch = 'A';	
	
	for ( int iCnt = 1 ; iCnt <= iNo ;iCnt++ )
	{
		printf ("%c\t" , ch );
		ch++;
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

