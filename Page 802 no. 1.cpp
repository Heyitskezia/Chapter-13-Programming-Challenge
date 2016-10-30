#include <iostream>
#include <string>
using namespace std ;

class Date
{
	private:
		int day;
		int month ;
		int year ; 
	
	public:
		
		Date();
		Date (int day,int month ,int year)
		{
			this -> day = day ;
			this -> month = month ;
			this -> year = year ;
		}
		int getDay()
		{
			return day;
	    }
		int getMonth()
		{
			return month;
		}
		int getYear()
		{
			return year;
		}
};


/////////////////////////////////////////////////////


int main()
{
	int dd, mm, yyyy;
	
	cout << "Please input the date from 1-31 (dd): "; 
	cin >> dd ; 
	
	cout << endl;
	
	if (dd >= 1 && dd <= 32)
	{
		cout << "Please input the month from 1-12 (mm): ";
		cin >> mm ; 
		
		cout << endl;	
	}
	else
	return 0;
		
		if(mm >= 1 && mm <= 12)
		{
			cout <<  "Please input the year (yyyy): ";
			cin >> yyyy ; 
			
			cout << endl;
		} 
		else
		return 0;
	
	Date input (dd,mm,yyyy);
	{
	
		string monthArr[12] = {"January", "February" , "March", 
							   "April", "May", "June",
							   "July", "August", "September",
                               "October", "November", "December"};
                            
    
   		 cout << input.getDay() << " " << monthArr[input.getMonth() - 1] << " " << input.getYear() << endl;                           
   		 
	     cout << input.getDay() << " / " << input.getMonth() << " / " << input.getYear() << endl;
   		 
		 cout << monthArr[input.getMonth() - 1] << " " << input.getDay() << ", " << input.getYear() << endl;
	}
	return 0 ;
}
