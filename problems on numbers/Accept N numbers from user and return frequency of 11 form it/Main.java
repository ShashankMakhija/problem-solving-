///////////////////////////////////////////////////////////////////////
//
// 4. Accept N numbers from user and return frequency of 11 form it.
//
///////////////////////////////////////////////////////////////////

/*
Test Cases:

	Input : N : 6
	Elements :85 66 3 15 93 88
	Output : 0

	Input : N : 6
	Elements :85 11 3 15 11 111
	Output : 2

*/
import java.util.Scanner;

class Main
{
	public static void main ( String Arg[] )
	{
		int iSize = 0;
		System.out.println ("ENter Size of Array :");
		Scanner sobj = new Scanner ( System.in );
		
		iSize = sobj.nextInt();
		
		Array Array = new Array( iSize );
		
		Array.Accept ();
		int iRet = Array.FrqOf11();
		
		System.out.println (" Frequency of 11 is :  " + iRet );
		
	}
}

class Array
{
	private int Arr[];
	
	public Array( int iSize )
	{
		Arr = new int [ iSize ];
	}
	
	public void Accept()
	{
		Scanner sobj = new Scanner( System.in );
		
		for ( int iCnt = 0 ; iCnt < Arr.length ; iCnt++ )
		{
			Arr[ iCnt ] = sobj.nextInt();
		}
	}
	
	public int FrqOf11 ()
	{
		int iFrqCnt = 0;
		for ( int no : Arr )
		{
			if ( no == 11 )
			{
				iFrqCnt++;
			}
		}
		return iFrqCnt;
	}
}






















