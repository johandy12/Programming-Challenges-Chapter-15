#include <iostream>
#include <string>

using namespace std;

class Employee {
	protected:
		string name;
		string number;
		string date;
	
	public:
		Employee() {
			name = "";
			number = "";
			date = "";
		}
		
		Employee(string name, string number, string date) {
			this -> name = name;
			this -> number = number;
			this -> date = date;
		}
	
		void setName(string name) {
			this -> name = name;
		}
		
		void setNumber(string number) {
			this -> number = number;
		}
	
		void setDate(string date) {
			this -> date = date;
		}
	
		string getName() {
			return name;
		}
	
		string getNumber() {
			return number;
		}
	
		string getDate() {
			return date;
		}
};

class ProductionWorker : public Employee{
	private:
		double shift;
		double payRate;
	
	public:	
		ProductionWorker() {
			shift = 0;
			payRate = 0;
		}
		
		ProductionWorker(double shift, double payRate) {
			this -> shift = shift;
			this -> payRate = payRate;
		}
		
		void setShift() {
			if(shift == 1){
				cout << "Day Shift";
			}
			
			else if(shift == 2) {
				cout << "Night Shift";
			}
		}
		
		int setPayRate() {
			this -> payRate = payRate;
		}
		
		double getPayRate() {
			return payRate;
		}
};


int main(){
	ProductionWorker Worker(200);
	
	Worker.setName("Johandy");
	cout << Worker.getName() << endl;
	
	Worker.setNumber("123123");
	cout << Worker.getNumber() << endl;

	Worker.setDate("12/10/1998");
	cout << Worker.getDate() << endl;
	
	Worker.setShift(1);
	cout << endl;
	
	Worker.setpayRate();
	cout << "Pay Rate: " << Worker.getPayRate();
	
	return 0;
}
