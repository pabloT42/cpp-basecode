#include<iostream>
using namespace std;

//Create a program that asks a user for a number between 10 and 100,
//and then prints out all the even numbers from 10 up to that number. 
//So for example, if the user types "20", the program would print "10, 12, 14, 16, 18, 20".

int main() {
    int num;
    cout << "choose a number between 10 and 100" << endl;
    cin >> num;

   for (int i = 10; i <= num; i += 2)
            cout << i << " ";


}
