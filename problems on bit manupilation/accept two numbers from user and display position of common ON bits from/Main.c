#include <stdio.h>


typedef unsigned int UINT;

void countONBits ( UINT iNo1 , UINT iNo2)
{
	int iCnt = 1;
	
	UINT iMask = 0x00000001;
	UINT iTemp = 0;
	// 0000 | 1010
	// 0000 | 1111
	//		| 1010
	
	//      | 0001
	iTemp = iNo1 & iNo2;
	
	while ( iMask <= iTemp )	
	{
		if ( (iTemp & iMask) == iMask )
		{
			printf ( "%d\t", iCnt );
		}
		iMask = iMask << 1;
		iCnt++;
	}
	
	printf ("\n");
}



int main ()
{
	int iNo1 = 0,iNo2 = 0;  
	
	printf ("Enter Numbers :");
	scanf ( "%d%d" , &iNo1,&iNo2 );
	

	
	countONBits ( iNo1 , iNo2);
	
	

return 0;
}
