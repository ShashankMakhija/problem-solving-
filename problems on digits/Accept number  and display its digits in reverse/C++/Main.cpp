// Display digits in reverse

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
	
	void displayReverse()
	{
		int iDigit = 0;
		while ( iNum != 0 )
		{
			iDigit = iNum % 10;
			cout << iDigit;
			iNum = iNum / 10;
		}
		cout << endl;
	}
	
};

int main()
{	
	int iNo = 0;
	cout << " Enter number " << endl;
	cin >> iNo;
	
	DigitsX *obj = new DigitsX( iNo );
	
	obj -> displayReverse();
	
	delete( obj );
	
	
	
	return 0;
}