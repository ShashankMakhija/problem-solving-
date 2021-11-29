/////////////////////////////////////////////////////////////////////////////////////////
//
// 1. Accept Character from user and check whether it is alphabet or not (A-Z a-z)
//
///////////////////////////////////////////////////////////////////////////////////////

/*
Test Cases :
	
	Input : F
	Output : TRUE
	
	Input : &
	Output : FALSE

*/

#include <stdio.h>
#include <stdbool.h>

bool CheckAlphabet ( char Alpha )
{
	if ( 
		Alpha >= 'A' && Alpha <= 'Z' || 
		Alpha >= 'a' && Alpha <= 'z' 
	   )
	{
		return true;
	}
	else
	{
		return false;
	}	
}

int main ()
{
	char ch = '\0'; bool bRet = false;
	printf ( " Enter Charcter :  " );
	scanf ( "%[^'\n']s" , &ch );
	
	bRet = CheckAlphabet ( ch ) ;
	
	if ( bRet == true )
	{
		printf ( "TRUE\n" );
	}
	else 
	{
		printf ( "False\n" );
	}

return 0;
}
