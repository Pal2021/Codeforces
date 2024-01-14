#include <bits/stdc++.h>
using namespace std;
/*
class fruit
{
public:
    string name;
    string color;
};
int main()
{
    fruit apple;
    apple.name = "Apple";
    apple.color = "Red";

    fruit *mango = new fruit();
    mango->name = "mango";
    cout << apple.name << " " << apple.name << " " << mango->name;
}
*/
/// @brief //////////////////////////////////////////////////////////////////////////////////////////////////
/*
class rec
{
public:
    int l;
    int b;
    rec() /// default constructor-no args passed
    {
        l = 0;
        b = 0;
    }
    rec(int x, int y) // parameterised constructor- args passed
    {
        l = x;
        b = y;
    }
    rec(rec &r) // copy constructor inialise an obj
    {
        l = r.l;
        b = r.b;
    }
    ~rec()
    {
        cout << "Distructure is called" << endl;
    }
};
int main()
{
    rec *r1 = new rec();

    cout << r1->l << " " << r1->b << endl;
    delete (r1);
    cout << r1->l << " " << r1->b << endl;
    rec r2(3, 4);
    cout << r2.l << " " << r2.b << endl;
    rec r3 = r2;
    cout << r3.l << " " << r3.b << endl;
}
*/
///////////////////////////Encapsulation /////////////////////////////////
/*
class abc
{
    int x;

public:
    void set(int n)
    {
        x = n;
    }
    int get()
    {
        return x;
    }
};
int main()
{
    abc ob1;
    ob1.set(4);
    cout<<ob1.get()<<endl;
}
*/

///////////////////////////Abstraction/////////////////////////////////

////////////////Inheritance/////////////////////////////////////////

// Single inheritance
// Single inheritance
class parent
{
public:
    parent()
    {
        cout << "this is parent class" << endl;
    }
};

class child : public parent
{
public:
    child() : parent()
    {
        cout << "this is child class" << endl;
    }
};

int main()
{
    child ob1;
    return 0;
}

/////////////////////////////Polymorphism/////////////////////////////////////////
/////////////////////////////Friends function/////////////////////////////////////