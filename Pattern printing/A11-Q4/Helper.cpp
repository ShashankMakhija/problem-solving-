/////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name :  Display
//  Description :    Print following pattern
//  Input :          Integer , Integer
//  o/p :            4 4 4 4
//                   3 3 3 3
//                   2 2 2 2 
//                   1 1 1 1 
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
	
		
		for ( iRowCnt = iRow ; iRowCnt !=0 ; iRowCnt-- )
		{
			for ( iColCnt = 1 ; iColCnt <= iCol ; iColCnt++ )
			{
				cout << iRowCnt << " ";
			}
			cout << endl;
		}
}






