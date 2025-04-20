#include<iostream>
using namespace std;

int main()
{
	const int length = 20;
	char n[length] = { '0' };
	int inputcount = 0;
	bool flag = true;

	cout << "Enter the word or number :";
	cin.getline(n, 20);

	for (int i = 0; i < length; i++)
	{

		if (n[i] == '\0')
		{
			break;
		}
		inputcount++;

	}
	int num = inputcount;


	for (int i = 0; i < num; i++)
	{
		if (n[i] == n[inputcount - 1])
		{
			flag = true;
		}
		else
		{
			flag = false;
		}
		inputcount--;
	}


	if (flag == true)
	{
		cout << "It is a Palindrome ." << endl;
	}
	else
	{
		cout << "It is not a Palindrome." << endl;
	}
	return 0;
}