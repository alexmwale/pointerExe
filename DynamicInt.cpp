#include <iostream>
#include <string>
using namespace std;

int main()
{
    int *DynamicaIntValue;
    DynamicaIntValue = new int; // dynamically allocate  an int to dynamicIntValue

    cout << " Assign a value  to the dynamically allocated integer: " << endl;

    cin >> *DynamicaIntValue;

    string *DynamicaIntString;
    DynamicaIntString = new string; // dynacally  allocate string to dynamicStringValue

    cout << " Assign a value  to the dynamically allocated integer:" << endl;
    cin >> *DynamicaIntString;

    cout << " The value of dynamically allocated integer is : " << *DynamicaIntValue << endl;

    cout << " The value of dynamically allocated string is : " << *DynamicaIntString << endl;

    return 0;
}