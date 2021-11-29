import CustomPackage.ArrayX;
import java.util.Scanner;

class Main
{
	public static void main ( String args[] )
	{
		Scanner IN = new Scanner ( System.in );
		System.out.println ( "Enter No of elements you want to enter in  Array  :" ) ;
		
		int iSize = IN.nextInt();
		
		ArrayXX array = new ArrayXX(  iSize );
		
		array.acceptArray();
		
		System.out.println( "Enter Range :" );
		int iStart = IN.nextInt();
		int iEnd = IN.nextInt();
		
		
		array.displayRange( iSize , iStart , iEnd );
		
	}
}

class ArrayXX extends ArrayX
{
	public ArrayXX( int iSize )
	{
		super( iSize );
	}
	
	public void displayRange( int iNum , int iStart , int iEnd  )
	{
		int i = 0;
		if ( iStart > iEnd )
		{
			System.out.println( "Invalid Range" );
			return;	
		}
		System.out.println( "Elements in entered range are : " );
		
		for ( i = 0 ; i < Arr.length ; i++ )
		{
			if ( Arr[i] >= iStart && Arr[i] <= iEnd )
			{
				System.out.print( Arr[i]+" " );
			}
		}
		
		if ( i == Arr.length )
		{
			System.out.println("-1");
		}
		System.out.println();
	}
	
}
