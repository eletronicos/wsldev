# include <iostream>

int main(){
	using namespace std;

	int n = 4;
	int & r = n;
	cout << "r = " << r << endl;
	cout << "n = " << n << endl;

	n = 5;
	r = 999;
	cout << "r = " << r << " " << "n = " << n << endl;

}

