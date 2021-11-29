#include <stdio.h>
#include <stdbool.h>
typedef unsigned int UINT;

bool chkBit ( UINT iNo , int iPos1 , int iPos2)
{

	UINT iMask1 = 0x00000001;
	UINT iMask2 = 0x00000001;
	
	iMask1 = iMask1 << ( iPos1 - 1 );
	iMask2 = iMask2 << ( iPos2 - 1 );
	
	// 1010
	// 0100
	
	if ( ( (iNo & iMask1) == iMask1 ) || ( (iNo & iMask2) == iMask2) )
	{
		return true;
	}
	else
	{
		return false;
	}
}



int main ()
{
	int iNo = 0; int iPos1 = 0; int iPos2 = 0 ; 
	bool bRet = 0;
	
	printf ("Enter Number :");
	scanf ( "%d" , &iNo );
	
	printf ( "Enter two bit positions :" );
	scanf ( "%d%d" , &iPos1 , &iPos2 );
	

	
	bRet = chkBit ( iNo , iPos1 , iPos2 );
	
	if ( bRet == true )
	{
		printf ( "TRUE \n" );
	}
	else
	{
		printf ( "FALSE \n" );
	}
	

return 0;
}
