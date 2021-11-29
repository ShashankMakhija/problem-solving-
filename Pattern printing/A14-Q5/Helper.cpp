/////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name :  Display
//  Description :    Print following pattern
//  Input :          Integer
//  o/p :            1 2 3 4 
//                     2 3 4 
//                       3 4  
//                         4
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
		int iTemp = 1;
		
		for ( iRowCnt = 1 ; iRowCnt <= iRow ; iRowCnt++  )
		{
			for ( iColCnt = 1 , iTemp = 1; iColCnt <= iCol ; iColCnt++,iTemp++ )
			{	
				if ( iColCnt >= iRowCnt )		
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






