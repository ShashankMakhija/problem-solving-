//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// 5. Write a program which 2 strings from user and concat second string after first string. (Implement strcat() function).
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
Test Cases : 
	
	In : Marvellous Infosystems
		 Logic Building
	Out : Marvellous Infosystems Logic Building
	
*/
#include <stdio.h>
//#include <string.h>

void strcatX( char *src , char *dest )
{
	if ( src == NULL )
	{
		return ;
	}
	
	while ( *src != '\0' )
	{
		src++;
	}
	*src = ' ';
	src++;
	
	while ( *dest != '\0')
	{
		*src = *dest;
		dest++;
		src++;
	}
	*dest = '\0';
}

int main()
{
	char str1[50] = "Marvellous Infosystems";
	char str2[50] = "Logic Building";
	
	strcatX ( str1 , str2 );
	
	printf ( "concatination of 2 strings :\n%s\n" , str1 );
	

return 0;
}
