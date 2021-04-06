# include <iostream>
using namespace std;
class Complex
{
    public:
        double real, imag;
    Complex(double real, double imag)
    {
        this->real = real;
        this->imag = imag;
    }

    Complex(const Complex & c)
    {
        real = c.real * 2;
        imag = c.imag * 2;
        std::cout << "copy constructor called" << std::endl;
    }
};


void function(Complex c){}


Complex function2()
{
    Complex e(1, 3);

    return e;
}

int main()
{
    Complex c1(1.0, 2.0);
    //Complex c2(c1);
    Complex c2 = c1;//init not equal
    Complex c3(2, 4);
    function(c3);//paraments' inition uses copy constructor

    std::cout << "c1 real " << c1.real << " c1 imag " << c1.imag << std::endl;
    std::cout << "c2 real " << c2.real << " c2 imag " << c2.imag << std::endl;
    
    std::cout << std::endl;

    std::cout << function2().real << std::endl;

    return 0;
}
