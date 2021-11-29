//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// 4. Write a program which accept string from user and copy that characters of that string into another string by converting all capital characters into small case.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
Test Cases : 
	
	In : Marvellous Python 2
		 
	Out : mARVELLOUS pYTHON 2
	
*/
#include <stdio.h>


void strcpyToggleX( char *src , char *dest )
{
	if ( src == NULL )
	{
		return ;
	}
	
	while ( *src != '\0' )
	{
		*dest = *src;
		if ( *dest >= 'A' && *dest <= 'Z' )
		{
			*dest = *dest + 32;
		}
		
		else if ( *dest >= 'a' && *dest <= 'z' )
		{
			*dest = *dest - 32;
		}
		
		dest++;
		src++;
	}
	
}

int main()
{
	char str1[50] = {'\0'} ;
	char str2[50] = {'\0'};
	
	printf ( "Enter string 1 :" );
	scanf ( "%[^'\n']s" , str1 );
	

	strcpyToggleX ( str1 , str2 );
	
	printf ("\n%s\n" , str2 );
	

return 0;
}
