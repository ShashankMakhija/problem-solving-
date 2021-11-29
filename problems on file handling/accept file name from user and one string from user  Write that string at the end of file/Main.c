/*1. Write application which accept file name from user and open that file in read mode.*/
/*Input : Demo.txt*/
/*Output : File opened successfully.*/

#include <stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>


int main()
{
	int fd = 0; int iRet=0;
	char fname[50] = {'\0'};
	char Data[1024] = {'\0'};
	
		
	printf( "Enter file name to open : " );
	scanf("%s" , fname );
	fd = open ( fname , O_RDWR | O_APPEND );
	
	if ( fd != -1 )
	{
		printf( "File opened Successfully\n" );
	}
	else
	{
		printf( "Cannot open file or file dont exist \n" );
		return -1;
	}
	printf( "Enter Text to add to file \n" );
	read ( 1 , Data , 1024 );
	//scanf ( "%s" , Data );
	int iSize = 0;
	while ( Data[iSize] != '\0' )
	{
		iSize++;
	}
	
	write ( fd , Data , (iSize) );
	printf( "Data Appended successfully\n" );
	
	close(fd);
return 0;
}


