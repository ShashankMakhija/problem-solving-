/////////////////////////////////////////////////////////////////////////////////////////
//
// 4. Accept Character from user and check whether it is special symbol or not (!, @, #, $, %, ^, &, *).
//
///////////////////////////////////////////////////////////////////////////////////////

/*
Test Cases :
	
	Input : %
	Output : TRUE
	
	Input : d
	Output : FALSE

*/

#include <stdio.h>
#include <stdbool.h>

bool CheckSpecial ( char ch )
{
	if ( ch == '!' || ch >= '#' && ch <= '&' || ch == '@' || ch == '*' || ch == '^' )
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
	
	bRet = CheckSpecial ( ch ) ;
	
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
