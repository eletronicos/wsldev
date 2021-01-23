# include <iostream>

int main(){
	using namespace std;

    int n, m;
    const int *p = &n;
    //p = 5;
    //cant change value of const pointer, but can change value of origin variable
    n = 4;
    p = &m;
    //its able to change which variable of pointer
    const int *p1;
    int *p2;

    p1 = p2;
    //p2 = p1;
    p2 = (int* )p1;

    return 0;
}
	
