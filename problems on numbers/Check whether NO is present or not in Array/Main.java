import CustomPackage.ArrayX;
import java.util.Scanner;

class Main
{
	public static void main ( String args[] )
	{
		Scanner IN = new Scanner ( System.in );
		System.out.println ( "Enter No of elements you want to enter in  Array  :" ) ;
		
		int iSize = IN.nextInt();
		
		ArrayXX array = new ArrayXX( iSize );
		
		array.acceptArray();
		
		System.out.println ( "Enter number to check weather its available ot not :" );
		int iValue = IN.nextInt();
		boolean bRet  = array.checkAvailability( iValue );
		
		if ( bRet == true )
		{	
			System.out.println( "TRUE" );
		}
		else
		{
			System.out.println( "FALSE" );
		}
	}
}

class ArrayXX extends ArrayX
{
	public ArrayXX( int iSize )
	{
		super( iSize );
	}
	
	public boolean checkAvailability( int iValue )
	{
		int i = 0;
		
		for (  i = 0 ; i < Arr.length ; i++ )
		{
			if ( Arr[i] == iValue )
			{
				break;
			}
		}
		if ( i == Arr.length  )
		{
			return false;
		}
		else
		{
			return true;
		}
	}
	
}
