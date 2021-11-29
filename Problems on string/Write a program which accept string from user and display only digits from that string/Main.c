////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// 4. Write a program which accept string from user and display only digits from that string.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
Test Cases : “marve89llous121”
			: 89121

*/

#include <stdio.h>

void strLowerCase ( char *str )
{
	if ( str == NULL )
	{
		return ;
	}
	
	while ( *str != '\0' )
	{
		if ( *str >= '0' && *str <= '9' )
		{
			printf ("%c" , *str );
		}
		str++;
	}
	printf ("\n");
}

int main()
{
	char Arr[20];
	printf ("Enter String : ");
	scanf ( "%[^'\n']s" , Arr );
	strLowerCase ( Arr );
	
	

return 0;
}
