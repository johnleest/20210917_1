#include <iostream>
using namespace std;

int main()
{
	/*int First = 0;
	int Second = 0;
	
	cout << "첫번째 숫자를 넣어주세요.";
	cin >> First;
	cout << "두번째 숫자를 넣어주세요.";
	cin >> Second;

	cout << First << " + " << Second << " = ";
	cout << First + Second;

	return 0;*/

	//int First = 0;
	//int Second = 0;
	//int Sum = 0;

	//cin >> First;
	//cin >> Second;
	//

	////이항
	////+,-,*,/,%
	////단항
	////++,--
	//
	//Sum = First + Second;

	//cout << Sum;
	//
	//return 0;

	/*int A = 0;
	int B = 0;
	int C = 0;
	int Sum = 0;

	cout << "첫번째 과목 점수를 입력하세요.";
	cin >> A;
	cout << "두번째 과목 점수를 입력하세요.";
	cin >> B;
	cout << "세번째 과목 점수를 입력하세요.";
	cin >> C;

	cout << "세 과목의 합은 = ";

	Sum = A + B + C;
	cout << Sum;*/
	
	
	//type
	//int -> float
	//float -> int
	//float -> double 
	//casting(형변환)
	//(형)원래형태
	//static_cast<새로운형>(원래형태)
	//int -> char
	//char -> int 
	

	/*int A = 0;
	int B = 0;
	int C = 0;
	float D = 0.3f;

	cout << "첫번째 과목 점수를 입력하세요.";
	cin >> A;
	cout << "두번째 과목 점수를 입력하세요.";
	cin >> B;
	cout << "세번째 과목 점수를 입력하세요.";
	cin >> C;

	cout << "세 과목의 평균은? ";
	D = static_cast<float>((A + B + C)) / 3.0f;

	cout << D;

	return 0;*/

	/*int A = 65;
	char C = A;
	
	cout << C << endl;
	
	return 0;*/


	//배열 만들기 
	//A 0 1 2 3 4 5 6 7 8 9
	// [][][][][][][][][][]

	//a[0] = 1;
	//a[1] = 2;
	//a[2] = 3;
	//a[3] = 4;
	//a[4] = 5;
	//a[5] = 6;
	//a[6] = 7;
	//a[7] = 8;
	//a[8] = 9;
	//a[9] = 10;



	/*int a[10];

	int i = 0;
	for (i = 0; i < 10; i = i+1)
	{
		a[i] = i+1;
	
		cout << a[i] << endl;
	
		return 0;

	}*/


	//1~100까지의 합. 반복문
	//for
	//배열 반복
	//반복 횟수(시험문제)
	
	/*int total = 0;

	for (int i = 1; i <= 100; i++ )
	{
		total = total + i;
	}

	cout << total << endl;

	return 0;*/

	/*for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;

	}*/

	/*int Max = 0;

	cin >> Max;

	for (int i = 1; i <= Max; i++)
	{
		for (int j = 1; j <= Max-i; j++)
		{
			cout << "*";
		}
		cout << endl;

	}*/

	int Max = 0;

	cin >> Max;

	for (int i = 1; i <= Max; i++)
	{
		for (int j = 0; j <= Max - i; j++)
		{
			cout << "*";
		}
		cout << endl;

	}

}