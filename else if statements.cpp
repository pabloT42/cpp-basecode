#include<iostream>
using namespace std;

//Create a program where the user enters their grade in school as a number(1 through 12).The program should respond with a message :
//"Enjoy elementary school!" for grades 1 - 5.
//"Have fun in middle school!" for grades 6 - 8.
//"Prepare well in high school!" for grades 9 - 12.
int main() {

	int grade;
	cout << "what grade are you in?" << endl;
	cin >> grade;
	if (grade >= 1 && grade <= 5)
		cout << "enjoy elementary school";
	else if (grade >= 6 && grade <= 8)
		cout << "have fun in middle school";
	else if (grade >= 9 && grade <= 12)
		cout << "prepare well in high school";
	else
		cout << "get a job";


}
