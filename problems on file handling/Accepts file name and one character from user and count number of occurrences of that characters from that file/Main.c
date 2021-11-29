/*4. Write a program which accepts file name and one character from user and*/
/*count number of occurrences of that characters from that file.*/
/*Input : Demo.txt*/
/*‘M’*/
/*Output : Frequency of M is 7*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>


int CountChar(char FName[] , char ch )
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
		if( Data[iCnt] == ch )
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
	char ch='\0';
	
	printf("Enter file name");
	scanf("%s",FileName);
	
	printf( "Enter char" );
	scanf(" %c",&ch);
	
	iRet = CountChar( FileName , ch );
	printf("Frequency of ' %c ' -> %d\n",ch ,iRet);
	
	return 0;
}
