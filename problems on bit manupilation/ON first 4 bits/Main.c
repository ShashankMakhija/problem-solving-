#include <stdio.h>
#include <stdbool.h>

typedef unsigned int UINT;

UINT OnFirst4Bits ( UINT iNo )
{
	UINT iRes = 0;
	UINT iMask = 0x0000000F;
	// 0000 0000 | 0000 0000 | 0001 0101 | 1100 1001
	// 0000 0000 | 0000 0000 | 0000 0000 | 0000 1111
	
	//  1 1 -> 1
	//  0 1 -> 1
	
	iRes = iNo | iMask;
	
	return iRes;
	
}

int main()
{

	int iNo = 0; UINT iRet = 0;
	
	printf ( "Enter Number :" );
	scanf ( "%d" , &iNo );
	
	iRet = OnFirst4Bits( iNo );
	
	printf ( "\nNumber after switching on first nibble : %d \n " , iRet );

return 0;
}
