#include <iostream>
#include <string>
using namespace std;

class Info
{
	string name;
	string address;
	int age;
	int phoneNumber;
	
	public :
		Data()
	{
		this -> name = name;
		this -> address = address;
		this -> age = age;
		this -> phoneNumber = phoneNumber;
	}
	string getName()
	{
		return name;
	}
	string getAddress()
	{
		return address;
	}
	int getAge()
	{
		return age;
	}
	int getPhoneNumber()
	{
		return phoneNumber;
	}
	void setName(string Name)
	{
		name = Name;
	}
	void setAddress(string Address)
	{
		address = Address;
	}
	void setAge(int Age)
	{
		age = Age;
	}
	void setPhoneNumber(int PhoneNumber)
	{
		phoneNumber = PhoneNumber;
	}
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
	
	Info myInfo;
	
	myInfo.setName("Nathania Kezia Barakati");
	myInfo.setAddress ("Somewhere in Jakarta");
	myInfo.setAge (18);
	myInfo.setPhoneNumber(11101998);
	
	cout << "Name\t\t: " << myInfo.getName() << endl;
	cout << "Address\t\t: " << myInfo.getAddress() << endl;
	cout << "Age\t\t: " <<myInfo.getAge () << endl;
	cout << "Phone Number\t: " <<myInfo.getPhoneNumber() << endl << endl;
	
	Info friend1 ;
	
	friend1.setName ("PJM");
	friend1.setAddress("Somewhere in Seoul");
	friend1.setAge (21);
	friend1.setPhoneNumber (13101995);
	
	cout << "Name\t\t: " << friend1.getName() << endl;
	cout << "Address\t\t: " << friend1.getAddress() << endl;
	cout << "Age\t\t: " << friend1.getAge () << endl;
	cout << "Phone Number\t: " << friend1.getPhoneNumber() << endl<< endl;
	
	Info friend2 ;
	
	friend2.setName ("KTH");
	friend2.setAddress("Somewhere in Seoul");
	friend2.setAge (20);
	friend2.setPhoneNumber (31121995);
	
	cout << "Name\t\t: " << friend2.getName() << endl;
	cout << "Address\t\t: " << friend2.getAddress() << endl;
	cout << "Age\t\t: " << friend2.getAge () << endl;
	cout << "Phone Number\t: " << friend2.getPhoneNumber() << endl;
	
return 0;	
}

