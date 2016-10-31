#include <iostream>
#include <string>
using namespace std;

class PersonData
{
	string lastName;
	string firstName;
	string address;
	string city;
	string state;
	int zip;
	int phone;

	public:
		PersonData(string lastName, string firstName, string address, string city, string state, int zip, int phone)
		{
			this -> lastName = lastName;
			this -> firstName = firstName;
			this -> address = address;
			this -> city = city;
			this -> state = state;
			this -> zip = zip;
			this -> phone = phone;
		}
		
		void setLastName(string lastName) {
			this -> lastName = lastName;
		}
		
		void setFirstName(string firstName) {
			this -> firstName = firstName;
		}
		
		void setAddress(string address) {
			this -> address = address;
		}
		
		void setCity(string city) {
			this -> city = city;
		}
		
		void setState(string state) {
			this -> state = state;
		}
		
		void setZip(int zip) {
			this -> zip = zip;
		}
		
		void setPhone(int phone) {
			this -> phone = phone;
		}
		
		string getLastName() {
			return lastName;
		}
		
		string getFirstName() {
			return firstName;
		}
		
		string getAddress() {
			return address;
		}
	
		string getCity() {
			return city;
		}
		
		string getState() {
			return state;
		}
		
		string getZip() {
			return zip;
		}
		
		string getPhone() {
			return phone;
		}
};

