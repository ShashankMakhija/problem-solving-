/////////////////////////////////////////////////////////////////////////////////////////
//
//	Accept N numbers from user and display all such elements which are divisible by 5.
//
/////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"
int main()
{
	int iSize = 0;
	cout << "Enter Number of elements you want ot enter : \n";
	cin >> iSize;
	
	Array *obj = new Array( iSize );
	
	obj -> Accept();
	obj -> DivisibleBy5();
	
	delete obj;


return 0;
}

