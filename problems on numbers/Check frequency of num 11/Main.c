//////////////////////////////////////////////////////////////////////////
//
//	A15.4. Accept N numbers from user and return frequency of 11 form it.
//
//////////////////////////////////////////////////////////////////////////
/*
Test Cases:

Input : 
	
	N : 6
    Elements :85 66 3 15 93 88
	Output : 0

	Input : N : 6
	Elements :85 11 3 15 11 111
	Output : 2
	
*/
#include <stdio.h>
#include <stdlib.h>

int FrqCountOf11( int iSize , int *Arr )
{
	int iRet = 0;
	
	for ( int i = 0 ; i < iSize ; i++, Arr++ )
	{
		if ( (*Arr) == 11  )
		{
			iRet++;
		}
	}
return iRet;
}

int main ()
{
	int iSize = 0; int iCnt = 0; int *Arr = NULL;
	
	printf ("Enter Size of array :");
	scanf ("%d" , &iSize );
	
	Arr =  ( int * ) calloc ( sizeof(int) , iSize );
	
	for ( iCnt = 0 ; iCnt < iSize ; iCnt++ )
	{
		scanf ("%d" , &Arr[ iCnt ] );
	}
	
	int iRetFrqCnt = FrqCountOf11( iSize , Arr );
	
	printf ( " Frequency of count 11 is : %d\n" , iRetFrqCnt );

return 0;
}
