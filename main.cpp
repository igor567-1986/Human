     
#include<iostream>
#include <string>
using namespace std;


#define delimetr "\n-------------------------------------\n"

#define HUMAN_TAKE_PARAMETRS const std::string& name,const std::string& surname,const std::string& patronymic, unsigned int age
#define HUMAN_GIVE_PARMETRS name,surname,patronumic,age
class Human
{
	std::string name;
	std::string surname;
	std::string patronymic;
	unsigned int age;
public:
	const std::string& get_name()const       { return name; }
	const std::string& get_surname()const    { return surname; }
	const std::string& get_patronymic()const { return patronymic; }
	unsigned int get_age()const              { return age; }
	   //Constructors
	Human(const std::string& name,const std::string& surname,const std::string& patronymic, unsigned int age):
		name(name),surname(surname),patronymic(patronymic),age(age)
	{ 
		cout << "Constructor\t" << this << endl; 
	}
	virtual ~Human() { cout << "HDestructor\t" << this << endl; }
	      // Methods
	virtual void print()const	
	{		
		cout << name << " " << surname << " " << patronymic << " " << age << "лет\n";
	}
};
std::ostream& operator<<(std::ostream& os, const Human& obj)
{
	return os << obj.get_name() << " " << obj.get_surname() << " "<<obj.get_patronymic() << obj.get_age() << "y.o";
}

class Student :public Human
{

};
void main()
{
	setlocale(LC_ALL, "");

}