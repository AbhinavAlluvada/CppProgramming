#include <iostream>
using namespace std;
class abstractTrain{
public:
    virtual void traintime() = 0;
};
class Swordmaster:public abstractTrain{
private:
    string Name;
    int Age;
    string Bankai;
public:   
    void setName(string name){
        Name = name;
    }
    string getName(){
        return Name;
    }
    void setAge(int age){
        if(age>0)
        Age = age;
    }
    int getAge(){
        return Age;
    }
    Swordmaster(string name, int age, string bankai){
        Name = name;
        Age = age;
        Bankai = bankai;
    }

    void Intro(){
        cout << getName() <<" is here!, He is "<<getAge() <<" years old and his bankai is "<<Bankai<<endl;
    }
    void traintime() override{
        if(getName() == "Kurosaki Ichigo")
        cout << getName() <<" trained for 2 days!"<< endl;
        else
        cout << getName() <<" trained for 100 years"<<endl;
    }
};
class abstractTitle{
public:
    virtual void Title(string title) = 0;
};
class Haki: public abstractTitle,public Swordmaster{
private:
    string HakiType;
public:
    void setHaki(string haki){
        HakiType = haki;
    }
    string getHaki(){
        return HakiType;
    }

    Haki(string name , string haki,string bankai, int age)
    : Swordmaster(name, age,bankai){
        HakiType = haki;
    }
    void Title(string title) override{
        cout << getName()<<" is an "<<title<<endl;
    }
    void Intro(){
        cout <<"I am "<<getName()<<" and im a "<<getHaki()<<" Haki user!"<<endl;
    }

};
int main(){
    Swordmaster master1 = Swordmaster("Ichigo",18,"Tensa Zangetsu");
    master1.Intro();
    Swordmaster master2 = Swordmaster("Aizen",150,"Kyoka Suigetsu");
    master2.Intro();
    master2.traintime();
    master1.setName("Kurosaki Ichigo");
    master1.setAge(19);
    master1.traintime();

    master1.Intro();



    Haki user1 = Haki("Luffy","Conqueror","N/A",19);
    user1.Intro();
    user1.Title("Emperor");
    return 0;
}