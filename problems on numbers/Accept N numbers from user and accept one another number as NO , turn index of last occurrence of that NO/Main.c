///////////////////////////////////////////////////////////////////////////////////
//
//3. Accept N numbers from user and accept one another number as NO , turn index of last occurrence of that NO.
//
//
/////////////////////////////////////////////////////////////////////////////////////

/*
Test Cases:
	Input :
	N : 6
	NO: 66
	Elements : 85 66 3 66 93 88
	Output : 3 

	Input : N : 6
	NO: 93
	Elements : 85 66 3 66 93 88
	Output : 4 

	Input : N : 6
	NO: 12
	Elements : 85 11 3 15 11 111
	Output : -1
	
*/

#include <stdio.h>
#include <stdlib.h>

int LastIndexOfNO( int *Arr , int iLength , int NO )
{
	int iCnt = 0; int iTemp = 0;
	
	for ( iCnt = 0 ; iCnt < iLength ; iCnt++ )
	{
		if ( Arr[ iCnt ] == NO )
		{
			iTemp =  iCnt;
		}
	}
	if ( iTemp != 0 )
	{
		return iTemp;
	}
	else
	{
		return -1;
	}
}

int main()
{
	int iLength = 0; int *Arr = NULL ; int iCnt = 0; int NO = 0; int iRet =0;
	printf ("Enter Size of Arrya :");
	scanf ( "%d" , &iLength );
	
	Arr = ( int* )calloc ( iLength , sizeof(int) );
	
	// Accept Array
	for ( iCnt = 0 ; iCnt < iLength ; iCnt++  )
	{
		scanf( "%d" , &Arr[iCnt] );
	}
	
	printf ( "\nEnter number to find Last index of  : " ) ;
	scanf ( "%d" ,&NO );
	
	iRet = LastIndexOfNO ( Arr , iLength , NO );
	printf ( "%d\n" , iRet );
	
	free(Arr);

return 0;
}





















