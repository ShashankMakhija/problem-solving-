#include <stdio.h>
#include <stdbool.h>
typedef unsigned int UINT;

UINT toggleFirstLastNibble ( UINT iNo)
{
	
	// 0000 | ... | 1011
	// 1111 | ... | 1111
	
	// 0 1 -> 1
	// 1 1 -> 0
	
	
	UINT iMask = 0xf000000f;
	UINT iRet = 0;
	
	iRet = iNo ^ iMask;
	
	return iRet ;
}


int main ()
{
	UINT iNo = 0;  UINT iRet = 0;
	
	printf ("Enter Number :");
	scanf ( "%u" , &iNo );
	
	iRet = toggleFirstLastNibble ( iNo );
	
	printf ( "Number after toggling first and last nibble : %u \n" , iRet );
	

return 0;
}
