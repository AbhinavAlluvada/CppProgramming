#include <iostream>
using namespace std;

bool isPrime(int n){
    for(int i = 2;i<n;i++){
        if(n%i ==0){
            return false;
        }
    }
    return true;
}
int secondlar(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>> arr[i];
    }
    int lar = arr[0];
    int seclar = arr[1];
    for(int i=0;i<n;i++){
        if(arr[i]>lar){
            seclar = lar;
            lar = arr[i];
        }
        else if(arr[i]>seclar && arr[i]<lar){
            seclar = arr[i];
        }
        else{}
    }
    return seclar;
}
class rectangle{
public:
    int length;
    int breadth;

    rectangle(int len, int bre){
        length = len;
        breadth = bre;
    }
    int area(){
        return (length*breadth);
    }
    int perimeter(){
        return (2*(length+breadth));
    }
};

void pattern(int n){
    int num =1;
    for(int i =0;i<n;i++){
        for(int j =0;j<=i;j++){
            cout << num++<<" ";
        }
        cout <<endl;
    }
}
class Student{
private:
    string Name;
    int rollNO;
    int marks;
public:
    void setName(int name){
        Name = name;
    }
    string getName(){
        return Name;
    }
    void setRoll(int roll){
        rollNO =roll;
    }
    int getRoll(){
        return rollNO;
    }
    void setMarks(int mark){
        marks = mark;
    }
    int getMarks(){
        return marks;
    }
    Student(string name,int roll,int mar){
        Name = name;
        rollNO = roll;
        marks = mar;
    }
    void display(){
        cout <<"Student name: "<<getName()<<endl;
        cout <<"Roll No: "<<getRoll()<<endl;
        cout <<"Marks: "<<getMarks();
    }
};
int sumarray(int arr[],int n){
    int sum = 0;
    for(int i =0;i<n;i++){
        sum = sum+ arr[i];
    }
    return sum;
}
int fact(int n){
    if(n==1){
        return 1;
    }
    return n*fact(n-1);
}
class Shape{
public:
    int a;

    Shape(int val){
        a = val;
    }
    virtual void area(){
        cout << a*a<<endl;
    }
};
class square: public Shape{
public:
    square(int a):Shape(a){}
    void area() override{
        cout << a*a;
    }
};
class circle: public Shape{
public:
    circle(int a):Shape(a){}
    void area() override{
        cout << 3.14*a*a;

    }
};
int linear(int arr[], int n,int target){
    for(int i=0;i<n;i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}
bool leap(int year){
    if(year%4 == 0 && year%100!=0){
        return true;
    }
    else if(year%400==0){
        return true;
    }
    return false;
}
class Animal{
public:
    string animal;
    string sound;
    Animal(string anim,string son){
        animal = anim;
        sound = son;
    }
    virtual void act(){
        cout <<animal<<" makes animal sounds!"<<endl;
    }
};
class Dog:public Animal{
public:
    string name;
    string sound;
    Dog(string name1,string sound1):Animal(animal,sound){
        name = name1;
        sound = sound1;
    }
    void act() override{
        cout << name<<" says "<<sound;
    }
};
int main(){
    Animal ani = Animal("Mark","Hoo Hoo");
    ani.act();
    Dog ani2 = Dog("Henry","Bow Bow");
    ani2.act();
    return 0;
}