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
		
		ShiftSupervisor(double salary, double bonus){
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

class TotalNumber : public ShiftSupervisor {
	double total;
	
	public:
		TotalNumber(double total) {
			this -> total = total;
		}
		
		void setTotal(double total) {
			this -> total = total;
		}
		
		double getTotal() {
			return total;
		}
};

int main(){
	TotalNumber profile ("Johandy", "123123");
	
	cout << "Name: " << profile.getName() << endl << "Number: " << profile.getNumber() << endl;
	
	profile.setDate("12/10/1998");
	cout << "Hire Date: " << profile.setDate() << endl;
	
	profile.setSalary(150);
	cout << endl << "Salary: " << profile.getSalary() << endl;
	
	profile.setBonus(20);
	cout << "Bonus: " << profile.getBonus();
	
	profile.setTotal(170);
	cout << "Total: " << profile.getTotal();
	return 0;
}
