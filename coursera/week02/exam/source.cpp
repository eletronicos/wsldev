# include <iostream>
# include <string>

using namespace std;

class Student
{
	private:
		char name[30];
		int age;
		char number[30];
		int scores1, scores2, scores3, scores4;  
		int averageScores;
	
	public:
		void get();
		void print();
		void average();
};

void Student::get()
{
	char tmpchar;
	cin.getline(name, 30, ',');
	cin >> age >> tmpchar;
	cin.getline(number, 30, ',');
	cin >> scores1 >> tmpchar >> scores2 >> tmpchar >> scores3 >> tmpchar >> scores4;

}


void Student::print()
{
	cout << name << "," << age << "," << number << "," << averageScores << endl;
}

void Student::average()
{
	averageScores = (scores1 + scores2 + scores3 + scores4) / 4;
}

int main()
{
	Student stu;
	stu.get();
	stu.average();
	stu.print();
	return 0;
}
