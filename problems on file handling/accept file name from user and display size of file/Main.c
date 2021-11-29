
/*4. Write application which accept file name from user and display size of file.*/
/*Input : Demo.txt*/
/*Output : File size is 56 bytes*/

#include <stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>


int sizeInByetes( int fd )
{
	char Data[5] = {'\0'}; 
	int iRet= 0;
	int iTemp = 0;
	
	while ( ( iRet = (read( fd , Data , sizeof(Data) )) ) != 0 )
	{
		iTemp = iTemp + iRet;
	}
	
	return iTemp;
}

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
	int iSize = sizeInByetes( fd );
	
	printf( " Size of file is %d bytes" , iSize );
	
	printf ( "\n" );
	close(fd);
	
return 0;
}


