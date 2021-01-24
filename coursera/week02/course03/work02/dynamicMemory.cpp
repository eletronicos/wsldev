# include <iostream>

int main(){
        using namespace std;
        
        int * p = new int;
        * p = 5;

        printf("%d\n", * p);
	delete p;

	int i = 5;
	int * pn = new int[i * 20];
	pn[0] = 666;
	
	printf("%d\n", pn[0]);
	delete []pn;

        return 0;
}

