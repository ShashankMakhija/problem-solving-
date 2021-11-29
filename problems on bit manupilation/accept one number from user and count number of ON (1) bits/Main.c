#include <stdio.h>
#include <stdbool.h>
typedef unsigned int UINT;

int countONBits ( UINT iNo)
{
	int iCnt = 0;
	
	UINT iMask = 0x00000001;
	// 0000 | 1011
	// 0000 | 0001
	
	// 1 1 -> 1
	// 0 1 -> 0
	
	while ( iMask <= iNo )	
	{
		if ( (iNo & iMask) == iMask )
		{
			iCnt++;
		}
		iMask = iMask << 1;
	}
	return iCnt;
}



int main ()
{
	int iNo = 0; int iRet = 0;
	
	printf ("Enter Number :");
	scanf ( "%d" , &iNo );
	

	
	iRet = countONBits ( iNo );
	
	printf ( "NUmber of ON bits are : %d \n" , iRet );
	

return 0;
}
