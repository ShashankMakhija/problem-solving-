#include <stdio.h>
#include <stdbool.h>

typedef unsigned int UINT;

bool CheckBit ( UINT iNo )
{
	UINT iMask = 0x80000001;
	
	if ( (iNo & iMask) == iMask )
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int iNo; bool bRet = false;
	printf ( "Enter Number:" );
	scanf ( "%d" , &iNo );
	
	bRet = CheckBit ( iNo ) ; 
	
	if ( bRet == true )
	{
		printf ( "ON\n" );
	}
	else
	{
		printf ( "Bits are OFF \n" );
	}
	
	 
return 0;
}
