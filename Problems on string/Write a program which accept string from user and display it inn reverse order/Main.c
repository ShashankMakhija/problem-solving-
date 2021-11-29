/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// 3. Write a program which accept string from user and display it inn reverse order.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
Test Cases
*/

#include <stdio.h>

unsigned int strlenX( char *str )
{
	int iLength = 0;
	if ( str == NULL )
	{
		return 0;
	}
	
	while ( *str != 0 )
	{
		iLength++;
		str++;
	}
	return iLength;
}


void Reverse( char *str )
{	
	
	int iLength = 0 ;
	if ( str == NULL )
	{
		return ;
	}
	
	iLength = strlenX ( str );
	
	for ( int i = (iLength-1) ; i >= 0 ; i-- )
	{
		printf ( "%c",str[i] );
	}
	printf("\n");
	
}

int main()
{
	char Arr[20]; 
	printf ("Enter String : ");
	scanf ( "%[^'\n']s" , Arr );
	Reverse ( Arr );
	
	
return 0;
}
