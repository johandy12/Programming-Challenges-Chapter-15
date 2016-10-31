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
		ShiftSupervisor(string name, string number, string date) {
			this -> name = name;
			this -> number = number;
			this -> date = date;
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

class TeamLeader : public ShiftSupervisor {
	private:
		double monthlyBonus;
		double trainingHours;
		int attendance;
	
	public:
		TeamLeader(double monthlyBonus, double trainingHours, int attendance) {
			this-> monthlyBonus = monthlyBonus;
			this-> trainingHours = trainingHours;
			this-> attendance = attendance;
		}
		
		void setMonth(int monthlyBonus){
			this -> monthlyBonus = monthlyBonus;
		}
		
		void setTraining(double trainingHours){
			this -> trainingHours = trainingHours;
		}
		
		void setAttendance(int attendance) {
			this -> attendance = attendance;
		}
		
		int getMonth(){
			return monthlyBonus;
		}
		
		int getTraining() {
			return trainingHours;
		}
		
		int getAttendance() {
			return attendance;
		}
};

int main() {
	TeamLeader profile(1, 20, 30);
	profile.setName("Johandy");
	cout << profile.getName()<<endl;
	
	profile.setNumber("123123");
	cout << profile.getNumber()<<endl;
	
	profile.setDate("12/10/1998");
	cout << profile.getDate()<<endl;
	
	cout << "Monthly Bonus: $" << profile.getMonth() << endl;
	cout << "Required Hours: " << profile.getTraining() << endl;
	cout << "Attendance: " << profile.getAttendance() << endl;
}
