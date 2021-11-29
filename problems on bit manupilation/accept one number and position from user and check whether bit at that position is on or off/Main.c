#include <stdio.h>
#include <stdbool.h>
typedef unsigned int UINT;

bool ChkBit ( UINT iNo , UINT iPos )
{
	if ( iPos < 0 || iPos > 32 )
	{
		return false;
	}
	
	//	0000 0000 | 0000 0000 | 0000 0000 | 0000 0001
	int iMask = 0x00000001;
	int iRes = 0;
	// 0000 0000 | 0000 0000 | 0000 0000 | 0000 1010
	// 0000 0000 | 0000 0000 | 0000 0000 | 0000 1000
	iRes = iMask << ( iPos - 1 );
	
	if ( (iNo & iRes) == iRes )
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
	int iNo = 0; int iBitPos = 0; bool bRet = false;
	
	printf ("Enter Number :");
	scanf ( "%d" , &iNo );
	
	printf ( "Enter Position " );
	scanf ( "%d" , &iBitPos );
	
	bRet = ChkBit ( iNo , iBitPos );
	
	if ( bRet == true )
	{
		printf ( "TRUE" );
	}
	else 
	{
		printf ( "FALSE" );	
	}
	

return 0;
}
