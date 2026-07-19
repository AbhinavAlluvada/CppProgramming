#include <bits/stdc++.h>
using namespace std;
/*
Level 8 — Arrays / Lists

80.
 Write a program to read n elements into an array and print them.

81.
 Write a program to find the sum and average of all elements in an array.

82.
 Write a program to find the largest and smallest element in an array.

83.
 Write a program to count the number of even and odd elements in an array.

84.
 Write a program to search for an element in an array (linear search).

85.
 Write a program to reverse the elements of an array.

86.
 Write a program to find the second largest element in an array.

87.
 Write a program to count the frequency of each element in an array.

88.
 Write a program to remove duplicate elements from an array.

89.
 Write a program to sort an array in ascending order (bubble sort).

90.
 Write a program to merge two arrays into one.

91.
 Write a program to find the sum of all even-indexed and odd-indexed elements separately.
*/

void q80_86(vector<int>& arr){
    int n;
    cout << "Enter no of elements: ";
    cin >> n;
    for(int i =0;i<n;i++){
        int val;
        cin >> val;
        arr.push_back(val);
    }
    int sum =0, avg = 0,even = 0,odd = 0;
    for(int x : arr){
        sum = sum + x;
        if(x&1){
            odd++;
        }
        else{
            even++;
        }
    }
    avg = sum/n;

    cout << "Sum of the array elements: "<<sum << endl;
    cout << "Average of the array elements: "<< avg << endl;
    cout << "Total no of even numbers: "<< even << endl;
    cout << "Total no of odd numbers: "<< odd << endl;
    int largest = INT_MIN , smallest = INT_MAX, second_largest = arr[0];
    for(int x : arr){
        if(x > largest){
            largest = x;
        }
        if(x < smallest){
            smallest = x;
        }
    }
    cout << "Largest element: "<< largest <<endl;
    cout << "Smallest element: "<<smallest <<endl;

    for(int x : arr){
        if(x>second_largest && x<largest){
            second_largest = x;
        }
    }
    cout << "Second Largest element: "<<second_largest<<endl;


    for(int x : arr){
        cout << x << " ";
    }
    cout << endl;
    int low = 0;
    int high = n-1;
    while(low<high){
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }

    for(int x : arr){
        cout << x << " ";
    }
    cout << endl;

    int target;
    cout << "Enter a target element to search: ";
    cin >> target;
    for(int i =0;i<n;i++){
        if(arr[i] == target){
            cout << "Target found at index: "<<i << endl; 
        }
    }
}

void q87(vector<int> arr){
    unordered_map<int,int> freq;
    for(int x : arr){
        freq[x]++;
    }
    for(auto it : freq){
        cout << it.first << ": "<<it.second<<endl;
    }
}

void q88(vector<int> arr){
    unordered_map<int,int> freq;
    vector<int> non_duplicate;
    for(int x : arr){
        freq[x]++;
    }
    for(auto it: freq){
        if(it.second == 1){
            non_duplicate.push_back(it.first);
        }
    }
    sort(non_duplicate.begin(),non_duplicate.end());
    for(int x : non_duplicate){
        cout << x << " ";
    }
}

void q89(vector<int> arr){
    int n = arr.size();
    for(int i =0;i<n-1;i++){
        for(int j =0;j<n-i-1;j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int x : arr){
        cout << x << " ";
    }
}
void q90(vector<int> arr){
    vector<int> arr2 = {1,2};
    for(int x : arr2){
        arr.push_back(x);
    }
    for(int x : arr){
        cout << x << " ";
    }
}

void q91(vector<int> arr){
    int n = arr.size();
    int even = 0, odd = 0;
    for(int i =0;i<n;i++){
        if(i&1){
            odd = odd + arr[i];
        }
        else{
            even = even + arr[i];
        }
    }
    cout << "Sum of odd-indexed elements: "<< odd << endl;
    cout << "Sum of even-indexed elements: "<< even << endl;
}
int main(){
    cout << "Level 8!"<<endl;
    vector<int> arr = {1,2,3,4,4,4,5,5,6};
    q91(arr);
    return 0;
}