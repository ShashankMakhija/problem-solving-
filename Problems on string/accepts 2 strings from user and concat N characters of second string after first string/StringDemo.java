class StringDemo
{
	public String StrNCatX (String src, String dest, int iCnt)
	{
		if ( iCnt > ( dest.length() ) )
		{
			return src+dest;			
		}
		char Arr[] = dest.toCharArray();
		//String temp = src;
		src = src+" ";
		for ( int i = 0 ; i < iCnt ; i++ )
		{
			src = src + Arr[i];
		}
		return src;
	}
}