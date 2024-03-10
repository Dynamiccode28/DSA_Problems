#include <iostream>
using namespace std;
int main()
{
    char c;
    cout << "Enter a char : ";
    cin >> c;

    if (c >= 65 && c <= 90)

        cout << char(32 + c);
    
    else
        cout << char(c-32);

    return 0;
}