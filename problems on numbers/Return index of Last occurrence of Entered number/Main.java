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
		
		System.out.println( "Enter number to get Last occurance index of that number : " );
		int iValue = IN.nextInt();
		int iIndex = array.indexLastOcc( iValue );
		
		System.out.println( iIndex );
	}
}

class ArrayXX extends ArrayX
{
	public ArrayXX( int iSize )
	{
		super( iSize );
	}
	
	public int indexLastOcc( int iNum )
	{
		int i = 0;
		
		for ( i = (Arr.length-1) ; i > 0 ; i-- )
		{
			if ( Arr[i] == iNum )
			{
				break;
			}
		}
		return i;
		
	}
	
}
