// for example in our game if one person wishes to get info about enemy by clicking on 'info button'
// to fulfill that request we will create a getinfo() function which gets info about enemy by passing the object of class
// now since info about enemy can be classType1 or classType2 so object of that info is goint to vary ,
// so to get info we have to use pointer to top class in hirarachy to cater all the child class of enemy , (dragon , zombie)
// so now enemy(base) -> zomvie(derived) calling getinfo inside class , BUT the geninfo of Base class gets called 
// thats where virtual comes in by decelaring virtual we essential tell compiler that this is virtual in nature look for contrete function below.


#include<iostream>
#include<string>


using namespace std;
#include<string.h>

class Enemy
{
public:

	int pos;
	int speed;


	Enemy( int speed = 0 , int pos = 0  )
	{
		this -> pos = pos;
		this -> speed = speed;
	}
	 
	 virtual void getinfo() //  ---------------if not virtual Base class getinfo() gets called
	 {
	 	cout << " Name:" << "Entity" << " speed:" << speed << " pos: " << pos << endl;
	 }

	

};

class EnemyLevel2 : public Enemy
{
public:
	
	string m_name;
	string m_weapon;

 	EnemyLevel2( const string& name , const string& weapon , int speed ): m_name(name),m_weapon(weapon),Enemy(speed)
 	{
 
 	} 

 	void getinfo()
 	{
 		cout << " Name:" << m_name << " speed: " << speed << " weapon: "<< m_weapon <<endl; 
 	}

};


void EnemyInfo( Enemy *object )
{
	object->getinfo();
}

int main()
{
	
	
	
	EnemyLevel2 *Zombie = new EnemyLevel2("Zombie","eating_flesh",1);
	EnemyLevel2 Dragon("Dragon","fire",10);
	
	EnemyInfo( & Dragon );
	EnemyInfo(  Zombie );
	
	

return 0;
}
