//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// 2. Write a program which accept string from user and copy that characters of that string into another string by removing all white spaces.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
Test Cases : 
	
	In : Marvel lous Pyth on
		 
	Out : MarvellousPython
	
*/
#include <stdio.h>


void strcpyX( char *src , char *dest )
{
	if ( src == NULL )
	{
		return ;
	}
	
	while ( *src != '\0' )
	{
		if ( *src != ' ' )
		{
			*dest = *src;
			dest++;
		}
		src++;
	}
	
}

int main()
{
	char str1[50] = {'\0'} ;
	char str2[50] = {'\0'};
	
	printf ( "Enter string 1 :" );
	scanf ( "%[^'\n']s" , str1 );
	

	strcpyX ( str1 , str2 );
	
	printf ("\n%s\n" , str2 );
	

return 0;
}
