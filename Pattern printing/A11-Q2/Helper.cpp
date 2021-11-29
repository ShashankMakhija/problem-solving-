/////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name :  Display
//  Description :    Print following pattern
//  Input :          Integer , Integer
//  o/p :            A B C D 
//                   a b c d 
//                   A B C D 
//                   a b c d 
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
		char chUC = '\0';
		char chLC = '\0';
	
		
		for ( iRowCnt = 1 ; iRowCnt <= iRow ; iRowCnt++ )
		{
			for ( iColCnt = 1,chUC ='A',chLC='a' ; iColCnt <= iCol ;  iColCnt++,chLC++,chUC++ )
			{
				if ( iRowCnt % 2 != 0 )
				{
					cout << chUC << " ";
				}
				else
				{
					cout << chLC << " ";
				}
			}
			cout << endl;
		}
}






