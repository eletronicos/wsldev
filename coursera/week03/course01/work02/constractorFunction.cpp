# include <iostream>

using namespace std;

class Automobile
{
    public:
        string name;
        int weight;
        string fee;

        Automobile(string name, int weight = 0, string fee = "20000");
        Automobile(string name, string fee = "NULL");

        void show()
        {
            cout << "Brand:" << name << endl
            << "Weight:" << weight << endl
            << "Fee:" << fee << endl;
        }
};

Automobile::Automobile(string name, int weight, string fee)
{
    Automobile::name = name;
    Automobile::weight = weight;
    Automobile::fee = fee;
}

Automobile::Automobile(string name, string fee)
{
    Automobile::name = name;
    Automobile::fee = fee;
}


int main()
{
    Automobile * car = new Automobile("BMW", 2);

    car->show();

}