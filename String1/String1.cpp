#include<iostream>
using namespace std;

int main()
{
	char s[] = "welcome";
	char r[8];
	int i,j;
	cout << "Before reversing" << endl;
	cout << endl;
	for (i = 0; s[i] != '\0'; i++) {
		cout << s[i];
		
	}
	cout << endl;
	i = i - 1;

	for (j = 0; i >= 0; i--, j++) {
		r[j] = s[i];
	}
	r[j] = '\0';
	cout << "After reversing" << endl;
	cout << endl;
	for (int j = 0; r[j] != '\0'; j++) {
		cout << r[j];
	}
}