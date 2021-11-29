/*5. Write a program which accepts file name and one count from user and read*/
/*that number of characters from starting position.*/
/*Input : Demo.txt*/
/*12*/
/*Output : Display first 12 characters from Demo.txt*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>


void DisplayN(char FName[] , int iSize )
{
	int fd = 0;  char Buffer[10] = {'\0'}; 
	
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
 	
	read ( fd , Data , iSize );
	printf( "Data--> %s\n" , Data );
	
	close(fd);
	
}
int main()
{
	char FileName[30];
	int iSize=0;
	
	printf("Enter file name");
	scanf("%s",FileName);
	
	printf( "Enter Size" );
	scanf(" %d",&iSize);
	
	DisplayN( FileName , iSize );
	
	
	return 0;
}
