# include <iostream>

using namespace std;

class Animal
{
    private:
        string name;
        int age;
    
    public:
        inline void spark();
        inline void spark(string voice);

};

inline void Animal::spark()
{
    cout << "wolf, wolf!" << endl;
}

inline void Animal::spark(string voice)
{
    cout << voice << endl;
}

int main()
{
    Animal doggy;
    doggy.spark("Hi, Siri!");
}