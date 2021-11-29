//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// 5. Accept N numbers from user and display summation of digits of each number.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class Main
{
	public static void main ( String arg[] )
	{
		System.out.println (" Enter length of Array ");
		Scanner input = new Scanner ( System.in );
		int iLength = input.nextInt();
		
		Array Array = new Array( iLength );
		
		Array.Accept();
		
		Array.DigitSum();
		
	}
}

class Array
{
	private int Arr[];
	
	public Array ( int iLength )
	{
		Arr = new int [ iLength ];
	}
	
	public void Accept()
	{
		Scanner input = new Scanner ( System.in );
		int iCnt = 0;
		for ( iCnt = 0 ; iCnt < Arr.length ; iCnt++ )
		{
			Arr[iCnt] = input.nextInt();
		}
	}
	public void DigitSum()
	{
		int iDigit = 0; int iSum = 0;
		for ( int no : Arr )
		{
			iSum = 0;
			while ( no != 0 )
			{
				iDigit = no % 10;
				iSum = iSum + iDigit;
				no = no/10;
			}
			System.out.print(iSum + "\t");
		}
		System.out.println();
	}
}
