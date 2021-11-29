package CustomPackage;
import java.util.Scanner;

public class ArrayX
{
	protected int Arr[];
	
	public ArrayX( int iSize )
	{
		Arr = new int [iSize];
	}
	
	public void acceptArray()
	{
		System.out.println( "Enter Elements in the Array : " );
		Scanner IN = new Scanner ( System.in );
		
		for ( int i = 0 ; i < Arr.length ; i++ )
		{
			Arr[i] = IN.nextInt();
		}
	}
	
	public void displayArray()
	{
		System.out.println ( "Elements in the Array are : " );
		for ( int no : Arr )
		{
			System.out.print ( no + " " );
		}
		System.out.println ();
	}
	
	public int summationOfAll()
	{
		int iSum = 0;
		
		for ( int no : Arr )
		{
			iSum = iSum + no;
		}
		return iSum;
	}
	
	public int summationOfEven()
	{
		int iEvenSum = 0;
		for ( int no : Arr )
		{
			if ( (no % 2) == 0 )
			{
				iEvenSum += no;
			}	
		}
		return iEvenSum;
	}
	
	public int summationOfOdd()
	{
		int iOddSum = 0;
		for ( int no : Arr )
		{
			if ( (no % 2) != 0 )
			{
				iOddSum += no;
			}	
		}
		return iOddSum;
	}
	
}
