#include<iostream>
#include<windows.h>
using namespace std;

void TextColor(int val);

int main() {
	int num;;
	cout << "please type a number between 1-15" << endl;
	cin >> num;
	TextColor(num);
	cout << "HELLO" << endl;
}

void TextColor(int val){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), val);
}
