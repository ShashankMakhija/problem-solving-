//Accept sing from user and reverse the contents of that string
//by toggling the case.
//Input : “aCBdef”
//Output : “FEDcbA”

import java.util.Scanner;

class Main
{
	public static void main ( String args[] )
	{	
		Scanner IN = new Scanner ( System.in );
		
		System.out.println( "Enter  string :" );
		String str1 = IN.nextLine();
		
		StringX string = new StringX();
		
		
		String sRet = string.StrRevTogX ( str1 );
		
		System.out.println( sRet );
		
	}
}

class StringX
{
	public String StrRevTogX ( String str )
	{
		char Arr[] = str.toCharArray();
		
		int iStart = 0;
		int iEnd = (Arr.length-1);
		char cTemp = 'a';
		
		for ( iStart=0,iEnd=(Arr.length-1) ; iStart <= iEnd ; iStart++,iEnd-- )
		{
			if ( Arr[iStart] >= 'A' && Arr[iStart] <= 'Z' )
			{
				Arr[iStart] = (char)(Arr[iStart] + 32);
			}
			
			else if ( Arr[iStart] >= 'a' && Arr[iStart] < 'z' )
			{
				Arr[iStart] = (char)(Arr[iStart] - 32);
			}
			
			if ( Arr[iEnd] >= 'A' && Arr[iEnd] <= 'Z' )
			{
				Arr[iEnd] = (char)(Arr[iEnd] + 32);
			}
			
			else if ( Arr[iEnd] >= 'a' && Arr[iEnd] < 'z' )
			{
				Arr[iEnd] = (char)(Arr[iEnd] - 32);
			}
			
			if ( iStart == iEnd )
			{
				if ( Arr[iStart] >= 'A' && Arr[iStart] <= 'Z' )
				{
					Arr[iStart] = (char)(Arr[iStart] + 32);
				}
				
				else if ( Arr[iStart] >= 'a' && Arr[iStart] < 'z' )
				{
					Arr[iStart] = (char)(Arr[iStart] - 32);
				}
			}	
			
			cTemp = Arr[iStart];
			Arr[iStart] = Arr[iEnd];
			Arr[iEnd] = cTemp;
 			
		}
		
		String sRet = new String (Arr);
		return sRet;
	}
}
