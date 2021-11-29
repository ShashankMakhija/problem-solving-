// Accept N numbers from user and return product of all odd elements

#include <iostream>
using namespace std;

class ArrayX
{
private:
	
	int *Arr;
	int iLength;
	
public:
	
	ArrayX( int n )
	{
		this -> iLength = n;
		Arr = new int( iLength );
	}
	~ArrayX()
	{
		delete []Arr;
	}
	
	void acceptElements()
	{
		int itr = 0;
		for ( itr = 0 ;itr < iLength ; itr++ )
		{
			cin >> Arr[itr];
		}
	}
	
	int productOdd()
	{
		int itr = 0; int iRet = 1;
		for ( itr = 0 ; itr < iLength ; itr++ )
		{
			if ( (Arr[itr] % 2 ) != 0 )
			{
				iRet = iRet * Arr[itr];
			}
		}
		return iRet;
	}
};

int main()
{
	int n = 0; int prodOdd = 0;
	cout << " Enter no elements you want to enter  :" << endl;
	cin >> n;
	
	ArrayX *array = new ArrayX(n);
	array -> acceptElements();
	prodOdd = array -> productOdd();
	cout << "Product of odd elemets is --> " << prodOdd << endl;
	
	delete(array);
	
	return 0;
}