////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// 1. Write a program which displays ASCII table. 
// Table contains symbol, Decimal, Hexadecimal and Octal representatio of every member from 0 to 255..
//
///////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>


void DisplayASCII()
{
	printf ("Symbol \t Dec  \t Hex \t Oct \n"  );
	for ( int i = 0 ; i <=255 ; i++ )
	{
		printf ("  %c\t %d\t %x\t %o\t  \n" , i ,i, i,i );
	}			
}

int main ()
{	
	DisplayASCII();

return 0;
}
