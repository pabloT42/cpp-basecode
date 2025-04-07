#include<iostream>
using namespace std;

//Write a function called "MiniCalc" that takes two integer parameters
//and returns nothing.When called, it takes the two numbers passedand 
//prints them out added, subtracted, multiplied, and divided.
//Get two number variables from a user in main, and then pass them to the function when called.

void MiniCalc(int x, int y);//declaration

int main() {
    int a, b;
    cout << "please type two numbers" << endl;
    cin >> a;
    cin >> b;
    MiniCalc(a, b);

}

// function definition
void MiniCalc(int x, int y) {

    cout << "added:" << x + y << endl;
    cout << "sub:" << x - y << endl;
    cout << "multiply:" << x * y << endl;
    cout << "divide:" << x / y << endl;


}
