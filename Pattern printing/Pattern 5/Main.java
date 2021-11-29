/*
1 2 3 4 
5 6 7 8
8 10 11 12

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
		int Temp = 1;
		int i = 0,j = 0;
		for (  i = 1 ; i <= iRow ; i++)
		{
			for ( j = 1 ; j <= iCol ; j++ , Temp++)
			{
				System.out.print( Temp + "\t" );
			}
			System.out.println();
		}
		System.out.println();
	}
}
