//Write a program which 2 strings from user and check whether
//contents of two strings are equal or not

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
		
		StringX string = new StringX();
		
		boolean bRet = false;
		bRet = string.checkStrcpyX ( str1 , str2 );
		
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
	public boolean checkStrcpyX ( String src , String dest )
	{
		char cSrc[] = src.toCharArray();
		char cDest[] = dest.toCharArray();
		int iCnt = 0;
		
		if ( cSrc.length != cDest.length )
		{	
			return false ;	
		}
		
		for ( iCnt = 0 ; iCnt < cSrc.length ; iCnt++ )
		{
			if ( cSrc[iCnt] != cDest[iCnt] )
			{
				System.out.println( "Inside break" );
				break;	
			}
		}
		
		if ( iCnt == cSrc.length )
		{
			System.out.println( "if equals" );
			return true;		
		}
		else
		{
			System.out.println( "else");
			return false;			
		}
	}
}
