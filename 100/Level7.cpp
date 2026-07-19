#include <bits/stdc++.h>
using namespace std;
/*
Level 7 — Strings

68.
 Write a program to find the length of a string without using an inbuilt function.

69.
 Write a program to count the number of vowels and consonants in a string.

70.
 Write a program to count the number of words in a sentence.

71.
 Write a program to reverse a string.

72.
 Write a program to check whether a string is a palindrome.

73.
 Write a program to convert a string to uppercase and lowercase without inbuilt case functions.

74.
 Write a program to count the frequency of each character in a string.

75.
 Write a program to remove all spaces from a string.

76.
 Write a program to check whether two strings are anagrams of each other.

77.
 Write a program to find the first non-repeating character in a string.

78.
 Write a program to replace all occurrences of a character with another character in a string.

79.
 Write a program to toggle the case of each character in a string.
*/

void q68(){
    string str;
    getline(cin,str);
    int length = 0;
    for(char c : str){
        length++;
    }
    cout << "Length of the string: "<<length<<endl;
}

void q69(){
    string str;
    getline(cin ,str);
    int vowels = 0, consonants = 0;
    for(char c : str){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
            vowels++;
        }
        else{
            consonants++;
        }
    }
    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
}

void q70(){
    string str;
    getline(cin,str);
    int words = 0;
    for(int i =0;i<str.size();i++){
        if(isalpha(str[i]) && (i == 0 || str[i-1] == ' ')){
            words++;
        }
    }
    cout << "Total no of words: " << words << endl;
}

void q71(){
    string temp;
    getline(cin,temp);
    string str  = temp;
    int start = 0;
    int end = str.size()-1;
    while(start < end){
        swap(str[start], str[end]);
        start++;
        end--;
    }
    cout << "After Reversing: "<<str << endl;
    if(str == temp){
        cout << "Palindrome!" << endl;
    }
    int n = str.size()-1;
    for(int i =0;i<=n/2;i++){
        int temp = str[i];
        str[i] = str[n-i];
        str[n-i] = temp;
    }
    cout << "Re-reversing: "<<str << endl;

}

void q72(){
    string str;
    getline(cin, str);
    int choice;
    cout << "1. Uppercase\n2. Lowercase" <<endl;
    cin >> choice;
    if(choice == 1){
        for(int i =0;i<str.size();i++){
            if(str[i] <= 'A' || str[i] >= 'Z'){
                char c = str[i] - 32;
                str[i] =  c;
            }
        }
    }
    else{
        for(int i =0;i<str.size();i++){
            if(str[i] <= 'a' || str[i] >= 'z'){
                char c = str[i] + 32;
                str[i] =  c;
            }
        }

    }

    cout << str << endl;
}

void q73(){
    string str;
    getline(cin,str);
    map<char,int> freq;
    for(char c : str){
        freq[c]++;
    }
    for(pair<char,int> it: freq){
        cout << it.first << ": "<<it.second<<endl;
    }
}

void q75(){
    string str;
    getline(cin , str);
    string new_string ="";
    for(char c : str){
        if(c == ' '){
            continue;
        }
        new_string += c;
    }
    cout << new_string << endl;
}

void q76(){
    string str1;
    getline(cin , str1);
    string str2;
    getline(cin , str2);

    map<char,int> freq1;
    map<char,int> freq2;
    for(char c: str1){
        freq1[c]++;
    }
    for(char c : str2){
        freq2[c]++;
    }

    if(freq1 == freq2){
        cout << "Anagram" <<endl;
    }
    else{
        cout << "Not Anagram" <<endl;
    }
}

void q77(){
    string str;
    getline(cin , str);
    unordered_map <char,int> freq;
    for(char c : str){
        freq[c]++;
    }
    for(int i =0;i<str.size();i++){
        if(freq[str[i]] == 1){
            cout << str[i];
            break;
        }
    }
}

void q78(){
    string str;
    cout << "Enter string: ";
    getline(cin , str);
    cout << "Enter target character: ";
    char target = getchar();
    cin.ignore();
    cout << "Enter replacement: ";
    char replace = getchar();

    for(int i =0;i<str.size();i++){
        if(str[i] == target){
            str[i] = replace;
        }
    }
    cout << "Replaced String: "<<str <<endl;
}

void pascal(){
    int n;
    cin >> n;
    vector<int> prev = {1};
    for(int i =0;i<n;i++){
        for(int k =0;k<n-i-1;k++){
            cout << "   ";
        }
        for(int k : prev){
            cout << k << "      ";
        }
        vector<int> row;
        row.push_back(1);
        for(int j = 1;j<prev.size();j++){
            row.push_back(prev[j-1] + prev[j]);
        }
        row.push_back(1);
        prev = row;
        cout << endl;
    }
}

void q79(){
    string str;
    getline(cin , str);
    for(int i =0;i<str.size();i++){
        if(islower(str[i])){
            str[i] = toupper(str[i]);
        }
        else{
            str[i] = tolower(str[i]);
        }
    }
    cout << str << endl;
}
int main(){
    cout << "Level 7 here!" << endl;
    q79();
    return 0;
}