/////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name :  Display
//  Description :    Print following pattern
//  Input :          Integer , Integer
//  o/p :            A B C D 
//                   A B C D 
//                   A B C D 
//                   A B C D 
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
		char ch = '\0';
	
		
		for ( iRowCnt = 1 ; iRowCnt <= iRow ; iRowCnt++ )
		{
			for ( iColCnt = 1,ch ='A' ; iColCnt <= iCol ; iColCnt++,ch++)
			{
				cout << ch << " ";
			}
			cout << endl;
		}
}






