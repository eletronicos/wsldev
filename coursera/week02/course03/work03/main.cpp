# include <iostream>
# include "getMax.cpp"

int main(){
	using namespace std;
	
	int a = 3, b = 4;
	for (int i = 0; i < 1000; i++){
		getMax(a, b);
	}
}

