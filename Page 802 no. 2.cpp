#include <string>
#include <iostream>
using namespace std ;

class Employee
{
	string name ;
	int idNumber ;
	string department ;
	string position ; 
	
	public :
		
		Employee(string name, int idNumber, string department, string position)
		{
			this -> name = name ;
			this -> idNumber = idNumber ;
			this -> department = department ;
			this -> position = position ;
		}
		
		Empoyee (string name , int idNumber)
		{
			this -> name = name ;
			this -> idNumber = idNumber ;
			this -> department = " " ;
			this -> position = " " ;
		}
		
		Employee()
		{	
			this -> name = " ";
			this -> idNumber = 0 ;
			this -> department = " " ;
			this -> position = " " ;
		}
		
		string getName()
		{
			return name ;
		}
		
		int getID()
		{
			return idNumber ;
		}
		
		string getDepartment()
		{
			return department ;
		}
		
		string getPosition()
		{
			return position ;
		}
		

};


int main()
{
	
	Employee emp1 = Employee("Susan Meyers", 47899, "Acounting", "Vice President");
	Employee emp2 = Employee("Mark Jones", 39119 , "Computer", "Programmer");
	Employee emp3 = Employee("Joy Rogers", 81774 , "Manufacturing", "Engineer");
	
	Employee empArr[3]={emp1, emp2, emp3};
	
	for(int i = 0 ; i < 3 ; i++)
	{
		cout << empArr[i].getName() << "\t" <<empArr[i].getID()<<"\t"
			<<empArr[i].getDepartment()<<"\t"<<empArr[i].getPosition() ;
			
		cout<<endl;
	}
	
	
	return 0;
}
