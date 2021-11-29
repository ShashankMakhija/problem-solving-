/////////////////////////////////////////////////////////////////////////////////////////
//
//3. Accept character from user. If it is capital then display all the characters from the input characters till Z. If input character is small then print all the characters in reverse order till a. In other cases return directly
//
///////////////////////////////////////////////////////////////////////////////////////

/*
Test Cases :
	
	Input : Q
	Output : Q R S T U V W X Y Z
	
	Input : m
	Output : m l k j i h g f e d c b a

*/

#include <stdio.h>
#include <stdbool.h>

void Display ( char ch )
{
	char iCnt = '\0'; 
	
	if ( ch >= 'A' && ch <= 'Z' )
	{
		for ( iCnt = ch ; iCnt <= 'Z' ; iCnt++ )
		{
			printf ("%c  " , iCnt );
		}
	}
	else if ( ch >= 'a' && ch <= 'z' )
	{
		for ( iCnt = ch ; iCnt >= 'a'; iCnt-- )
		{
			printf ("%c  " , iCnt );		
		}
	}
	else 
	{
		return;
	}

		
}

int main ()
{
	char ch = '\0';
	printf ( " Enter Charcter : " );
	scanf ( "%[^'\n']s" , &ch );
	
    Display ( ch ) ;
	
	

return 0;
}
