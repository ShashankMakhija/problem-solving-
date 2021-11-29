/////////////////////////////////////////////////////////////////////////////////////////
//
// 5. Accept division of student from user and depends on the division display exam timing.
//	  There are 4 divisions in school as A,B,C,D. 
//    Exam of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM.
//    (Application should be case insensitive)
//
///////////////////////////////////////////////////////////////////////////////////////

/*
Test Cases :
	
	Input : C
	Output : Your exam is at 9:20 AM
	
	Input : d
	Output : Your exam is at 10 : 30 AM

*/

#include <stdio.h>

void DisplaySchedule ( char ch )
{
	if ( 
		 ch == 'A' ||
		 ch == 'a'
	   )
	{
		printf ( "Your exam is at 7 AM\n" ) ;
	}
	
	else if ( 
			  ch == 'B' || 
			  ch == 'b'
			)
	{
		printf ( "Your exam is at 8:30 AM\n" );
	}
	
	else if ( 
			  ch == 'C' || 
			  ch == 'c'
			)
	{
		printf ( "Your exam is at 9:20 AM\n" );
	}
		else if ( 
			  ch == 'D' || 
			  ch == 'd'
			)
	{
		printf ( "Your exam is at 10:30 AM\n" );
	}
	
	else
	{
		printf (" Invalid Division \n");
	}
	
}

int main ()
{
	char ch = '\0'; 
	printf ( " Enter Charcter :  " );
	scanf ( "%[^'\n']s" , &ch );
	
	DisplaySchedule ( ch ) ;
	
	

return 0;
}
