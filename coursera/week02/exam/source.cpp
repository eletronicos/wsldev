# include <iostream>
# include <string.h>

using namespace std;

class Student
{
	private:
		string name;
		int age;
		string number;
		int scores_1, scores_2, scores_3, scores_4;
	public:
		void func()
		{
			string name, number;
			int age, scores_1, scores_2, scores_3, scores_4;
			int average_scores;	

			string data;
			cin >> data;
			string[] output = data.split(",");
			name = output[0];
			age = output[1];
			number = output[2];
			scores_1 = output[3];
			scores_2 = output[4];
			scores_3 = output[5];
			scores_4 = output[6];
			

			average_scores = (scores_1 + scores_2 + scores_3 + scores_4) / 4;
			cout << name << "," << age << "," << number << "," << average_scores;
		}
};

int main()
{
	Student stu;
	stu.func();
}
	
