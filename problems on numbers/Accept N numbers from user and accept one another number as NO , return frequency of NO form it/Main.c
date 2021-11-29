////////////////////////////////////////////////////////////////////////////////
//
//5. Accept N numbers from user and accept one another number as NO , return frequency of NO form it.
//
/////////////////////////////////////////////////////////////////////////////////

/*
Input : N : 6
NO: 66
Elements :85 66 3 66 93 88
Output : 2

Input : N : 6
NO: 12
Elements :85 11 3 15 11 111
Output : 0
*/

#include <stdio.h>
#include <stdlib.h>

int FrqOfNO( int iSize , int *Arr , int NO )
{
	int iFrqCnt = 0;
	
	for ( int iCnt = 0 ; iCnt < iSize ; iCnt++,Arr++ )
	{
		if ( *Arr == NO )
		{
			iFrqCnt++;
		}
	}
	
	return iFrqCnt;
}


int main()
{
	int iSize = 0 ; int NO = 0;
	printf ("enter Size  : ");
	scanf("%d" , &iSize );
	
	int *p = NULL;
	p = ( int* ) calloc ( iSize , sizeof( int ) );
	
	printf ("Enter elements in the Array :\n");
	for ( int iCnt = 0 ; iCnt < iSize ; iCnt++ )
	{
		scanf ( "%d" , &p[ iCnt ] );
	}
	
	printf("\n Enter Number of which you want to chack frequency of : ");
	scanf ("%d" , &NO );

	int Frq = 0;
	Frq = FrqOfNO ( iSize , p , NO );
	
	printf ("\n Frqency of %d is  : %d \n" , NO , Frq );	 
	 

return 0;
}
