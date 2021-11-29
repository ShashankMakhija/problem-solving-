import CustomPackage.StringX;

class Main
{
	public static void main( String Args[] )
	{	
		StringX string = new StringX();
		string.acceptString();
		
		boolean bRet = string.checkVowel();
		if ( bRet == true )
		{
			System.out.println ( "TRUE" );
		}
		else
		{
			System.out.println ( "FALSE" );
		}
	}
}
