import java.util.Scanner;

class Main
{
	public static void main ( String args[] )
	{
		System.out.println ( "Enter Number :" );
		Scanner IN = new Scanner ( System.in );
		int iNo = IN.nextInt();
		
		DigitX digit = new DigitX();
		int iRet = digit.diff ( iNo );
		
		System.out.println ( iRet );
	}
}

class DigitX
{
	public int diff( int iNo )
	{
		// UPDATOR
		if ( iNo < 0 )
		{
			iNo = -iNo;
		}
		
		int iSumEven = 0;
		int iOddSum = 0;
		int iDigit = 0;
		
		while ( iNo != 0 )
		{
			iDigit = iNo % 10 ;
			
			if ( (iDigit % 2) == 0 )
			{
				iSumEven = iSumEven + iDigit;
			}
			else
			{
				iOddSum = iOddSum + iDigit;
			} 
			
			iNo = iNo / 10;
		}
		return iSumEven - iOddSum;
	}
}
