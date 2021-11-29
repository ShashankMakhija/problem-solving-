//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// 4. Write a program which accept string from user and copy small characters of that string into another string.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
Test Cases : 
	
	In : Marvellous Multi OS
		 	
	Out : arvellousmulti	
	
*/
#include <stdio.h>

void strNcpy( char *src , char *dest )
{
	if ( src == NULL )
	{
		return ;
	}
	
	while ( *src != '\0')
	{
		if ( *src >= 'a' && *src <= 'z' || *src == ' ' )
		{
			*dest = *src;
			dest++;
		}
		src++;
	}
}

int main()
{
	char Arr[30] = {'\0'} ; char Brr[30] = {'\0'};
	printf ("Enter your string :");
	scanf ( "%[^'\n']s" , Arr );
	
	strNcpy ( Arr , Brr );
	
	printf ( "\n%s\n" , Brr );
	

return 0;
}
