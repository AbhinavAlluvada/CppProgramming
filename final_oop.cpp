#include <bits/stdc++.h>
using namespace std;
class Vehicle
{
private:
    string company;
    string price;

public:
    void setcomp(string com)
    {
        company = com;
    }
    string getcomp()
    {
        return company;
    }
    void setprice(string cost)
    {
        price = cost;
    }
    string getprice()
    {
        return price;
    }

    virtual void intro()
    {
        cout << "Vehicle Manufacturer!" << endl;
    }

    virtual void getveh()
    {
        cout << "Vehicle is from " << company << " and cost about " << price << endl;
    }
};

class Car : public Vehicle
{
public:
    void intro()
    {
        cout << "Car Manufacturer!" << endl;
    }
    virtual void getveh()
    {
        cout << "Car is from " << getcomp() << " and cost about " << getprice() << endl;
    }
};
class Abstractinfo
{
public:
    virtual void mileage() = 0;
};

class Bike : public Vehicle, public Abstractinfo
{
public:
    void intro()
    {
        cout << "Bike Manufacturer!" << endl;
    }
    void mileage()
    {
        cout << "Gives an average mileage about 35kmpl" << endl;
    }
    virtual void getveh()
    {
        cout << "Bike is from " << getcomp() << " and cost about " << getprice() << endl;
    }
};

class Ship
{
public:
    string name;

    Ship(string nam)
    {
        name = nam;
    }
    void intro()
    {
        cout << "This is a cruise!" << endl;
    }
    virtual void showship()
    {
        cout << name << " is sailing towards NYK" << endl;
    }
    void didcrash()
    {
        if (name == "Titanic")
        {
            cout << "Hell Yeah!" << endl;
        }
        else
        {
            cout << "Maybe No..." << endl;
        }
    }
};
class motorboat : public Ship
{
public:
    string mname;
    motorboat(string name, string boat) : Ship(name), mname(boat)
    {
    }
};
int main()
{
    Vehicle ve1;
    ve1.setcomp("BMW");
    ve1.setprice("56L");

    Car ve2;
    ve2.setcomp("Audi");
    ve2.setprice("85L");

    Bike ve3;
    ve3.setcomp("TVS");
    ve3.setprice("2L");

    // Implementation
    ve1.intro();
    ve2.intro();
    ve3.intro();

    ve1.getveh();
    ve2.getveh();
    ve3.getveh();

    // Constructor Test

    Ship ship = Ship("Titanic");
    Ship ship2 = Ship("Cruise");

    ship.didcrash();
    ship2.didcrash();

    ship.showship();
    return 0;
}