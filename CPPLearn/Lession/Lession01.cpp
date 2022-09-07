
#include "Lession01.h"
#include <iostream>
using namespace std;
void L01::NoReturnByNoparameter()
{
	cout << "NoReturnByNoparameter!\n";
	cout << "Hello XiaoGang " << endl;

	//声明了一个变量
	int Var;
	//对变量进行了赋值
	Var = 22;
	cout << Var << endl;

	int InputVar;
	cout << "Please Input Var" << endl;
	cin >> InputVar;
	cout << "Now, Your  Input Var is :" << InputVar << endl;


}

void L01::NoReturnByOneParameter(int InNum)
{
	cout << "NoReturnByOneParameter!\n";

	cout << "Now, Your InNum is :" << InNum << endl;


}

int L01::ReturnIntByOneParmeter(int InNum)
{
	return 998;
}

int L01::MathAddTwoNum(int InNumA, int InNumB)
{
	int sum = 0;
	sum = InNumA + InNumB;

	return sum;
}

