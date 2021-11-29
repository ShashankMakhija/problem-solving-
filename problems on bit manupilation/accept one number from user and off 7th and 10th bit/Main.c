#include <stdio.h>
#include <stdbool.h>

typedef unsigned int UINT;

UINT Off7thN10thBit ( UINT iNo )
{
	UINT iRes = 0;
	UINT iMask = 0x00000240;
	// 0000 0000 | 0000 0000 | 0001 0101 | 1100 0000
	// 0000 0000 | 0000 0000 | 0000 0010 | 0100 0000
	
	/*
		^ 
		
		0 0 -> 0
		0 1 -> 1
		1 0 -> 1
		1 1 -> 0
			
	*/
	
	iRes = iNo ^ iMask;
	
	return iRes;
	
}

int main()
{

	int iNo = 0; UINT iRet = 0;
	
	printf ( "Enter Number :" );
	scanf ( "%d" , &iNo );
	
	iRet = Off7thN10thBit( iNo );
	
	printf ( "\nNumber after turning 7th bit off : %d \n " , iRet );

return 0;
}
