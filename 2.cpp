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

class ShiftSupervisor : public Employee {
	double salary;
	double bonus;
	
	public:
		ShiftSupervisor(float salary, int bonus){
			this->salary = salary;
			this->bonus = bonus;
		}
		
		void setSalary(double salary) {
			this -> salary = salary;
		}
		
		void setBonus(double bonus) {
			this -> bonus = bonus;
		}
		
		double getSalary() {
			return salary;
		}
		
		double getBonus() {
			return bonus;
		}
};


int main(){
	ShiftSupervisor profile("Johandy", "123123", "12/10/1998");
	
	cout << "Name: " << profile.getName() << endl << "Number: " <<profile.getNumber() 
	<< endl << "Hire Date: " << profile.getDate();
	
	profile.setSalary(150);
	cout << endl << "Salary: " << profile.getSalary() << endl;
	
	profile.setBonus(20);
	cout << "Bonus: " << profile.getBonus();
	
	return 0;
}
