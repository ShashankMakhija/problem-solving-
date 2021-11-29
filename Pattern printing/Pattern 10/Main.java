/*
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1

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
		int i = 0,j = 0;
		for (  i = 1 ; i <= iRow ; i++ )
		{
			for ( j = iCol ; j > 0 ; j-- )
			{
				System.out.print( j + " " );
			}
			System.out.println();
		}
		System.out.println();
	}
}
