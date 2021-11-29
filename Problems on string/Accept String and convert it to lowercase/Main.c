////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// 1.Write a program which accept string from user and convert it into lower case.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
Test Cases :

	IN : Marvellous Multi OS
	out : marvellous multi os
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
		if ( *str >= 'A' && *str <= 'Z' )
		{
			*str = *str + 32; 
		}
		str++;
	}
}

int main()
{
	char Arr[20];
	printf ("Enter String : ");
	scanf ( "%[^'\n']s" , Arr );
	
	strLowerCase ( Arr );
	printf ( "\nModified string is  :  %s \n" , Arr );
	

return 0;
}
