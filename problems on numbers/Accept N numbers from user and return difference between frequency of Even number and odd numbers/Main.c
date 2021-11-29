/////////////////////////////////////////////////////////////////////////////////////////////
//
// Accept N numbers from user and return difference between frequency of Even number and odd numbers.
//
///////////////////////////////////////////////////////////////////////////////////

/*Input : N : 7

Elements :85 66 3 80 93 88 90

Output : 1 (4 -3)
*/

#include <stdio.h>
#include <stdlib.h>

int DiffOfEvenOrOdd( int iSize , int *Arr )
{	
	int iFrqEven = 0;
	int iFrqOdd = 0;
	
	for ( int iCnt = 0; iCnt < iSize ; iCnt++ )
	{	
		if ( (Arr[iCnt] % 2) == 0 )
		{
			iFrqEven++;
		}
		else 
		{
			iFrqOdd++;
		}
	}
	
	return iFrqEven - iFrqOdd ;
}

int main()
{
	int iSize = 0;
	int *p = NULL;
	
	printf ("Enter Number of elements you want to Enter : ");
	scanf ("%d" , &iSize );
	
	p = (int *) malloc ( sizeof(int) * iSize );
	printf ("\nEnter elements in the Array :\n");
	for ( int iCnt = 0 ; iCnt < iSize ; iCnt++ )
	{
		scanf ("%d" , &p[ iCnt ] );
	} 
	
	int iRet = DiffOfEvenOrOdd ( iSize , p );
	
	printf ( "\n Difference of frequency of even and odd nos is : %d \n", iRet );
	
	
return 0;
}
