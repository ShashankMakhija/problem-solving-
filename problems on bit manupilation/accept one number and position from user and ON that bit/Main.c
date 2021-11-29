#include <stdio.h>
#include <stdbool.h>
typedef unsigned int UINT;

 UINT TurnBitON ( UINT iNo , int iPos )
{
	if ( iPos < 0 || iPos > 32 )
	{
		return false;
	}
	
	// 0000 | 1000
	// 0000 | 0010
	// 		| 1010	
	// 0 1 -> 1
	// 1 1 -> 1 
	
	UINT iMask = 0x00000001; UINT iRes = 0;
	iMask = iMask << (iPos - 1);
	
	iRes = iNo | iMask;
	
	printf ( "%d\n\n" , iRes );
	return iRes;
}


int main ()
{
	int iNo = 0; int iBitPos = 0; UINT iRet = 0;  
	
	printf ("Enter Number :");
	scanf ( "%d" , &iNo );
	
	//Filter
	if ( iNo < 0 )
	{
		iNo = -iNo;
	}
	printf ( "%d\n",iNo );
	printf ( "Enter Position " );
	scanf ( "%d" , &iBitPos );
	
	 iRet = TurnBitON ( iNo , iBitPos );
	
	printf ( "Number after turning  %d Bit ON : %u \n" , iBitPos , iRet );
	

return 0;
}
