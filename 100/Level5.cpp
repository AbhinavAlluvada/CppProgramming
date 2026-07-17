#include <bits/stdc++.h>
using namespace std;
/*
44.
 Write a program to read a number and check whether it is prime or not.

45.
 Write a program to display all prime numbers from 1 to n.

46.
 Write a program to display the first n prime numbers.

47.
 Write a program to check whether a number is an Armstrong number.

48.
 Write a program to display all Armstrong numbers from 1 to n.

49.
 Write a program to check whether a number is a perfect number.

50.
 Write a program to check whether a number is a strong number (sum of factorials of its digits).

 51.
 Write a program to check whether a number is an automorphic number.

52.
 Write a program to check whether a number is a Harshad (Niven) number.

53.
 Write a program to find all factors (divisors) of a number n.

54.
 Write a program to count the number of factors of a number n.

55.
 Write a program to find the GCD (HCF) of two numbers.

56.
 Write a program to find the LCM of two numbers.
*/

bool q44(int n){
    bool isPrime = true;
    for(int i =2;i<n;i++){
        if(n%i == 0){
            isPrime = false;
        }
    }
    return isPrime;
}

void q45(){
    int n;
    cin >> n;
    vector<int> isPrime;
    for(int i =0 ;i<n;i++){
        if(q44(i)){
            isPrime.push_back(i);
        }
    }

    for(int i : isPrime){
        cout << i << " ";
    }
}

void q46(){
    int n;
    cin >> n;
    vector <int> prime;
    int num = 2;
    while(prime.size() < n){
        if(q44(num)){
            prime.push_back(num);
        }
        num++;
    }
    int breaking = 0;
    for(int i : prime){
        if(breaking%5 == 0 && breaking != 0){
            cout << endl;
        }
        cout << i << " ";
        breaking++;
    }
}
bool q47(long n){
    long temp = n;
    long arm = 0;
    string val = to_string(temp);
    while(temp != 0){
        long digit = temp%10;
        arm = arm + pow(digit,val.length());
        temp = temp / 10;
    }
    if(arm == n){
        return true;
    }
    else{
        return false;
    }
}

void q48(){
    long n;
    cin >> n;
    vector<long> arm;
    for(long i =0;i<n;i++){
        if(q47(i) && i>9){
            arm.push_back(i);
        }
    }
    for(long i : arm){
        cout << i << " ";
    }
}

void q49(){
    int n;
    cin >> n;
    int sum = 0;

    for(int i =1;i<n;i++){
        if(n%i==0){
            sum += i;
        }
    }
    if(sum == n){
        cout << "Perfecto!"<<endl;
    }
    else{
        cout << "Nah!" <<endl;
    }
}

long fact(long n){
    if(n == 0 || n == 1){
        return 1;
    }
    return fact(n-1)*n;
}

void q50(){
    long n;
    cin >> n;
    long temp = n;
    long sum = 0;
    while(temp != 0){
        long digit = temp % 10;
        sum += fact(digit);
        temp = temp / 10;
    }

    if(sum == n){
        cout << "Stroong numba!"<<endl;
    }
    else{
        cout << "nope"<<endl;
    }
}

bool q51(){
    long n;
    cin >> n;
    long square = n*n;
    long divisor = 1;
    long temp = n;
    while(temp != 0){
        divisor = divisor * 10;
        temp /=10;
    }
    return (square % divisor == n);
}

void q52(){
    long n;
    cin >> n;
    long sum =0;
    long temp = n;
    while(temp != 0){
        long digit = temp % 10;
        sum = sum + digit;
        temp = temp / 10;
    }
    if(n % sum == 0){
        cout << "Harshad Number!" <<endl;
    }
    else{
        cout << "Nah!" <<endl;
    }
}

void q55and56(){
    long x , y;
    cin >> x >> y;
    long a = x, b = y;

    while(b!=0){
        long rem = a%b;
        a = b;
        b = rem;
    }
    long hcf = a;
    long lcm = (x*y)/hcf;

    cout << "HCF: "<<hcf << endl;
    cout << "LCM: "<<lcm << endl;

}

void gcd(){
    int a ,b;
    cin >> a >> b;
    while(b != 0){
        int rem = a % b;
        a = b;
        b = rem;
    }
    int hcf = a;
    cout << hcf << endl;

}

void qfactors(){
    long n;
    cin >> n;
    vector<long> bag;
    long count = 0;
    for(long i =1;i<n;i++){
        if(n%i ==0){
            bag.push_back(i);
            count++;
        }
    }
    for(long i : bag){
        cout << i << " ";
    }
    cout << endl;
    cout << "Total Count: "<< count << endl;
}
int main(){
    cout << "Hello Level 5" <<endl;
    qfactors();
    return 0;
}