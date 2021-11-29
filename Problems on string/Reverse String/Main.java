import CustomPackage.StringX;

class Main
{
	public static void main( String Args[] )
	{	
		StringX string = new StringX();
		string.acceptString();
		
		String sRet = string.revString();
		
		System.out.println( sRet );
	}
}
