/*
* # * #
* # * #
* # * #
* # * #

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
		for (  i = iRow ; i > 0 ; i-- )
		{
			for ( j = 1 ; j <= iCol ; j++ )
			{
				if ( (j % 2) == 0 )
				{
					System.out.print( "#" + " " );
				}
				else
				{
					System.out.print( "*" + " " );
				}
			}
			System.out.println();
		}
		System.out.println();
	}
}
