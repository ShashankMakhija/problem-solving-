//////////////////////////////////////////////////////////////////////
//
//5. Accept N numbers from user and return product of all odd elements
//
/////////////////////////////////////////////////////////////////////

/*
 Input :
	N : 6
	Elements : 15 66 3 70 10 88
	o/p : 45
*/
import java.util.Scanner;

class Main
{
	public static void main( String Arg[] )
	{
		int iLength = 0;
		System.out.println( "Enter length : " );
		Scanner INPUT = new Scanner ( System.in );
		iLength = INPUT.nextInt();
		
		Array Array = new Array( iLength );
		Array.Accept();
		
		int iRet = Array.ProductOfOdd();
		System.out.println ( iRet );
				
	}
}

class Array
{
	private int Arr[];
	
	public Array( int iSize)
	{
		Arr = new int [ iSize ];
	}  
	
	public void Accept()
	{
		Scanner sobj = new Scanner ( System.in );
		for ( int iCnt = 0 ; iCnt < Arr.length ; iCnt++ )
		{
			Arr[ iCnt ] = sobj.nextInt();
		}
	}
	
	public int ProductOfOdd()
	{
		int iProduct = 1; int iTemp = 0;
		for ( int no : Arr )
		{
			if ( (no % 2) != 0 )
			{
				iProduct *= no;
				iTemp++;
 			}
		}
		if ( iTemp == 0 )
		{
			return 0;
		}
		
	 return iProduct;
	}
}


