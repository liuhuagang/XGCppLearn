#include "Lession02.h"
#include <iostream>
#include "climits"
using namespace std;

#define INDEX_NONE -1;
namespace L02
{
	void DataTestFun00()
	{
		cout << "Test Data Function 00" << endl;

		int n_int = INT_MAX;

		short n_short = SHRT_MAX;

		long n_long = LONG_MAX;

		long long n_llong = LLONG_MAX;
		cout << "int is " << sizeof(int) << "bytes." << endl;
		cout << "short is " << sizeof(short) << "bytes." << endl;
		cout << "long is " << sizeof(long) << "bytes." << endl;
		cout << "long  long is " << sizeof(long long) << "bytes." << endl;

		cout << "Maximum values :" << endl;
		cout << "int is " << n_int <<  endl;
		cout << "short is " << n_short << endl;
		cout << "n_long is " << n_long << endl;
		cout << "n_llong is " << n_llong << endl;


		cout << "Minimum int value " << INT_MIN << endl;
		cout << "Bits per byte " << CHAR_BIT << endl;

	}

	void ChatTestFun00()
	{
		char ch;

		cout << "Enter a character" << endl;
		cin >> ch;

		cout << "Hello: your Character is :";
		cout << ch;


	}

	void ChatTestFun01()
	{
		char ch = 'M';
		int i;
		ch = ch + 1;
		i = ch;

		cout << i << endl;

		cout << '\n';
		cout.put(i);





	}

	void CharTestFun02()
	{
		wchar_t kk = L'¸Õ';
		wcout << kk << endl;
		cout << "ºº×Ö";
	}

	void BoolTestFun00()
	{
		bool bFinish = 0;
		bool bPlan = false;

		cout << bFinish;
	}

	void ConstTestFun00()
	{


		class Myclass {
		public:
			int a = 1;
			int b = 10;
		};



		const int Months = 12;
		
		int num = INDEX_NONE;

		cout << "one year have months : " << Months << endl;

		cout << num << endl;

		 Myclass* test = new Myclass();
		test->a = 1;


	}


	void MathTestFun00()
	{

		int Numa, Numb;

		cout << "Enter a number:";
		cin >> Numa;

		cout << "Enter another number:";
		cin >> Numb;

		cout << "Numa=" << Numa << " And " << "Numb=" << Numb<<endl;
		cout << "a + b=" << Numa + Numb << endl;
		cout << "a - b=" << Numa - Numb << endl;
		cout << "a * b=" << Numa * Numb << endl;
		cout << "a / b=" << Numa / Numb << endl;
		cout << "a % b=" << Numa % Numb << endl;

	}
	void MathTestFun01()
	{
		float a = 10.1;
		int b = 2;
		cout << a / b;
		float c = 1.f;
		MathAdd(b, b);

	}
	//+ 
	// //¼Ì³Ð  ¶àÌ¬ ·â×°
	// float a int b
	//int a ,float b
	void MathAdd(int a, int b)
	{
		cout << "int _add";
	}

	void MathAdd(float a, float b)
	{
		cout << "int _float";
	}

}

