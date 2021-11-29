////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// 2.Write a program which accept string from user and convert it into upper case
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
Test Cases :
Input : Marvellous Multi OS
Output : MARVELLOUS MULTI OS
		

*/

#include <stdio.h>

void strUpperCase ( char *str )
{
	if ( str == NULL )
	{
		return ;
	}
	
	while ( *str != '\0' )
	{
		if ( *str >= 'a' && *str <= 'z' )
		{
			*str -= 32;
		}
		str++;
	}
}

int main()
{
	char Arr[20];
	printf ("Enter String : ");
	scanf ( "%[^'\n']s" , Arr );
	
	strUpperCase ( Arr ) ;
	
	printf ( "\n%s\n" , Arr );

return 0;
}
