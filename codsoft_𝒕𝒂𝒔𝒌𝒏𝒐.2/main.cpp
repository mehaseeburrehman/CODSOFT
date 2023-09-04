#include<iostream>
#include<string>
#include"calc.h"
using namespace std;
int main(){
	Calculator C1;
	char a;
	string s;
	int n1, n2;
	double num1, num2;
	char option,rep='y';
	cout << "ARITHMETIC OPERATION " << endl;
	while (rep == 'y' || rep == 'Y')
	{
	
			cout << "ENTER THE OPTION BETWEEN +,-,*,/,% OR exit for press n" << endl;
			cin >> a;
			if (a == '+')
			{
				cout << "ENTER THE TWO NUMBERS " << endl;
				cin >> num1 >> num2;
				cout << C1.add(num1, num2)<<endl;
			}
			else if (a == '-')
			{
				cout << "ENTER THE TWO NUMBERS " << endl;
				cin >> num1 >> num2;
				cout << C1.sub(num1, num2) << endl;
			}
			else if (a == '*')
			{
				cout << "ENTER THE TWO NUMBERS " << endl;
				cin >> num1 >> num2;
				cout << C1.mul(num1, num2)<<endl;

			}
			else if (a == '/')
			{
				cout << "ENTER THE TWO NUMBERS " << endl;
				cin >> num1 >> num2;
				cout << C1.div(num1, num2)<<endl;
			}
			else if (a == '%')
			{
				cout << "ENTER THE TWO NUMBERS " << endl;
				cin >> n1 >> n2;
				cout << C1.add(n1, n2)<<endl;
			}
			else if (a == 'n'){
				rep = 'n';
				cout << "EXITING" << endl;
			}
			else {
				cout << "WRONG INPUT PLEASE ENTER CORRECT ARITHMETIC OPERATOR " << endl;
			}
		}
}