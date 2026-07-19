#include <bits/stdc++.h>
using namespace std;
/*
92.
 Write a program to check whether a number is prime, using a function/method.

93.
 Write a program to print all prime numbers between two given numbers a and b.

94.
 Write a program to find the sum of digits of a number repeatedly until a single digit remains.

95.
 Write a program to count the number of prime digits present in a number n.

96.
 Write a program to check whether a number is a palindrome and a prime at the same time.

97.
 Write a program to find the largest and smallest number that can be formed using the digits of
n.

98.
 Write a program to convert a decimal number into its binary equivalent.

99.
 Write a program to convert a binary number into its decimal equivalent.

100.
 Write a program to display a menu that lets the user repeatedly choose any of the above tasks
until they choose to exit.

*/
void pascal(){
    int n;
    cin >> n;
    vector<int> prev = {1};
    for(int i =0;i<n;i++){
        for(int j =0;j<n-i-1;j++){
            cout << " ";
        }
        for(int x : prev){
            cout << x <<" ";
        }
        vector<int> next;
        next.push_back(1);
        for(int k =1;k<prev.size();k++){
            next.push_back(prev[k-1]+prev[k]);
        }
        next.push_back(1);
        prev = next;
        cout << endl;
    }
}
bool q92(int n){
    for(int i =2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
void q93(){
    int a ,b;
    cin >> a >> b;
    for(int i = a+1 ;i<b;i++){
        if(q92(i)){
            cout << i << " ";
        }
    }
}
void q94(){
    int n;
    cin >> n;
    int sum =0;
    while(n>10){
        int digit = n%10;
        sum += digit;
        n /= 10;
    }
    cout << "Single digit left is : "<< n<<endl;
    cout << sum << endl;
}

void q95(){
    long n;
    cin >> n;
    set<int> prime;
    while(n!=0){
        long digit = n%10;
        if(q92(digit)){
            prime.insert(digit);
        }
        n /= 10;
    }
    for(int x : prime){
        cout << x << " ";
    }
}

void q96(){
    int n;
    cin >> n;
    int temp = n;
    int rev = 0;
    while(temp != 0){
        int digit = temp % 10;
        rev = rev*10 + digit;
        temp = temp/10;
    }

    if(rev == n && q92(n)){
        cout << "Hell yeah it is Prime and palindrome"<<endl;
    }
    else{
        cout << "NOT A CHANCE!";
    }
}
bool comp(int a , int b){
        return a>b;
    }
void q97(){
    int n;
    cin >> n;
    vector<int> ans;
    while(n!=0){
        int digit = n%10;
        ans.push_back(digit);
        n/=10;
    }

    sort(ans.begin(),ans.end());
    string fake = "";
    for(int x: ans){
        fake += char(x + '0');
    }
    int smallest = stoi(fake);
    sort(ans.begin(),ans.end(),comp);
    string fake1 = "";
    for(int x: ans){
        fake1 += char(x + '0');
    }
    int largest = stoi(fake1);

    cout << "Largest from the digits: " << largest <<endl;
    cout << "Smallest from the digits: " << smallest <<endl;
}

void q98(){
    int n;
    cin >> n;
    string fake = "";
    while(n!=0){
        int rem = n%2;
        fake = char(rem+'0') + fake;
        n = n/2;
    }
    cout << fake << endl;
}

void q99(){
    string str;
    getline(cin, str);
    int decimal = 0;
    for(int i =0;i<str.size();i++){
        int num = str[i] -'0';
        decimal = decimal + (num * pow(2,str.size()-i-1));
    }
    cout << decimal << endl;
    
}

void q100(){
    while(2>1){
    int choice;
    cout <<"1.Go on!\n2.Go on and on.\n3.Go on and off and on\n4.Break!"<<endl;
    cout << "Enter your choice: ";
    cin >> choice;
        if(choice == 4){
            cout << "Thank You! Mission Complete!" <<endl;
            return;
        }
    }
}
int main(){
    cout << "Level-9!!!"<<endl;
    q100();
    return 0;
}