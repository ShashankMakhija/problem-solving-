/////////////////////////////////////////////////////////////////////////////////////////
//
// 2. Accept character from user. 
// If character is small display its corresponding capital character, 
// and if it small then display itscorresponding capital. 
// In other cases display as it is.
//
///////////////////////////////////////////////////////////////////////////////////////

/*
Test Cases :

	Input :	Q
	Output : q
	
	Input :	m
	Output : M
	
	Input :	4
	Output : 4
	
	Input :	%
	Output : %

*/

#include <stdio.h>


char ToggleUCLC ( char ch )
{
	if ( ch >= 'a' && ch <= 'z' )
	{
		return ch-32;
	}
	else if ( ch >= 'A' && ch <= 'Z' )
	{
		return ch+32;
	}
	else
	{
		return ch;
	}	
}

int main ()
{
	char ch = '\0'; char cRet = '\0';
	printf ( " Enter Charcter :  " );
	scanf ( "%[^'\n']s" , &ch );
	
	cRet = ToggleUCLC ( ch ) ;
	printf (" \n %c \n " , cRet );
	

return 0;
}
