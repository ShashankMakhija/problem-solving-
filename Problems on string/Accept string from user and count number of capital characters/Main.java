import CustomPackage.ArrayX;

class ArrayXX extends ArrayX
{
	public int countUpperCase()
	{
	 	int iCnt = 0;
		char Arr[] = super.str.toCharArray();
		
		for ( char Temp : Arr )
		{
			if ( Temp >= 'A' && Temp <= 'Z' )
			{
				iCnt++;	
			}
		}
		return iCnt;
	}
}

class Main
{
	public static void main ( String args[] )
	{
		ArrayXX array = new ArrayXX();
		
		array.acceptString();
		int iRet = array.countUpperCase();
	
		
		System.out.println ( "Count of uppercase in string is : " + iRet );
	}
}
