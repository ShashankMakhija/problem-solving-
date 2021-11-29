/*
H e l l o
H e l l *
H e l * * 
H e * * * 
H * * * *
H e * * *
H e l * *
H e l l *
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
		int i = 0 , j = 0;
		
		for ( i = (iCol-1) ; i > 0 ; i-- )
		{
			for ( j = 0 ; j < iCol ; j++ )
			{
				if ( i >= j )
				{	
					System.out.print( Arr[j] + " " );
				}
				else
				{
					System.out.print( "*" + " " );
				}
				
			}
			System.out.println();
		}
		
		for ( i = 0 ; i < iRow ; i++ )
		{
			for ( j = 0 ; j < iCol ; j++ )
			{
				if ( i >= j )
				{	
					System.out.print( Arr[j] + " " );
				}
				else
				{
					System.out.print( "*" + " " );
				}
			}
			System.out.println();
		}
		
	}
	
	public int charCount( String str )
	{
		int iRet = str.length();
		
		return iRet;
	}
	
}
