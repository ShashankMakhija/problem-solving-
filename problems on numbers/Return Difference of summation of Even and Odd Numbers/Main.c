///////////////////////////////////////////////////////////////////////////////
//
// Accept N numbers from user and return difference between summation of even elements and summation of odd elements.
//
///////////////////////////////////////////////////////////////////////////////


#include "Header.h"

int main()
{
	int iSize = 0;
	
	printf ( "Enter Number of elements : \n" );
	scanf ("%d" , &iSize );
	
	int  *p = NULL;
	
	p = ( int* ) malloc ( iSize * sizeof(int) );
	
	if ( p == NULL )
	{
		printf ( "Unable to allocate\n" );
		return -1;
	}
	
	printf (" Enter Elements :\n ");
	for ( int iCnt = 0 ; iCnt < iSize ; iCnt++ )
	{
		scanf ( "%d", &p [iCnt] );
	}
	
	if ( p == NULL || (*p) == 0 )
	{
		printf ( "Unable to allocate\n" );
		return -1;
	}
	
	int iRet = Difference ( iSize , p );
	
	printf ("\nDifference is : %d \n", iRet );
 
return 0;
}
