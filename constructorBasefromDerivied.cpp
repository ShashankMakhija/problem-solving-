#include<iostream>
#include<string>


using namespace std;
#include<string.h>

class Enemy
{
public:

	string m_name;
	int speed;


	Enemy(const string& name , int speed ):m_name(name)
	{
		this -> speed = speed;
	}
	 virtual void getinfo()
	 {
	 	cout << " Name:" << m_name << " speed:" << speed << endl;
	 }

	

};

class Dragon : public Enemy
{
public:
	
	string m_weapon;

 	Dragon( const string& name , const string& weapon , int speed ): Enemy(name,speed),m_weapon(weapon)
 	{
 		//this -> speed = speed;
 	} 

 	void getinfo()
 	{
 		cout << " Name:" << m_name << " speed: " << speed << " weapon: "<< m_weapon <<endl; 
 	}

};


int main()
{
	
	Enemy *obj = new Enemy("enemy",1);
	obj ->getinfo();

	Enemy *obj2 = new Dragon("dragon","fire",10);

	obj2 -> getinfo();
	

return 0;
}
