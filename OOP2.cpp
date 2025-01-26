#include <iostream>
using namespace std;
class BankAccount{
private:
    string accoutHolder;
    int accountBalance;
public:
    void setHolder(string name){
        accoutHolder = name;
    }
    string getHolder(){
        return accoutHolder;
    }
    void setBalance(int balance){
        accountBalance = balance;
    }
    int getBalance(){
        return accountBalance;
    }
    BankAccount(string name,int balance){
        accoutHolder = name;
        accountBalance = balance;
    }
    void deposit(int amount){
        accountBalance = accountBalance + amount;
    }
    void withdraw(int amount){
        if(amount>accountBalance){
            cout << "Insufficient Balance"<<endl;
        }
        accountBalance = accountBalance - amount;
    }
    void display(){
        cout <<getHolder()<<" is the user"<<endl;
        cout <<"Bank Balance: "<<getBalance()<<endl;
    }
};
int main(){
    BankAccount user1 = BankAccount("Elon",25000);
    BankAccount user2 = BankAccount("Gates",15000);
    user1.display();
    user1.deposit(15000);
    user1.display();
    user1.withdraw(10000);
    user1.display();
    user2.display();
    user2.deposit(25000);
    user2.display();
    return 0;
}

