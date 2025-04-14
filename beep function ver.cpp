#include<iostream>
#include<windows.h>
using namespace std;

//function declaration
void TooManyBeeps(int pitch, int freq, int num);

int main() {
	// variables for three numbers
	int freq;
	int dur;
	int n;
	// keyboard input
	cout << "please enter three numbers(frequency, duration and number):" << endl;
	cin >> freq;
	cin >> dur;
	cin >> n;

	TooManyBeeps(freq, dur, n);

}


void TooManyBeeps(int pitch, int freq, int num) {

	for (int i = 0; i < num; i++)
		Beep(pitch, freq );

}
