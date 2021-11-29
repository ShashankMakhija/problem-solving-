import java.util.Scanner;
import CustomPackage.ArrayX;

class Main 
{
	public static void main ( String Args[] )
	{
		ArrayXX array = new ArrayXX( 5 );
		array.acceptArray();
		
		int iRet = array.differenceEvenNOdd();
		
		System.out.println ( "Difference is : " + iRet );
	}
}

class ArrayXX extends ArrayX
{
	public ArrayXX( int iLength )
	{
		super(iLength);
	}
	
	public int differenceEvenNOdd()
	{
		int iSumEven = super.summationOfEven();
		int iSumOdd = super.summationOfOdd();
		
		return iSumEven - iSumOdd;	
	}
}

