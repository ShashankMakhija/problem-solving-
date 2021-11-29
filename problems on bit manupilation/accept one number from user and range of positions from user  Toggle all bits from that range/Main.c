#include <stdio.h>

typedef unsigned int UINT;

int toggleRange ( UINT iNo , int iPos1 , int iPos2 )
{
	int iCnt = 0;
	
	UINT iMask = 0x00000001;
	UINT iMask2 = 0x00000001;
	iMask2 = iMask << ( iPos2 - 1 );
	UINT iTemp = iNo;
	iMask = iMask << ( iPos1 - 1 );
	// 0000 | 1011   0/p -> 0100
	// 0000 | 0001
	//        1010

 	// 1 1 -> 0
 	// 
	
	while ( iMask <= iMask2 )
	{
		 iTemp = iTemp ^ iMask ;
		iMask = iMask << 1;
	}
	
	return iTemp;
}



int main ()
{
	int iNo = 0; int iRet = 0; int iPos1 = 0; int iPos2 = 0;
	
	printf ("Enter Number :");
	scanf ( "%d" , &iNo );
	
	printf ( "Enter Positions :" );
	scanf ( "%d%d" , &iPos1 , &iPos2 );
	
	iRet = toggleRange ( iNo , iPos1 , iPos2 );
	
	printf ( "Number after toogiling range :  %d \n" , iRet );
	

return 0;
}
