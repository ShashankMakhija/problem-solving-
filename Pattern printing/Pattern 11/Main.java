/*
H e l l o
H e l l o
H e l l o
H e l l o
H e l l o
*/
import java.lang.*;
import java.util.Scanner;

class Main
{
	public static void main ( String args[] )
	{
		System.out.println( "Enter String" );
		Scanner IN = new Scanner ( System.in );
		String str = IN.nextLine();
		
		Pattern pobj = new Pattern();
		pobj.Pattern( str );
	}	
}

class Pattern
{
	public void Pattern( String str )
	{
		int iRow = this.charCount( str );
		int iCol = iRow;
		
		char Arr[] = str.toCharArray();
		
		int i = 0,j = 0;
		for (  i = 1 ; i <= iRow ; i++)
		{
			for ( j = 0 ; j <= (iCol-1) ; j++ )
			{
				System.out.print( Arr[j] + "\t" );
			}
			System.out.println();
		}
		System.out.println();
	}
	
	public int charCount( String str )
	{
		int iRet = str.length();
		
		return iRet;
	}
	
}
