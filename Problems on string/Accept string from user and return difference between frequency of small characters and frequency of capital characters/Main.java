import CustomPackage.StringX;

class Main
{
	public static void main ( String[] Args )
	{
		StringXX string = new StringXX();
		
		string.acceptString();
		
		int iDiff = string.diffOfLCNUC();
		System.out.println( "Difference of Lower and Upper Case is  : " + iDiff );
	}	
}

class StringXX extends StringX
{
	public int diffOfLCNUC ()
	{
		int iCntUC = super.countUpperCase();
		int iCntLC = super.countLowerCase();
		
		return ( iCntLC - iCntUC );
	}
}
