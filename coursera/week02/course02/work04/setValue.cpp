# include <iostream>


int n = 4;
int & setValue(){
	return n;
}
int main(){
	setValue() = 40;
	std::cout << n << std::endl;
	return 0;
}
