///////////////////////////////////////////////////////////////////////////////////
//
//4.Accept N numbers from user and display all such numbers which contains 3 digits in it.
//
//
/////////////////////////////////////////////////////////////////////////////////////

/*
Test Cases:
	Input : 8225 665 3 76 953 858
	Output : 665  953 858
		
*/

#include <stdio.h>
#include <stdlib.h>

void ThreeDigitNum( int *Arr , int iLength )
{
	int iCnt = 0;
	
	for ( iCnt = 0 ; iCnt < iLength ; iCnt++ )
	{
		if ( Arr[iCnt] > 99 && Arr[iCnt] < 1000  )
		{
			printf ( "%d\t" ,Arr[iCnt]);
		}
	}
	printf ("\n");
}

int main()
{
	int iLength = 0; int *Arr = NULL ; int iCnt = 0; int NO = 0; int iRet =0;
	printf ("Enter Size of Array :");
	scanf ( "%d" , &iLength );
	
	Arr = ( int* )calloc ( iLength , sizeof(int) );
	
	// Accept Array
	for ( iCnt = 0 ; iCnt < iLength ; iCnt++  )
	{
		scanf( "%d" , &Arr[iCnt] );
	}
	

	 ThreeDigitNum ( Arr , iLength );
	
	
	free(Arr);

return 0;
}





















