#include <iostream>
using namespace std;

// This is an example just to understand the concepts of inheritance.
class Monkey
{
protected:
    int legs;
    int eyes;
    int hands;
    bool tail;

public:
    void setall1()
    {
        legs = 2;
        hands = 2;
        eyes = 2;
        tail = true;
    }
};

class Dolphin
{
protected:
    bool intelligence;
    bool mammal;

public:
    void setall2()
    {
        intelligence = true;
        mammal = true;
    }
};

class Human : public Monkey, public Dolphin
{
public:
    void updates()
    {
        tail = false;
    }
    void display()
    {
        cout << "The properties of human are " << endl
             << "Legs, Hands, Eyes: " << legs << endl
             << "Tail: " << tail << endl
             << "Intelligence, Mammal: " << intelligence << endl;
    }
};
int main(int argc, char const *argv[])
{
    Human person1;
    person1.setall1();
    person1.setall2();
    person1.updates();
    person1.display();
    return 0;
}
