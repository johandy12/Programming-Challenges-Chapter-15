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
		ShiftSupervisor(string name, string number, string date) : Employee (name, number, date) {
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
	TotalNumber Worker(200);
	
	Worker.setName("Johandy");
	cout << Worker.getName() << endl;
	Worker.setNumber("123123");
	cout << Worker.getNumber() << endl;
	Worker.setDate("12/10/1998");
	cout << Worker.getDate() << endl;
	Worker.getShift();
	cout << endl;
	cout << Worker.getTotal() << " workers";
}
