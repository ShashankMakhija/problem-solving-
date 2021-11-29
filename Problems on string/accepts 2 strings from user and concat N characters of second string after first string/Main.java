/*
1. Write a java program which accepts 2 strings from user and
concat N characters of second string after first string.Value of N
should be accepted from user.

Note : If third parameter is greater than the size of second string
then concat whole string after first string.


	Input :
	“Marvellous Infosystems”
	“Logic Building”
	5
	Output :
	“Marvellous Infosystems Logic”
*/

import java.util.Scanner;

class Main
{
	public static void main ( String args[] )
	{
		Scanner IN = new Scanner ( System.in );
		System.out.println ( "Enter First String :" );
		String str1 = IN.nextLine();
		
		System.out.println(" Enter Second String ");
		String str2 = IN.nextLine();

		System.out.println( "Enter Value of N" );
		int N = IN.nextInt();

		StringDemo obj = new StringDemo();
		String sRet = obj.StrNCatX(str1 , str2 , N );
		System.out.println(sRet);

		IN.close();
	}
}

