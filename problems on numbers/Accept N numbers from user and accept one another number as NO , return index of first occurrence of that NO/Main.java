//////////////////////////////////////////////////////////////////////
//
//2. Accept N numbers from user and accept one another number as NO , return index of first occurrence of that NO.
//
/////////////////////////////////////////////////////////////////////

/*
Test Cases :

	Input : N : 6
			NO : 66
			Elements : 85 66 3 66 93 88
	Output : 1
	
	Input :
N : 6
NO: 12
Elements : 85 11 3 15 11 111 
Output : -1

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
		
		int NO = 0;
		System.out.println ( "Enter number of which you want to find location of first occurance : " );
		NO = INPUT.nextInt();
		int iRet = Array.IndexOfNO( NO );
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
	
	public int IndexOfNO( int NO )
	{
		int iCnt = 0;
		for ( iCnt =  0 ; iCnt < Arr.length ; iCnt++ )
		{
			if ( Arr[ iCnt ] == NO )
			{
				break;
			}
		}
		if ( iCnt < Arr.length )
		{
			return iCnt;
		}
		else 
		{
			return -1;
		}
	}
}


