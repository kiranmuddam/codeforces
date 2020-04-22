#include<iostream>
#include<string>
using namespace std;
class Student {
private:
	string firstName;
	string lastName;
	string studentID;
	string phoneNumber;
	double gpa;
public:
	Student();
	Student(string first, string last,string ID,string phone,double gpa);
	string getFirst()const;
	string getLast()const;
	string getID()const;
	string getPhone()const;
	double getGpa()const;
	void setFirst(string first);
	void setLast(string last);
	void setID(string ID);
	void setPhone(string phone);
	void setGpa(double gpa);
	void show();
};
Student::Student() {
	this->firstName = " ";
	this->lastName = " ";
	this->studentID = " ";
	this->phoneNumber = "";
	this->gpa = 0;
}
Student::Student(string first, string last, string ID, string phone, double gpa) {
	this->firstName = first;
	this->lastName = last;
	this->studentID = phone;
	this->phoneNumber =ID;
	this->gpa = gpa;
}
string Student::getFirst()const { return this->firstName; }
string Student::getLast()const { return this->lastName; }
string Student::getID()const { return this->studentID; }
string Student::getPhone()const { return this->phoneNumber; }
double Student::getGpa()const { return this->gpa; }
void Student::setFirst(string first) { this->firstName = first; }
void Student::setLast(string last) { this->lastName = last; }
void Student::setID(string ID) { this->studentID = ID; }
void Student::setPhone(string phone) { this->phoneNumber = phone; }
void Student::setGpa(double x) { this->gpa = x; }
void Student::show(){
	cout << this->firstName << " " << this->lastName << "\n";
	cout << this->studentID << "\n";
	cout << this->phoneNumber << "\n";
	cout << this->gpa << "\n";
}
class Course {
private:
	string code;
	int section;
	int capacity;
	int numStudents;
	Student* info;
public:
	Course();
	~Course();
	Course(string x,int section,int capacity,int num);
	string getCode()const;
	int getSection()const;
	int getCapacity()const;
	int numStudents()const;
	void setCode(string x);
	void setSection(int x);
	void add(Student &x);
	void display()const;
	void sortByFirstAsc();
	void sortByFirstDes();
	void sortByFirstAsc();
	void sortByLastDes();
	void sortByIDAsc();
	void sortByIDDes();
	void sortByPhoneAsc();
	void sortByPhoneDes();
	void sortByGPAAsc();
	void sortByGPADes();
};
Course::Course(){
	this->code = "CMPT2300";
	this->section = 1;
	this->capacity = 35;
	this->numStudents = 0;
	this->info = new Student[35];
}
Course::~Course() { delete[] info;}
Course::Course(string x, int section, int capacity, int num){
	this->code = x;
	this->section = section;
	this->capacity = capacity;
	this->numStudents = num;
	this->info = new Student[capacity];
}
string Course::getCode()const { return this->code; }
int Course::getSection()const { return this->section; }
int Course::getCapacity()const { return this->capacity; }
int Course::numStudents()const { return this->numStudents; }
void Course::setCode(string x) { this->code = x;}
void Course::setSection(int x) { this->section = x; }
void Course::add(Student &x){
	if (this->numStudents < capacity) {
		this->numStudents += 1;
		info[this->numStudents - 1] = x;
	}
	else {
		this->capacity += 10;
		Student* temp = new Student[this->capacity];
		for(int i = 0; i < this->numStudents;i++) {
			temp[i] = this->info[i];
		}
		this->numStudents += 1;
		temp[this->numStudents] = &x;
		delete[] this->info;
		this->info = temp;
	}
}
void Course::display()const {}
void Course::sortByFirstAsc(){}
void Course::sortByFirstDes(){}
void Course::sortByFirstAsc(){}
void Course::sortByLastDes(){}
void Course::sortByIDAsc(){}
void Course::sortByIDDes(){}
void Course::sortByPhoneAsc(){}
void Course::sortByPhoneDes(){}
void Course::sortByGPAAsc(){}
void Course::sortByGPADes(){}




