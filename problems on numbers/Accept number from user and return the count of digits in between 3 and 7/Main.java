import java.util.Scanner;

class Main
{
	public static void main ( String args[] )
	{
		System.out.println ( "Enter Number :" );
		Scanner IN = new Scanner ( System.in );
		int iNo = IN.nextInt();
		
		DigitX digit = new DigitX();
		int iRet = digit.countBetween3N7 ( iNo );
		
		System.out.println ( iRet );
	}
}

class DigitX
{
	public int countBetween3N7( int iNo )
	{
		// UPDATOR
		if ( iNo < 0 )
		{
			iNo = -iNo;
		}
		
		int iCnt = 0;
		int iDigit = 0;
		
		while ( iNo != 0 )
		{
			iDigit = iNo % 10 ;
			
			if ( iDigit > 3 && iDigit < 7 )
			{
				iCnt++;
			} 
			
			iNo = iNo / 10;
		}
		return iCnt;
	}
}
