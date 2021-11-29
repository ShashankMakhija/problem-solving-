/////////////////////////////////////////////////////////////////////////////////////////
//
// 4. Accept Character from user and check whether it is small case or not (a-z).
//
///////////////////////////////////////////////////////////////////////////////////////

/*
IN : A

Decimal  	65
Octal		0101
Hexadecimal 0X41

*/

#include <stdio.h>

void Display ( char ch )
{
	if ( ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z'  )
	{
		printf ( " Dec : %d \n Oct : %o\n Hex : %p \n" , ch , ch ,ch  );
	}
	else
	{
		return ;
	}	
}

int main ()
{
	char ch = '\0'; 
	printf ( " Enter Charcter :  " );
	scanf ( "%[^'\n']s" , &ch );
	
	Display ( ch ) ;
	

return 0;
}
