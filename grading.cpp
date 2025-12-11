#include <iostream>
using namespace std;
char grad(int marks)
{
    switch (marks / 10)
    {
    case 10:
        return 'A';
    case 9:
        return 'B';
    case 8:
        return 'C';
    case 7:
        return 'D';
    case 6:
        return 'E';
    case 5:
        return 'F';
    case 4:
        return 'G';

    default:
        return 'H';
    }
}
int main()
{
    int marks;
    cin >> marks;
    char result = grad(marks);
    cout << result << endl;
    return 0;
}