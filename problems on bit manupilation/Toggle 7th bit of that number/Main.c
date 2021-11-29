#include <stdio.h>
#include <stdbool.h>

typedef unsigned int UINT;

UINT Toggle7thBit ( UINT iNo )
{
	UINT iRes = 0;
	UINT iMask = 0x00000040;
	// 0000 0000 | 0000 0000 | 0001 0101 | 1100 0000
	// 0000 0000 | 0000 0000 | 0000 0000 | 0100 0000
	
	//  1 1 -> 0
	//  0 1 -> 1
	
	iRes = iNo ^ iMask;
	
	return iRes;
	
}

int main()
{

	int iNo = 0; UINT iRet = 0;
	
	printf ( "Enter Number :" );
	scanf ( "%d" , &iNo );
	
	iRet = Toggle7thBit( iNo );
	
	printf ( "\nNumber after toogle 7th bit off : %d \n " , iRet );

return 0;
}
