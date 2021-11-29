//  count digits in a number which are smaller than 6
#include <iostream>
using namespace std;

class DigitsX
{	
private:
    
    int iNum;
public :
	
	DigitsX( int iNum )	
	{
		this -> iNum = iNum;	
	}
	
	countSmallerThan6()
	{
		int iDigit = 0; int iCnt = 0;
		while ( iNum != 0 )
		{
			iDigit  = iNum % 10;
			if ( iDigit < 6 )
			{
				iCnt++;
			}
			iNum = iNum / 10;
		}
		return iCnt;
	}
};

int main()
{
	int iNo = 0; int iCnt = 0;
	cout << " Enter Number : " << endl;
	cin >> iNo;
	
	DigitsX *digit = new DigitsX( iNo );
	iCnt = digit -> countSmallerThan6();
	
	cout << "Count is --> " << iCnt << endl;

	delete(digit);

return 0;
}