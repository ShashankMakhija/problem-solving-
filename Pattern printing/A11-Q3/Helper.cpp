/////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name :  Display
//  Description :    Print following pattern
//  Input :          Integer , Integer
//  o/p :            A A A A A
//                   B B B B B
//                   C C C C C
//                   
// Author :          Shashank Makhija
// RID :             Shashank_LB194
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"
Pattern :: Pattern( int iNo1 = 5 , int iNo2 = 5 )  
{
	this -> iRow = iNo1;
	this -> iCol = iNo2;
}

void Pattern :: Display ()
{
		int iRowCnt = 0;
		int iColCnt = 0;
		char ch = '\0';
		
		for ( iRowCnt = 1 , ch='A' ; iRowCnt <= iRow ; iRowCnt++,ch++ )
		{
			for ( iColCnt = 1 ; iColCnt <= iCol ; iColCnt++ )
			{
				cout << ch << " ";
			}
			
			cout << endl;
		}
		
		
}






