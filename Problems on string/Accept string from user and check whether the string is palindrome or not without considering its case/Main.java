//5. Accept string from user and check whether the string is
//palindrome or not without considering its case.
//Input : “1abccBA1”
//Output : TRUE

import java.util.Scanner;

class Main
{
	public static void main ( String args[] )
	{	
		Scanner IN = new Scanner ( System.in );
		
		System.out.println( "Enter First string :" );
		String str1 = IN.nextLine();
	
		StringX string = new StringX();
		
		boolean bRet = false;
		bRet = string.StrPallindrome ( str1  );
		
		if ( bRet == true )
		{
			System.out.println( "TRUE" );
		}
		else
		{
			System.out.println( "False" );
		}
		
	}
}

class StringX
{
	public boolean StrPallindrome ( String str )
	{
		str = str.toLowerCase();
		char Arr[] = str.toCharArray();
		
		int iStart = 0;
		int iEnd = (Arr.length-1);
		char cTemp = 'a';
		
		for ( iStart=0,iEnd=(Arr.length-1) ; iStart <= iEnd ; iStart++,iEnd-- )
		{
			if ( Arr[iStart] != Arr[iEnd] )
			{	
				break;
			}
			cTemp = Arr[iStart];
			Arr[iStart] = Arr[iEnd];
			Arr[iEnd] = cTemp;	
		}
		
		if ( iStart < iEnd )
		{
			return false;
		}
		else
		{
			return true;
		}
	}	
}
