/////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name :  Display
//  Description :    Print following pattern
//  Input :          Integer , Integer
//  o/p :            1 	2 	3 	4
//                   5 	6 	7 	8
//                   9 	10 	11 	12 
//                    
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
		 int iNos = 1;
		
		for ( iRowCnt = 1 ; iRowCnt <= iRow ; iRowCnt++ )
		{
			for ( iColCnt = 1; iColCnt <= iCol ; iColCnt++ , iNos++ )
			{
				cout << iNos <<"\t" ;
			}
			cout << endl;
		}
	
		
		
}






