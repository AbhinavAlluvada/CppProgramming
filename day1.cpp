#include <iostream>
#include <cmath>
using namespace std;
class easy
{
public:
    void twosum(int a, int b)
    {
        cout << a + b;
    }
    void eveodd(int a)
    {
        if (a % 2 == 0)
        {
            cout << "Even" << endl;
        }
        else
        {
            cout << "Odd" << endl;
        }
    }
    int fact(int a)
    {
        if (a == 0 || a == 1)
        {
            return 1;
        }
        return a * fact(a - 1);
    }
    bool isprime(int a)
    {
        bool isprime = true;
        for (int i = 2; i < a; i++)
        {
            if (a % i == 0)
            {
                isprime = false;
            }
        }
        return isprime;
    }
    int calculator(int a, int b, char c)
    {
        int result = 0;
        switch (c)
        {
        case '+':
            result = a + b;
            cout << result << endl;
            break;
        case '-':
            result = a - b;
            cout << result << endl;
            break;
        case '*':
            result = a * b;
            cout << result << endl;
            break;
        case '/':
            result = a / b;
            cout << result << endl;
            break;
        default:
            cout << "Done" << endl;
            break;
        }
        return 0;
    }
    void swap(int a, int b)
    {
        cout << "a: " << a << endl;
        cout << "b: " << b << endl;

        int temp = a;
        a = b;
        b = temp;

        cout << "a: " << a << endl;
        cout << "b: " << b << endl;
    }
    void largest(int a, int b)
    {
        if (a > b)
        {
            cout << a << " is greater than " << b << endl;
        }
        else
        {
            cout << b << " is greater than " << a << endl;
        }
    }
    bool leap(int a)
    {
        bool val = false;
        if (a % 4 == 0)
        {
            if (a % 100 != 0 || a % 400 == 0)
            {
                val = true;
            }
            else
            {
                val = false;
            }
        }
        return val;
    }
    int reverse(int a)
    {
        int rev = 0;
        while (a > 0)
        {
            int digit = a % 10;
            rev = rev * 10 + digit;
            a /= 10;
        }
        return rev;
    }
};
class medium
{
public:
    void armstrong(int a)
    {
        int sum = 0;
        int var = a;
        while (var > 0)
        {
            int digit = var % 10;
            sum = sum + (digit * digit * digit);
            var /= 10;
        }
        if (sum == a)
        {
            cout << "Armstrong Number!" << endl;
        }
        else
        {
            cout << "Nope..." << endl;
        }
    }
    bool palindrome(int a)
    {
        bool cond = false;
        int rev = 0;
        int var = a;
        while (var > 0)
        {
            int digit = var % 10;
            rev = rev * 10 + digit;
            var /= 10;
        }
        if (a == rev)
        {
            cond = true;
        }
        return cond;
    }
    void sumdigit(int a)
    {
        int sum = 0;
        int var = a;
        while (var > 0)
        {
            int digit = var % 10;
            sum += digit;
            var /= 10;
        }
        cout << "Sum of digits of " << a << " is: " << sum << endl;
    }
    int count(int a)
    {
        int var = a;
        int count = 0;
        while (var > 0)
        {
            int digit = var % 10;
            count++;
            var /= 10;
        }
        return count;
    }
    void csimple(int p, int r, int t)
    {
        float si = (p * t * r) / 100;
        float ci = p * pow((1 + (r / 100)), t);

        cout << "Info: " << endl;
        cout << "Principal Amount: " << p << endl;
        cout << "Time(only in years): " << t << endl;
        cout << "Rate of Interest: " << r << endl;

        cout << "Simple Interest: " << si << endl;
        cout << "Compound Interest: " << ci << endl;
    }
    class bank
    {
    private:
        double balance;

    public:
        bank()
        {
            balance = 0.0;
        }
        void deposit(int a)
        {
            if (a > 0)
            {
                balance += a;
                cout << "Deposit successful!" << endl;
            }
            else
            {
                cout << "Insufficient Funds for a deposit" << endl;
            }
        }
        void withdraw(int a)
        {
            if (a > 0 && a > balance)
            {
                cout << "You do not have enough money to withdraw $" << a << " from you bank account..." << endl;
            }
            else if (a > 0 && a <= balance)
            {
                balance -= a;
                cout << "Withdrawal successful!" << endl;
            }
            else
            {
                cout << "You're Broke!" << endl;
            }
        }
        void checkbal()
        {
            cout << "Your Bank Balance is: $" << balance << endl;
        }
    };
    void electricitybill(float units)
    {
        float bill = 0.0;
        if (units <= 100)
        {
            bill = (units * 1.5);
        }
        else if (units <= 200)
        {
            bill = (100 * 1.5) + (units - 100) * 2;
        }
        else if (units <= 300)
        {
            bill = (100 * 1.5) + (100 * 2) + (units - 200) * (4);
        }
        else
        {
            bill = (100 * 1.5) + (100 * 2) + (100 * 4) + (units - 300) * 6;
        }
        cout << "Electricity Bill: " << bill << endl;
    }
    class login
    {
    private:
        string username = "";
        string password = "";

    public:
        void regist()
        {
            cout << "Enter a username: " << endl;
            cin >> username;
            cout << "Enter a password: " << endl;
            cin >> password;
            cout << "Registration Successfully completed!" << endl;
        }
        void log()
        {
            string user;
            string pwd;
            cout << "Enter Your UserName: " << endl;
            cin >> user;
            cout << "Enter your passowrd: " << endl;
            cin >> pwd;
            if (username == "" || password == "")
            {
                cout << "Before Login you need to register!" << endl;
            }
            else if (user != username || pwd != password)
            {
                cout << "Login unsuccessful, Try Again..." << endl;
            }
            else
            {
                cout << "Welcome to Dashboard..." << endl;
                cout << "Continue coding!" << endl;
            }
        }
    };
};
int main()
{
    easy easy;
    int ans = easy.reverse(123);
    cout << "Reverse: " << ans << endl;
    cout << endl;
    bool isit = easy.leap(2020);
    cout << "Leap or not: " << isit << endl;
    cout << endl;
    easy.largest(20, 23);
    cout << endl;
    easy.swap(20, 23);
    cout << endl;
    easy.calculator(20, 10, '+');
    cout << endl;
    bool isprime = easy.isprime(20);
    cout << "Is it prime or not? " << isprime << endl;
    cout << endl;
    int value = easy.fact(5);
    cout << value << endl;
    cout << endl;
    easy.eveodd(10);
    cout << endl;
    easy.twosum(10, 20);

    medium::bank bank;
    cout << "Welcome to Bank" << endl;
    while (true)
    {
        int choice;
        cout << "Choose any one of the options to proceed:" << endl;
        cout << "1.Deposit\n2.Withdraw\n3.CheckBalance\n4.Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        if (choice == 1)
        {
            int deposit;
            cout << "Enter the amount to deposit: ";
            cin >> deposit;
            bank.deposit(deposit);
            cout << endl;
        }
        else if (choice == 2)
        {
            int withdraw;
            cout << "Enter the amount to withdraw: ";
            cin >> withdraw;
            bank.withdraw(withdraw);
            cout << endl;
        }
        else if (choice == 3)
        {
            bank.checkbal();
            cout << endl;
        }
        else
        {
            cout << "Thanks MAte!" << endl;
            break;
        }
    }
    medium::login login;
    cout << "Welcome to ABC!" << endl;
    while (true)
    {
        cout << "Choose 1 for registration\nChoose 2 for Login" << endl;
        int choice;
        cout << "What's your move?: ";
        cin >> choice;
        if (choice == 1)
        {
            cout << "Time to Register..." << endl;
            login.regist();
        }
        else if (choice == 2)
        {
            cout << "Let's test it!" << endl;
            login.log();
            break;
        }
        else
        {
            cout << "Get out of here!" << endl;
            break;
        }
    }
    medium med;
    med.armstrong(153);
    cout << endl;
    bool result = med.palindrome(121);
    cout << result;
    cout << endl
         << endl;
    int ans = med.count(1234);
    cout << ans;
    cout << endl;
    med.csimple(2000, 2, 2);
    cout << endl;
    med.sumdigit(123456789);

    return 0;
}