#include <stdio.h>

typedef unsigned int UINT;

UINT TurnBitOFF ( UINT iNo , UINT iPos )
{
	if ( iPos < 0 || iPos > 32 )
	{
		return -1;
	}
	
									// 0000 0001
	int iMask = 0x00000001;
	int iRes = 0;
	 							    // 0000 1010
	//								   0000 1000
	// 1 1 -> 0
	// 0 1 -> 0
	iMask = iMask << ( iPos - 1 );
	
	if ( (iNo & iMask) == iMask )
	{
		iRes = iNo ^ iMask;
		return iRes;
	}
	else
	{
		return iNo;
	}
	
}


int main ()
{
	int iNo = 0; int iBitPos = 0; UINT iRet = 0;
	
	printf ("Enter Number :");
	scanf ( "%d" , &iNo );
	
	printf ( "Enter Position " );
	scanf ( "%d" , &iBitPos );
	
	iRet = TurnBitOFF ( iNo , iBitPos );
	
	printf ( "\n Modified Number after turning %d Bit OFF :\n  %d\n" , iBitPos , iRet );

return 0;
}
