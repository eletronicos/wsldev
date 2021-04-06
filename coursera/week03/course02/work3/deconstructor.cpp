# include <iostream>

class String
{
    private:
        char * p;

    public:
        String()
        {
            std::cout << "constructor called" << std::endl;
            p = new char[10]; 
        }
        ~ String();
};

String::~String()
{
    delete [] p;
    std::cout << "deconstructor called" << std::endl;
}

int main()
{
    String * str = new String;
    delete str;
    return 0;
}