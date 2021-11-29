////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// 3.Write a program which accept string from user and toggle the case.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
Test Cases :

*/

#include <stdio.h>

void ToggleStrCase ( char *str )
{
	if ( str == NULL )
	{
		return ;
	}
	
	while ( *str != '\0' )
	{
		if ( *str >= 'A' && *str <= 'Z')
		{
			*str = ((*str) + 32);
		}
		
		else if ( *str >= 'a' && *str <= 'z' )
		{
			*str = ((*str) - 32);
		}
		str++;
	}
}	

int main()
{
	char Arr[20];
	printf ("Enter String :	");
	scanf ( "%[^'\n']s" , Arr );
	
	ToggleStrCase ( Arr );
	
	printf ( "\n%s\n" , Arr	 );

return 0;
}
