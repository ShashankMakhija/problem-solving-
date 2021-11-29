//  o/p :            1 2 3 4 5
//                   1 * * * 5
//                   1 * * * 5
//                   1 * * * 5
//                   1 2 3 4 5

import java.util.Scanner;

class Main
{
	public static void main( String[] args )
	{
		System.out.println( "Enter Number of rows" );
		Scanner IN = new Scanner( System.in );
		int n = IN.nextInt();
		
		Pattern pattern = new Pattern( n );
		pattern.displayPattern();
		
		IN = null;
		pattern = null;
	}
}

class Pattern
{
	private int n;
	
	public Pattern( int n )
	{
		this.n = n;
	}
	
	void displayPattern()
	{
		int iRow = 0 , iCol = 0 ;
		
		for ( iRow = 1 ; iRow <= n ; iRow++ )
		{
			for ( iCol = 1; iCol <= n ; iCol++ )
			{
				if ( (iRow > 1 && iCol > 1 ) && ( iRow < n && iCol < n )  )
				{
					System.out.print( "*" );
				}
				else
				{
					System.out.print( iCol );
				}
			}
			System.out.println();
		}
		System.out.println();
	}
}