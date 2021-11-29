/*3. Write a program which accepts file name from user and count number of*/
/*white spaces from that file.*/
/*Input : Demo.txt*/
/*Output : Number of white spaces are 13*/
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>


int CountWhite(char FName[])
{
	int fd = 0; int iSize = 0; char Buffer[10] = {'\0'}; int iRet = 0;
	
	fd = open ( FName , O_RDONLY );
	
	if ( fd < 0 )
	{
		printf( "File Not opened , File Missing or unavailable \n" );
	}
	else
	{
		printf( "File successfully opened\n" );
	}
	 

 	char Data[1024] = {'\0'};
 	
	read ( fd , Data , 1024 );
	printf( "Data--> %s\n" , Data );
	int iCnt = 0; int iFrq = 0;
	while ( Data[iCnt] != '\0' )
	{
		if( Data[iCnt] == ' ' )
		{
			iFrq++;
		}
		iCnt++;
	}
	close(fd);
	return iFrq;
}
int main()
{
	char FileName[30];
	int iRet = 0;
	
	printf("Enter file name");
	scanf("%s",FileName);
	
	iRet = CountWhite(FileName);
	printf("Number of White space characters are %d\n",iRet);
	
	return 0;
}
