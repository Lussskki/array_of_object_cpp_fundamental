#include <iostream>
using namespace std;

class Student
{
public:
	string name;
	int age;
	char gender;
	float programming_grade;

	Student()
	{ }

	Student(string name, int age, char gender, float programming_grade)
	{
		this->name = name;
		this->age = age;
		this->gender = gender;
		this->programming_grade = programming_grade;
	}
};

int main()
{
	/*int lucky_numbers[5] = { 1,2,3,4,5 };*/
	Student  students[3];

	for (int i = 0; i < 3; i++)
	{
		cout << "STUDENT "<< i + 1 << endl;
		Student s;

		cout << "Name: ";
		cin >> s.name;
		cout << "Age: ";
		cin >> s.age;
		cout << "Gender: ";
		cin >> s.gender;
		cout << "Programming Grade: ";
		cin >> s.programming_grade;

		students[i] = s;
	}

	cin.get();
}
