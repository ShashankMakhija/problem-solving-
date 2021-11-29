/////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name :  Display
//  Description :    Print following pattern
//  Input :          Integer
//  o/p :            1 2 3 4 5 
//                   1 2     5
//                   1   3   5
//                   1     4 5
//                   1 2 3 4 5 
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
		int iTemp = 0;
		
		for ( iRowCnt = 1 ; iRowCnt <= iRow ; iRowCnt++  )
		{
			for ( iColCnt = 1 , iTemp = 1; iColCnt <= iCol ; iColCnt++,iTemp++ )
			{			
				if ( iRowCnt == iColCnt )
				{
					cout << iTemp << " ";
				}
				else if ( iRowCnt == 1 || iColCnt == 1 || iColCnt == iCol || iRowCnt == iRow )
				{
					cout << iTemp << " ";
				}
				else 
				{
					cout << "  ";
				}
			}
		  cout << endl;
		}
}






