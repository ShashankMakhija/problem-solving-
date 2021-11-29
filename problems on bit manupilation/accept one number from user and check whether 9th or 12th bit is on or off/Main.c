#include <stdio.h>
#include <stdbool.h>
typedef unsigned int UINT;

bool check9Or12Bit ( UINT iNo)
{
	//    0000 1000 | 0000  0000
	//         1001
	
	// 1 1 -> 1
	// 1 0 -> 0
	UINT iMask1 = 0x00000800;
	UINT iMask2 = 0x00000100;
	
	if ( ((iNo & iMask1) == iMask1) || ((iNo & iMask2) == iMask2 ) )
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
	int iNo = 0; bool bRet = false;
	
	printf ("Enter Number :");
	scanf ( "%d" , &iNo );
	

	
	bRet = check9Or12Bit ( iNo );
	if ( bRet == true )
	{
		printf ("TRUE\n");
	}
	else
	{
		printf ( "FALSE\n" );
	}
	

return 0;
}
