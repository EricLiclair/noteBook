/*
Templates are used to create flexibility in code.
If, for example, you need to create a function to find some element in a data set of a particular data type say int,
and float as well, Templates will help you by letting you create a single function which can operate on different data types.
*/

#include <iostream>
#define null NULL

using namespace std;

// The below code is the syntax for the use of templates for defining a function

template <typename dataType> //The dataType variable is an alias for the dataType that will be used at the time of function call
dataType functionName(dataType argument1, dataType argument2)
{
    // function Body

    dataType someData;

    // function Operations
    someData = argument1 + argument2;
    return someData;
}

int main()
{
    int argument1 = 0, argument2 = 10;
    // driver code
    cout << functionName<int>(argument1, argument2);
    cout << functionName<float>(argument1, argument2);
}