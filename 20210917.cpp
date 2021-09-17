#include <iostream>
using namespace std;

int main()
{
	int First = 0;
	int Second = 0;
	
	cout << "첫번째 숫자를 넣어주세요.";
	cin >> First;
	cout << "두번째 숫자를 넣어주세요.";
	cin >> Second;

	cout << First << " + " << Second << " = ";
	cout << First + Second;

	return 0;

}