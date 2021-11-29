import java.util.Scanner;

class Main
{
	public static void main ( String args[] )
	{
		System.out.println ( "Enter Number :" );
		Scanner IN = new Scanner ( System.in );
		int iNo = IN.nextInt();
		
		DigitX digit = new DigitX();
		int iRet = digit.digitsMulti ( iNo );
		
		System.out.println ( iRet );
	}
}

class DigitX
{
	public int digitsMulti( int iNo )
	{
		// UPDATOR
//		if ( iNo < 0 )
//		{
//			iNo = -iNo;
//		}
//		
		int iMulti = 1;
		int iDigit = 0;
		
		while ( iNo != 0 )
		{
			iDigit = iNo % 10 ;
			if ( iDigit != 0 )
			{
				iMulti = iMulti * iDigit;
			}
			iNo = iNo / 10;
		}
		return iMulti;
	}
}
