//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// 2. Write a program which accept string from user and copy the contents specified  length. (Implement strncpy() function)
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
Test Cases : 
	
	In : Marvellous Multi OS
		 10	
	Out : Marvellous	
	
*/
#include <stdio.h>

void strNcpy( char *src , char *dest , int iCnt )
{
	if ( src == NULL )
	{
		return ;
	}
	
	while ( (*src != '\0') && (iCnt != 0) )
	{
		*dest = *src;
		src++;
		dest++;
		iCnt--;
	}
	dest--;
}

int main()
{
	char Arr[30] = {'\0'} ; char Brr[30] = {'\0'}; int iCharCnt = 0; 
	printf ("Enter your string :");
	scanf ( "%[^'\n']s" , Arr );
	
	printf ( "Enter number of chars you want to print : \n" );
	scanf ( "%d" , &iCharCnt );
	
	strNcpy ( Arr , Brr , iCharCnt );
	
	printf ( "\n%s\n" , Brr );
	

return 0;
}
