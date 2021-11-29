import CustomPackage.ArrayX;

class ArrayXX extends ArrayX
{
	public int countLowerCase()
	{
	 	int iCnt = 0;
		char Arr[] = super.str.toCharArray();
		
		for ( char Temp : Arr )
		{
			if ( Temp >= 'a' && Temp <= 'z' )
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
		int iRet = array.countLowerCase();
	
		
		System.out.println ( "Count of Small Letters in string is : " + iRet );
	}
}
