/*
A B C D
a b c d
A B C D
a b c d

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
		char chUC = 'A';
		char chLC = 'a';
		int i = 0,j = 0;
		for (  i = 1 ; i <= iRow ; i++)
		{
			for ( j = 1, chUC = 'A',chLC = 'a' ; j <= iCol ; j++  )
			{
				if ( (i % 2) == 0 )
				{
					System.out.print( chLC + " " );
					chLC++;
				}
				else
				{
					System.out.print( chUC + " " );
					chUC++;
				}
			}
			System.out.println();
		}
		System.out.println();
	}
}
