/////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name :  Display
//  Description :    Print following pattern
//  Input :          Integer
//  o/p :            * * * * *
//                   * @ @ @ *
//                   * @ @ @ *
//                   * @ @ @ *
//                   * @ @ @ *
//                   * * * * *
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
	
		
		for ( iRowCnt = 1 ; iRowCnt <= iRow ; iRowCnt++  )
		{
			for ( iColCnt = 1 ; iColCnt <= iCol ; iColCnt++ )
			{
				/*if ( iRowCnt == 1 || iRowCnt == 5 ) 
				{
					cout << "* ";
				}*/
				
				 if ( iRowCnt > 1 && iRowCnt < iRow )
				 {
					if ( iColCnt == 1 || iColCnt == iCol )
					{
						cout << "* ";
					}
					else 
					{
						cout << "@ ";
					}
				 }
			
				
				else 
				{
					cout << "* " ;
				}
			}
		  cout << endl;
		}
}






