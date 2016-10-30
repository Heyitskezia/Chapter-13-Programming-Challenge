#include <iostream>
#include <string>
using namespace std;

class Car 
{
	int yearModel;
	string make;
	int speed; 
	
	public:
		Car(int yearModel , string make , int speed)
	{
		this -> yearModel = yearModel;
		this -> make = make;
		this -> speed = speed;
	}
		
	Car(/*int yearModel , string make , int speed*/)
	{
		this -> yearModel = yearModel;
		this -> make = make;
		this -> speed = 0;
	}
	
	int getYearModel()
	{
		return yearModel;
	}
	
	string getMake()
	{
		return make;
	}
	
	int getSpeed()
	{
		return speed;
	}
	
	void accessor();
	
	int accelerate(int)
	{
		cout << "Current Speed = " << speed << " m/s" <<endl;
		
		for(int i = 0 ; i < 5 ; i++)
		{
			
			speed = speed + 5 ;
			cout << "Acceleration " << i + 1 <<" = " << speed << " m/s" <<endl;
		}
	}
	
	int brake(int)
	{
		cout << "Current speed after 5 times accelerations = " << speed << " m/s" << endl;
		
		for(int i = 0 ; i < 5 ; i++)
		{
			
			speed = speed - 5 ;
			cout << "Brake " << i + 1 <<" = " << speed << " m/s" << endl;
		}
	}
};

/////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
	int year;
	int speed;
	string make ;
	
	cout << "Please input the car's year model: ";
	cin >> year;
	
	cout << "Please input the year of the making  : ";
	cin >> make;
	
	cout << "Please input the speed: ";
	cin >> speed;
	
	cout << endl;
	
	Car input (year, make, speed);
	input.accelerate(input.getSpeed());
	cout << endl;
	input.brake(input.getSpeed());

return 0;	
}
