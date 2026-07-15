#include <bits/stdc++.h>
using namespace std;

/*
Level 3 — Loops on N (n is user input)

21.
 Write a program to display all the natural numbers from 1 to n. (n is user input)

22.
 Write a program to display all natural numbers from 1 to n in reverse order.

23.
 Write a program to display all even numbers from 1 to n.

24.
 Write a program to display all odd numbers from 1 to n.

25.
 Write a program to find the sum of all natural numbers from 1 to n.

26.
 Write a program to find the sum of all even numbers from 1 to n.

27.
 Write a program to find the sum of all odd numbers from 1 to n.

28.
 Write a program to find the product of all natural numbers from 1 to n (factorial of n).

29.
 Write a program to display the multiplication table of a number n.

30.
 Write a program to display all multiples of a number m up to n terms.

31.
 Write a program to count how many numbers from 1 to n are divisible by 3.

32.
 Write a program to display all numbers from 1 to n that are divisible by 3 or 5.
*/

void q21(){
    int n;
    cin >> n;
    for(int i =1;i<=n;i++){
        cout << i << " ";
    }
}

void q22(){
    int n;
    cin >> n;
    while(n>0){
        cout << n << " ";
        n--;
    }
}

void q23(){
    int n;
    cin >> n;
    for(int i = 0;i<=n;i= i+2){
        cout << i << " ";
    }
}

void q24(){
    int n;
    cin >> n;
    for(int i =1;i<=n;i=i+2){
        cout << i << " ";
    }
}

void q25(){
    int n;
    cin >> n;
    int sum =0;
    for(int i =0;i<=n;i++){
        sum = sum + i;
    }
    cout << sum << endl;
}

void q26(){
    int n;
    cin >> n;
    int sum = 0;
    for(int i =0;i<=n;i=i+2){
        sum = sum + i;
    }
    cout << sum << endl;
}

void q27(){
    int n;
    cin >> n;
    int sum =0;
    for(int i =1;i<=n ;i=i+2){
        sum = sum + i;
    }
    cout << sum << endl;
}

void q28(){
    int n;
    cin >> n;
    int prod = 1;
    for(int i = 1;i<=n;i++){
        prod = prod * i;
    }
    cout << prod << endl;
}

void q29(){
    int n;
    cin >> n;
    for(int i =1;i<=10;i++){
        cout << n << " X " << i << " = " << n*i <<endl;
    }
}

void q30(){
    int n;
    cin >> n;
    for(int i =1 ;i<n;i++){
        if(n%i == 0){
            cout << i << " ";
        }
    }
}

void q31and32(){
    int n;
    cin >> n;
    for(int i =1;i<n;i++){
        if(i%3==0){
            if(i%3 == 0 && i%5 == 0){
            cout << i << " is divisibke by 3 and 5" <<endl;
            continue;
            }
            cout << i << " is divisible by 3" <<endl;
        }

    }
}
int main(){
    q31and32();
}