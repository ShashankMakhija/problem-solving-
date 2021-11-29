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
		
		int iProduct = array.productOfOddInArray();
		
		System.out.println( iProduct );
	}
}

class ArrayXX extends ArrayX
{
	public ArrayXX( int iSize )
	{
		super( iSize );
	}
	
	public int productOfOddInArray()
	{
		int iMulti = 1; int i = 0 ; boolean flag = false;
		
		for ( i = 0 ; i < Arr.length ;  i++ )
		{
			if ( (Arr[i] % 2) != 0)
			{
				flag = true;
				iMulti = iMulti * Arr[i];
			}
		}
		if ( flag == true )
		{
			return iMulti;
		}
		else
		{
			return 0;
		}
	}
	
}
