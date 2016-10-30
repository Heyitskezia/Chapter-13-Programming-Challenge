#include <iostream>
#include <string>

using namespace std;

class Retail
{
	private :
		string description;
		int unitsOfHand;
		double price;
		
	public :
		Retail(string description, int unitsOfHand, double price){
			this -> description = description;
			this -> unitsOfHand = unitsOfHand;
			this -> price = price;
		}
		void setDesc(string description){
			this -> description = description;
		}
		void setUnit(int unitsOfHand){
			this -> unitsOfHand = unitsOfHand;
		}
		void setPrice(double price){
			this -> price = price;
		}
		string getDesc(){
			return description;
		}
		int getUnits(){
			return unitsOfHand;
		}
		double getPrice(){
			return price;
		}
};

int main(){
	Retail item1 = Retail("Jacket\t", 12, 59.95);
	Retail item2 = Retail("Jeans\t", 40, 34.95);
	Retail item3 = Retail("Shirt\t", 20, 24.95);
	
	Retail item [3] = {item1, item2, item3};
	string numOfItem [3] = {"Item #1\t", "Item #2\t", "Item #3\t"};
	string row [3] = {"\tDescription", "Units of Hand (Pieces)", "\tPrice ($)"};
	
	for (int i = 0 ; i <= 2 ; i++){
		cout << "\t" << row[i] << " \t";
	}
	
	for (int j = 0 ; j <= 2 ; j++){
		cout << endl << endl << numOfItem[j] << "\t " << item[j].getDesc() << "\t\t" << item[j].getUnits() << "\t\t\t\t" << item[j].getPrice() << endl;
	}
	
	return 0;
}
