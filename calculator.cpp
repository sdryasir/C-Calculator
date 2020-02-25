#include<iostream>
#include<string>
using namespace std;
int add()
{
	int a, b;
	cout<<"Enter two numbers";
	cin>>a>>b;
	cout<<"The sum is :"<<a+b;
}
int sub()
{
	int a, b;
	cout<<"Enter two numbers";
	cin>>a>>b;
	cout<<"The difference is :"<<a-b;
}
int mul()
{
	int a, b;
	cout<<"Enter two numbers";
	cin>>a>>b;
	cout<<"The product is :"<<a*b;
}
int div()
{
	int a, b;
	cout<<"Enter two numbers";
	cin>>a>>b;
	cout<<"The division is :"<<a/b;
}

int main()
{
	string name;
	char op = 'y';
	int choice;
	while(op != 'n')
	{
		cout<<"1 - Addition\n2 - Subtraction\n3 - Multiplication\n4 - Division\n\n";
		cout<<"Enter Choice";
		cin>>choice;
		switch(choice)
		{
			case 1:
				add();
				break;
			case 2:
				sub();
				break;
			case 3:
				mul();
				break;
			case 4:
				div();
				break;
			default:
				cout<<"Invalid Option\n";
		}
		
		cout<<"\n\nDo you want to play again?(y/n)";
		cin>>op;
	}
	cout<<"Good Bye";
}
