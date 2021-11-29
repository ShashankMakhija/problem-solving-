// Accept String and convert it to lowercase

#include <iostream>
#include <string>

using namespace std;

class StringX
{
	private:
		
		string str;
	
	public:
		
		StringX( string *str )
		{
			this -> str = *str;
		}
		
		void display()
		{
			cout << str << endl ;
		}
		
		void lowerCase()
		{
			for ( int i = 0 ; i < str.length() ; i++ )
			{
				if ( str[i] > 'A' && str[i] < 'Z' )
				{
					str[i] = str[i] + 32;
				}
			}
			
		}
};

int main()
{
	string s ;
	cout << " Enter String " << endl;
	cin >> s;
	
	StringX *obj = new StringX(&s);
	obj -> display();
	obj -> lowerCase();
	obj -> display();
	
	delete(obj);
	
	return 0;
}
