import java.util.Scanner;

class Main
{
	public static void main( String arg[] )
	{
		int iSize = 0;
		System.out.println ("Enter number of elements you want in array :");
		Scanner INPUT = new Scanner ( System.in );
		iSize = INPUT.nextInt();
		
		Array Array = new Array ( iSize );
		Array.Accept();
		
		boolean bRet = false;
		bRet = Array.CheckFrqOf11();
		
		if ( bRet == true )
		{
			System.out.println ("Number 11 is PRESENT ");
		}
		else
		{
			System.out.println ("Number 11 is ABSENT ");
		}
					
	}
}

class Array
{
	private int Arr[];
	private int iSize;
	
	public Array ( int iSize )
	{
		 this.iSize = iSize;
		 Arr = new int [ iSize ];
		 
	}
	
	public void Accept()
	{
		System.out.println ( "Enter Elements : " );
		Scanner INPUT = new Scanner ( System.in );
		for ( int iCnt = 0 ; iCnt < Arr.length ; iCnt++ )
		{
			Arr[iCnt] = INPUT.nextInt();
		}
	}
	
	public boolean CheckFrqOf11()
	{
		//boolean bFrq = false;
		for ( int iCnt = 0 ; iCnt < Arr.length ; iCnt++ )
		{
			if ( Arr[iCnt] == 11 )
			{
				return true;
			}
		}
		
		return false;
	}
	
}
