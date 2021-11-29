/*
A B C D
A B C D
A B C D
A B C D

*/
import java.lang.*;
import java.util.Scanner;

class Main
{
	public static void main ( String args[] )
	{
		System.out.println( "Enter row and column" );
		Scanner IN = new Scanner ( System.in );
		int iRow = IN.nextInt();
		int iCol = IN.nextInt();
		
		Pattern pobj = new Pattern();
		pobj.Pattern( iRow , iCol );
	}	
}

class Pattern
{
	public void Pattern( int iRow , int iCol )
	{
		char ch = 'A';
		int i = 0,j = 0;
		for (  i = 1 ; i <= iRow ; i++)
		{
			for ( j = 1, ch = 'A' ; j <= iCol ; j++ , ch++)
			{
				System.out.print( ch + " " );
			}
			System.out.println();
		}
		System.out.println();
	}
}
