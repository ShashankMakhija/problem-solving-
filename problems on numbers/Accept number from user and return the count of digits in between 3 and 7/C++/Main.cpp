//Accept number from user and return the count of digits in between 3 and 7

#include <iostream>
using namespace std;

class DigitsX
{
private:
	
	int iNum ;
public:
	
	DigitsX( int iNum )  
	{
		this -> iNum = iNum;
	}
	
	int countBtwin3and7()
	{
		int iTemp = iNum;
		int iDigit = 0;
		int iCnt = 0;
		
		while ( iTemp != 0 )
		{
			iDigit = iTemp % 10;
			if ( iDigit > 3 && iDigit < 7  )
			{
				iCnt++;
			}
			iTemp = iTemp / 10;
		}
		return iCnt;
	}
	
};

int main()
{
	int iNo = 0; int iCnt = 0;
	cout << " Enter Number " ;
	cin >> iNo;
	
	DigitsX *obj = new DigitsX(iNo);
	
	iCnt = obj -> countBtwin3and7();
	cout << "Count between 3 and 7 is -->" << iCnt << endl ;
	
	delete( obj );
	
	return 0;
}

