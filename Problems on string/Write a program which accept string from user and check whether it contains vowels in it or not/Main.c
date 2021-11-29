/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	4. Write a program which accept string from user and check whether it contains vowels in it or not.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
Test Cases
IN : marvellous
out : TRUE
*/

#include <stdio.h>
#include <stdbool.h>

bool ChkVowel( char *str )
{
	bool FLAG = false;
	if ( str == NULL )
	{
		return 0;
	}
	
	while ( *str != 0 )
	{
		if ( 
			*str == 'a' || *str == 'A' ||
			*str == 'e' || *str == 'E' ||
			*str == 'i' || *str == 'I' ||
			*str == 'o' || *str == 'O' ||
			*str == 'u' || *str == 'U' 	
		   )
		 {
			
			FLAG = true;
			break;  	
	     }
		str++;
	}
	return FLAG;
}

int main()
{
	char Arr[20]; bool bRet = false ;
	printf ("Enter String : ");
	scanf ( "%[^'\n']s" , Arr );
	
	bRet = ChkVowel ( Arr );
	if ( bRet == true )
	{
		printf ( "TRUE\n" );
	}
	else
	{
		printf ("FALSE \n");
	}
	
	
return 0;
}
