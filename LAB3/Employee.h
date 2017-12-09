//Team: Gregory Ayo , Olawale Ayejuyone, Barry Boubacar
//Author: Olawale Ayejuyone
//Creation: 11/15/17
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Archive.h"

namespace lab3
{ 
	class Employee
	{
		private:
		Name name;
		Address address;
		int employeeId;
		double salary;
		static int nextId=1;
		
		public:
		Employee(){
		  Name ();
		  Address();
		  salary = 5000;
		  employeeId = nextId;
		  nextId++;
		}
		
		Employee(const Name&n1,const Address&a1,double sal){
		  name =n1;
		  address =a1;
		  salary = sal;
		  nextId++;
		}
		Employee(const Employee&e1){
		  name =e1.name;
		  address = e1.address;
		  salary =e1.salary;
		  employee=e1.employeeId;
		}
		
		Employee& operator=(const Employee&e1){
		  name = e1.name;
		  address =e1.address;
		  salary =e1.salary;
		  employeeId =e1.employeeId;
		}
		
		~Employee() {
		  
		}
		
		int GetEmployeeId(){
		  return employeeId;
		}
		
		Name& GetName(){
		  return name;
		}
		
		Address& GetAddress(){
		  return address;
		}
		
		static int GetNextId(){
		  return nextId;
		}
		
		double GetSalary(){
		  return salary;
		}
		
		void SetName(const Name&n1){
		  name= n1;
		}
		
		void SetAddress(const Address&a1){
		  address = a1;
		}
		
		void SetSalary(double sal){
		  salary = sal;
		}
		
		std::string ToString() const{
		  return name.ToString() + ""+address.ToString)()+ ""+salary+""employeeId;
		}
		
		static int GetNextId(){
		  return nextId;
		}
		
		double GetSalary(){
		  return salary;
		}
		
		void setName(const Name &n1){
		  name =n1;
		}
		
		void setAddress(const Address&a1){
		  address =a1;
		}
		
		void setSalary (double sal){
		  salary = sal;
		}
		
		std::string ToString() const{
		  return name.ToString()+" "+address.ToString()+" "+salary+" "employeeId;
		}
		
		friend std::ostream& operator<<(std::ostream& output,const Employee&e1){
		  output << "Name :"<<e1.name<<"Address :"<<e1.address<<" Salary :"<<e1.salary<<"EmployeeID :"
		  <<e1.employeeId;
		  return output;
		}
		
		friend std::istream&operator >>(istream &input, Employee&e1){
		  input>>e1.name >>e1.address>>e1.salary>>e1.employeeId;
		  return input;
		}
	};
	
	int Employee::nextId = 1;
}

#endif 
