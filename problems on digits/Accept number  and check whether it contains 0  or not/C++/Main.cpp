// Check weather number contains 0 or not

#include <iostream>
using namespace std;

class DigitsX
{
private: 
	
	int iNum;
	
public:
	
	DigitsX( int iNum )
	{
		this -> iNum = iNum;
	}
	
	bool checkZero()
	{
		int iDigit = 0;
		while ( iNum != 0 )
		{
			iDigit = iNum % 10;
			if ( iDigit == 0 )
			{
				break;
			}
			iNum = iNum / 10;
		}
		if ( iNum != 0 )
		{
			return true;
		}
		else 
		{
			return false;
		}
	}
	
};

int main()
{	
	int iNo = 0; bool bRet = false;
	cout << " Enter number " << endl;
	cin >> iNo;
	
	DigitsX *obj = new DigitsX( iNo );
	
	bRet = obj -> checkZero();
	if ( bRet == true )
	{
		cout << "TRUE" << endl;
	}
	else
	{
		cout << "False" << endl;
	}
	
	delete( obj );
	
	
	
	return 0;
}