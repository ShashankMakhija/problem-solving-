/////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name :  Display
//  Description :    Print following pattern
//  Input :          Integer
//  o/p :            * * * #
//                   * * # * 
//                   * # * * 
//                   # * * *
// Author :          Shashank Makhija
// RID :             Shashank_LB194
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"
Pattern :: Pattern( int iNo = 5 )  
{
	this -> iRow = iNo;
	this -> iCol = iNo;
}

void Pattern :: Display ()
{
		int iRowCnt = 0;
		int iColCnt = 0;
		
		for ( iRowCnt = iRow ; iRowCnt != 0 ; iRowCnt-- )
		{
			for ( iColCnt = 1 ; iColCnt <= iCol ; iColCnt++ )
			{
				if ( iRowCnt == iColCnt )
				{
					cout << "# ";
				}
				else 
				{
					cout << "* ";
				}
			}
			cout << endl;
		}
}






