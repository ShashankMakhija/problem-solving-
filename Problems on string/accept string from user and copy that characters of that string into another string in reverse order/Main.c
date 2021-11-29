//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// 
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
Test Cases : 
	
	In : Marvellous Python
		 
	Out : nohtyP suollevraM
	
*/
#include <stdio.h>



void strcpyRevX( char *src , char *dest )
{
	if ( src == NULL )
	{
		return;
	}
	
	while ( *src != '\0' )
	{
		src++;
	}
	
	src--;
	while ( &src != &src[0] )
	{
		*dest = *src;
		dest++;
		src--;
	}
	
	*dest = src[0];
	dest++;
	*dest = '\0';
}


int main()
{
	char str1[50];
	char str2[50];
	
	printf ("Enter string :");
	scanf ( "%[^'\n']s" , str1 );
	
	strcpyRevX (  str1 , str2 );
	
	printf ( "\n\n%s\n" , str2 );

return 0;
}
