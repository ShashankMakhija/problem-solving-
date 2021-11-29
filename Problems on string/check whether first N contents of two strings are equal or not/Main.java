//Write a program which 2 strings from user and check whether
//first N contents of two strings are equal or not.
//Note : If third parameter is greater than the size of second string
//then concat whole string after first string.
	//Input :
	//“Marvellous Infosystems”
	//“Marvellous Logic Building”
	//10
	//Output :
	//TRUE

import java.util.Scanner;

class Main
{
	public static void main ( String args[] )
	{	
		Scanner IN = new Scanner ( System.in );
		
		System.out.println( "Enter First string :" );
		String str1 = IN.nextLine();
		
		System.out.println( "Enter Second string :" );
		String str2 = IN.nextLine();
		
		System.out.println( "Enter N" );
		int N = IN.nextInt();
		
		StringX string = new StringX();
		
		boolean bRet = false;
		bRet = string.StrcmpX ( str1 , str2 , N );
		
		if ( bRet == true )
		{
			System.out.println( "TRUE" );
		}
		else
		{
			System.out.println( "False" );
		}
		
	}
}

class StringX
{
	public boolean StrcmpX ( String src , String dest , int N )
	{
		char cSrc[] = src.toCharArray();
		char cDest[] = dest.toCharArray();
		int iCnt = 0;
		
		if ( cDest.length < N )
		{	
			N = cDest.length;	
		}
		
		if ( cSrc.length < cDest.length && cSrc.length < N )
		{
			N = cSrc.length;
		}
		
		for ( iCnt = 0 ; iCnt < N ; iCnt++ )
		{
			if ( cSrc[iCnt] != cDest[iCnt] )
			{
				break;	
			}
		}
		
		if ( iCnt >= N )
		{
			return true;		
		}
		else
		{
			return false;			
		}
	}
}
