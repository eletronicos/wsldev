# include <iostream>

using namespace std;

class Complex
{
    public:
        double real;
        double imag;
    
    Complex(double r, double i)
    {
        this->imag = imag;
        this->real = real;
    }

    Complex(int i)
    {
        cout << "IntCOnstructor called" << endl;
        real = i;
        imag = 0;
    }
};

int main()
{
    Complex c1(7, 8);
    Complex c2 = 12;
    c1 = 9;
    cout << c1.real << "," << c1.imag << endl;
    return 0;

}