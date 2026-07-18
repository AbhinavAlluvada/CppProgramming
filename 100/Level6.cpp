#include <bits/stdc++.h>
using namespace std;
/*
57.
 Write a program to display the first n terms of the Fibonacci series.

58.
 Write a program to find the sum of the first n terms of the Fibonacci series.

59.
 Write a program to find the sum of the series 1 + 2 + 3 + ... + n.

60.
 Write a program to find the sum of the series 1^2 + 2^2 + 3^2 + ... + n^2.

61.
 Write a program to find the sum of the series 1 + 1/2 + 1/3 + ... + 1/n.

62.
 Write a program to find the value of x raised to the power y without using inbuilt power.

63.
 Write a program to print a right-angled triangle pattern of stars of height n.

64.
 Write a program to print an inverted right-angled triangle pattern of stars of height n.

65.
 Write a program to print a pyramid pattern of stars of height n.

66.
 Write a program to print a number triangle (row i contains numbers 1 to i).

67.
 Write a program to print Pascal's triangle for n rows
*/
void trick()
{
    int a, b;
    cin >> a >> b;
    int x = a, y = b;
    while (b != 0)
    {
        int rem = a % b;
        a = b;
        b = rem;
    }
    int hcf = a;
    int lcm = (x * y) / hcf;
    cout << "HCF: " << hcf << endl;
    cout << "LCM: " << lcm << endl;
}
void fib()
{
    int n;
    cin >> n;
    int a = 0, b = 1;
    int sum = 1;
    cout << a << " " << b << " ";
    for (int i = 0; i < n - 2; i++)
    {
        int fina = a + b;
        cout << fina << " ";
        a = b;
        b = fina;

        sum = sum + fina;
    }
    cout << endl;
    cout << "Sum of n fib terms: " << sum << endl;
}

void sum_n_series(){
    int n;
    cin >> n;
    int sum1 = 0;
    int sum2 = 0;
    int sum3 = 0;
    for(int i =0;i<=n;i++){
        sum1 = sum1 + i;
        sum2 = sum2 + (i*i);
        if(i != 0){
        sum3 = sum3 + (1/i);}
    }

    cout << "q59: Sum: "<<sum1 <<endl;
    cout << "q60: Sum: "<<sum2 <<endl;
    cout << "q61: Sum: "<<sum3 <<endl;
}

int q62(int val,int pow){
    int ans = 1;
    for(int i =0;i<pow;i++){
        ans = ans * val;
    }
    return ans;
}

void q63(){
    int n;
    cin >> n;
    for(int i =0;i<n;i++){
        for(int j = 0;j<=i;j++){
            cout << "* ";
        }
        cout << endl;
    }
}

void q64(){
    int n;
    cin >> n;
    for(int i =0;i<n;i++){
        for(int j = i;j<n;j++){
            cout << "* ";
        }
        cout << endl;
    }
}
void q65(){
    int n;
    cin >> n;
    for(int i =0;i<n;i++){
        for(int j =i;j<n;j++){
            cout << "  ";
        }
        for(int j =0;j<=i;j++){
            cout << "* ";
        }
        for(int j =1;j<=i;j++){
            cout << "* ";
        }

        cout << endl;
    }
}

void triangle(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
    int count = 1;
        for(int j =i;j<n;j++){
            cout << "  ";
        }
        for(int k =0;k< 2*i+1;k++){
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}

void pascal(){
    int n;
    cin >> n;
    int sum =1;
    for(int i =0;i<n;i++){
        for(int j =i;j<n;j++){
            cout << "  ";
        }
        for(int k =0;k <= i; k++){
            cout << sum << " ";
        }

        cout << endl;
    }
}
int main()
{
    pascal();
    return 0;
}