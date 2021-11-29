////////////////////////////////////////////////////////////////////////////////
// 
// Accept N numbers from user and return frequency of even numbers.
//
//////////////////////////////////////////////////////////////////////////////////////

/*
	Input : N : 6

	Elements :85 66 3 80 93 88

	Output : 3
*/

import java.util.Scanner;

class Main
{
	public static void main ( String arg[] )
	{
		int iSize = 0;
		Scanner INPUT = new Scanner ( System.in );
		System.out.println ( "Enter Number of elements :" );
		iSize = INPUT.nextInt();
		
		Array Array = new Array( iSize );
		
		Array.Accept();
		int iRet = Array.FrqOfEven();
		
		
		System.out.println (iRet);
	}
}

class Array
{
	public int Arr[];
	
	public Array ( int iSize )
	{
		Arr = new int [ iSize ];
	}
	
	public void Accept()
	{
		Scanner INPUT = new Scanner ( System.in );
		for ( int i = 0 ; i < Arr.length ; i++ )
		{
			Arr[i] = INPUT.nextInt();
		}
	}
	public int FrqOfEven()
	{
		int Frq = 0;
		for ( int no : Arr )
		{
			if ( ( no % 2 ) == 0 )
			{
				Frq++;
			}
		}
		return Frq;
	}
}












