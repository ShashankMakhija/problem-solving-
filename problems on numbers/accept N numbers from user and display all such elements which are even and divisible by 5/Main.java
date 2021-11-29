import java.util.Scanner;
import CustomPackage.ArrayX;

class Main 
{
	public static void main ( String Args[] )
	{
		ArrayXX array = new ArrayXX( 6 );
		array.acceptArray();
		array.displayEVENDivisibleBy5();
	}
}

class ArrayXX extends ArrayX
{
	public ArrayXX( int iLength )
	{
		super(iLength);
	}
	
	public void displayEVENDivisibleBy5()
	{
		for ( int no : Arr )
		{
			if ( ((no % 5) == 0) && ((no % 2)==0) )
			{
				System.out.print( no + " " );
			}
		}
		System.out.println();
	}
}

