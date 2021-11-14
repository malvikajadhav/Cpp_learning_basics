#include <iostream>
#include <string>

using namespace std;

int main(){
	string str;
	cout << "What is  your name buddy? \t";
	cin >> str; //only works for single word not for strings with spaces
	cout << "Nice to meet you " << str << endl;

	return(0);
}
