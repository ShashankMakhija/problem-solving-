///////////////////////////////////////////////////////////////////////////////////
//
//3. Accept N numbers from user and return difference of largest and smallest
//
//
/////////////////////////////////////////////////////////////////////////////////////

/*
Test Cases:
	Input :
	N : 6
	Elements : 85 66 3 66 93 88
	Output : 90 ( 93 - 3 )
	
		
*/

#include <stdio.h>
#include <stdlib.h>

int DiffOfMaxNMin( int *Arr , int iLength )
{
	int iCnt = 0; int iMin = Arr[0];int iMax = Arr[0];
	
	for ( iCnt = 1 ; iCnt < iLength ; iCnt++ )
	{
		if ( Arr[ iCnt ] < iMin )
		{
			iMin = Arr[iCnt] ;
		}
		if ( Arr[ iCnt ] >  iMax )
		{
			iMax = Arr[ iCnt ] ;
		}
	}
	return iMax - iMin;
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
	

	iRet = DiffOfMaxNMin ( Arr , iLength );
	printf ( "%d\n" , iRet );
	
	free(Arr);

return 0;
}





















