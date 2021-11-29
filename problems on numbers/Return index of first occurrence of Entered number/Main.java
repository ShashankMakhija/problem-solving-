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
		
		System.out.println( "Enter number to get first index of : " );
		int iValue = IN.nextInt();
		int iIndex = array.indexFirstOcc( iValue );
		
		System.out.println( iIndex );
	}
}

class ArrayXX extends ArrayX
{
	public ArrayXX( int iSize )
	{
		super( iSize );
	}
	
	public int indexFirstOcc( int iNum )
	{
		int i = 0;
		
		for ( i = 0 ; i < Arr.length ; i++ )
		{
			if ( Arr[i] == iNum )
			{
				break;
			}
		}
		if ( i == Arr.length )
		{
			return -1;
		}
		else
		{
			return i;
		}
	}
	
}
