"""
Solutions to module 4
Student: Carl Agelii
Mail: calle.agelii01@gmail.com
Reviewed by: Naser
Reviewed date:2023-10-11
"""

#include <cstdlib>
// Person class 

class Person{
	public:
		Person(int);
		int get();
		void set(int);
		int fib();
	private:
		int age;
		int _fib(int);
	};
 
Person::Person(int n){
	age = n;
	}
 
int Person::get(){
	return age;
	}
 
void Person::set(int n){
	age = n;
	}

int Person::fib(){
	return _fib(age);
	}

int Person::_fib(int n){
	if (n == 0){
		return 0;
	}
	if (n == 1){
		return 1;
	}
	else{
		return _fib(n-1)+_fib(n-2);
	}
}

extern "C"{
	Person* Person_new(int n) {return new Person(n);}
	int Person_get(Person* person) {return person->get();}
	void Person_set(Person* person, int n) {person->set(n);}
	int Person_fib(Person* person) {return person->fib();}
	void Person_delete(Person* person){
		if (person){
			delete person;
			person = nullptr;
			}
		}
	}
