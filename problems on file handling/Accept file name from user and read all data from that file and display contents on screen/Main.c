/*3. Write application which accept file name from user and read all data from that file*/
/*and display contents on screen.*/
/*Input : Demo.txt*/
/*Output : Display all data of file*/

#include <stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>


int main()
{
	int fd = 0;
	char fname[50] = {'\0'};
	char Buffer[5] = {'\0'};
	
	printf( "Enter file name to open : " );
	scanf("%s" , fname );
	fd = open ( fname , O_RDONLY );
	
	if ( fd != -1 )
	{
		printf( "File opened Successfully\n" );
	}
	else
	{
		printf( "Cannot open file or file dont exist \n" );
	}
	int iRet = 0;
	
	printf( "Data in the file is : \n" );
	
	while (  (iRet = ( read(fd,Buffer,sizeof(Buffer)) ) )!= 0 )
	{
		write ( 1 , Buffer , iRet );
	}
	
	printf ( "\n" );
	close(fd);
	
return 0;
}


