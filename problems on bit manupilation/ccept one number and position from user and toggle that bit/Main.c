#include <stdio.h>
#include <stdbool.h>
typedef unsigned int UINT;

UINT toggleBit ( UINT iNo , int iPos )
{
	if ( iPos < 0 || iPos > 32 )
	{
		return false;
	}
	UINT iRet = 0;
	// 1010
	// 0010

	// 1 1 -> 0
	// 0 1 -> 1	
	UINT iMask = 0x00000001;
	iMask = iMask << ( iPos - 1 );
	
	iRet = iNo ^ iMask;
	
	return iRet;	
}


int main ()
{
	int iNo = 0; int iBitPos = 0; UINT iRet = 0;
	
	printf ("Enter Number :");
	scanf ( "%d" , &iNo );
	
	printf ( "Enter Position " );
	scanf ( "%d" , &iBitPos );
	
	iRet = toggleBit ( iNo , iBitPos );
	
	printf ( "Number after toggling  %d Bit ON : %d \n" , iNo , iRet );
	

return 0;
}
