#define _CRT_SECURE_NO_WARNINGS

#include "Lession03.h"
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

//tetst
namespace L03 {


	void ArrayTestFun00()
	{	

		int Cards[3]={10,30,50};

/*
		Cards[0] = 10;
		Cards[1] = 20;
		Cards[2] = 30;*/
		cout << "TotalMoney:" << Cards[0] + Cards[1] + Cards[2]<<endl;
		cout << "Size of Cards :" << sizeof(Cards)  << endl;
		cout << "Num of Cards :" << sizeof(Cards) / sizeof(int) << endl;
		cout << "Size of Cards:" << sizeof(Cards) << endl;
		cout << "Size of Cards[0]:" << sizeof(Cards[0]) << endl;
		cout << "Size of Cards[1]:" << sizeof(Cards[1]) << endl;
		cout << "Size of Cards[2]:" << sizeof(Cards[2]) << endl;
	}

	void CharTestFun00()
	{
		char Char100[100]  = "xiaogang";

		cout << Char100[20] << "END"<<endl;
		int num = Char100[20];
		cout << num << endl;
		
	}

	void CharTestFun01()
	{
		const int Size = 15;

		char name1[Size];
		char name2[Size] = "C++owboy";

		cout << " MyName is : " << name2;
		cout << "Please input your name \n";

		cin >> name1;

		cout << "OK,your name is:" << name1<<endl;
		cout << "size of your array" << sizeof(name1) << endl;
		cout << "num of your array" << strlen(name1) << endl;

		char CharArray[] = {'a','b','c'};
		cout << "size of your CharArray" << sizeof(CharArray) << endl;
		int IntArray[100]={0};
		cout << "size of your IntArray" << sizeof(IntArray) << endl;
		// 注意sizeof可能被重载了,导致输入的字串数组和整型数组的计算返回结果不同,一个是个数,一个是字节数


		cout << endl;



	}

	void CharTestFun03()
	{

		char name[20];

		char dessert[20];

		cout << "Enter your name;" << endl;
		cin >> name;
		cout << "Enter your dessert name:" << endl;

		cin >> dessert;

		cout << "I hava some delicious" << dessert;
		
		cout << "for you" << name << endl;





	}

	void CharTestFun04()
	{
		char name[20];

		char dessert[20];

		cout << "Enter your name;" << endl;
		cin.getline(name, 20);
		cout << "Enter your dessert name:" << endl;

		cin >> dessert;

		cout << "I hava some delicious:" << dessert <<endl;

		cout << "for you:" << name << endl;

	}

	void CharTestFun04(int InNum)
	{

	}

	void StringTestFun00()
	{
		string s1 = "xiaogang";
		string s2,s3;

		cout << "copy" << endl;
		s2 = s1;
		cout << s2 << endl;

		cout << "Gernated" << endl;
		s3 = s1 + s2;
		cout << s3 << endl;

		s1 = s1 + "aabb";
		s2 += "bbcc";
		cout << s1 << endl;
		cout << s2 << endl;
		cout << "size of s1:" << s1.size();

	}

	void StringTestFun01()
	{
		char Chars[20] = "xiaogang";
		char Chars1[20];
		strcpy(Chars1, Chars);
		strcat(Chars1, " 989");

		cout << Chars1 <<endl;
		cout << strlen(Chars1);

	}



	void StructTestFun00()
	{
	
		int aabb =1;

		BasketballTeam ChinaTeam;
		BasketballTeam AmericaTeam;
		strcpy(ChinaTeam.TeamName, "yaoming");
		strcpy(AmericaTeam.TeamName, "kebi");

		cout << ChinaTeam.TeamName<<endl;
		cout << AmericaTeam.TeamName<<endl;

		Interger TestInt;

		TestInt.num = 998;

		cout << TestInt.num << endl;



	}
	void StructTestFun01()
	{
	
		BasketballTeam ChinaTeam= {
			"yaoming",
			998,
			{11,12,13,14,15}

		};

		BasketballTeam AmericaTeam= {
		"kebi",
		9988,
		{11,12,13,14,15}

		};


		cout << ChinaTeam.TeamName << endl;
		cout << ChinaTeam.Money << endl;
		cout << ChinaTeam.TallNum[0] << endl;
	}

	BasketballTeam GetABasketballTeam()
	{
		BasketballTeam NewBasketballTeam={
			"yaoming",
			998,
			{11,12,13,14,15}

		};



		return NewBasketballTeam;
	}

	void DealtWithBasketballTeam(BasketballTeam InBasketballTeam)
	{
		InBasketballTeam.Money += 100;

		cout << InBasketballTeam.Money;
	}


	BasketballTeam DealtWithBasketballTeam_Ret(BasketballTeam InBasketballTeam)
	{
		InBasketballTeam.Money += 100;

		cout << InBasketballTeam.Money;

		return InBasketballTeam;

	}

	void StructTestFun02()
	{
		BasketballTeam MyTeam = GetABasketballTeam();

		MyTeam =	DealtWithBasketballTeam_Ret(MyTeam);

		cout << "NewTeam:" << MyTeam.Money<<endl;

		int a = 1, b = 2;
		a= Math_Add_Ret(a, b);
		cout <<"a=" << a;

	}

	void Math_Add(int InNumA, int InNumb)
	{
		InNumA = InNumA + InNumb;

		cout<< InNumA<<endl;


	}

	int Math_Add_Ret(int InNumA, int InNumb)
	{
		InNumA = InNumA + InNumb;

		cout <<"InNum：" << InNumA << endl;
		return InNumA;
	}



	void StructDeclare()
	{
		struct MyStruct {
			int a;
			float b;
		} Struct1,Struct2;

		struct  MyStruct_P
		{
			int a;
			float b;
		};

		MyStruct_P S1, S2;

	}

	void ArrayStruct()
	{
		BasketballTeam MyTeams[10] = {

			{"yaoming",	998,{11,12,13,14,15}},
			{"kebi",	998,{11,12,13,14,15}}
	


		};


		cout << MyTeams[0].TallNum[0] << endl;
		cout << MyTeams[1].TeamName << endl;


	}

	void BitTest()
	{
		struct MyStruct {

			bool GoodBool ;
		} MySS;
		MySS.GoodBool = 0;

		cout << sizeof(bool);
	}

	void EnumTestFun00()
	{
		Color MyColor;
		MyColor = white;

		int ColorNum = red;
		ColorNum = red + 1;
		MyColor = Color(222222);
		cout << MyColor;

		if (MyColor == Color::black)
		{
			cout << 1111;

		}

		if (MyColor == Color::white)
		{
			cout << 2222;
		}


	}

	void PointTestFun01()
	{
		int Num = 11;
		int Num_2 = 998;

		int* NumPointer;
		int* NumPointer2;
		NumPointer = &Num;
		NumPointer2 = &Num_2;
		cout << "Num:" << Num << endl;
		cout << "&Num:" << &Num << endl;

		cout << "Num_2:" << Num_2 << endl;
		cout << "&Num_2:" << &Num_2 << endl;

		cout << "NumPointer:" << NumPointer << endl;
		cout << "&NumPointer:" << &NumPointer << endl;


		cout << "NumPointer:" << NumPointer2 << endl;
		cout << "&NumPointer2:" << &NumPointer2 << endl;


		cout << "*NumPointer:" << *NumPointer << endl;
		*NumPointer = *NumPointer + 11;
		cout << "*NumPointer:" << *NumPointer << endl;
		cout << "Num:" << Num << endl;
	}

	void PointTestFun02()
	{
		//X32 X64位系统是不同   指针32位系统是四个字节，64位系统是八个字节
		// 定义了一个int类型的指针  它占用8个字节
		int* NumPointer;		
	
		// 定义了一个int类型的变量	它占用4个字节
		int Num ;


		cout << sizeof(Num)<<endl;
		cout << sizeof(NumPointer)<<endl;


		cout << "&NumPointer:" << &NumPointer << endl;
		cout << "&Num:" << &Num << endl;


		Num = 10;
		NumPointer = &Num;
	//	*NumPointer = Num; 直接用是错误的
		cout << "NumPointer:" << NumPointer << endl;
		cout << "Num:" << Num << endl;

		//拿出指针存的地址 取内存里面找出对应的额值；
		cout << "拿出指针存的地址 取内存里面找出对应的额值；:"  << endl;
		cout << "*NumPointer:" << *NumPointer << endl;

		*NumPointer = *NumPointer + 10;
		cout << "*NumPointer:" << *NumPointer << endl;
		cout << "------------------" << endl;
		int Num2 = 100;
		NumPointer = &Num2;
		*NumPointer = 1000;
		cout << "Num:" << Num << endl;
		cout << "*NumPointer:" << *NumPointer << endl;
		cout << "Num2:" << Num2 << endl;

		int* NumPointer2 = &Num2;
		/*
		int* NumPointer2;
		NumPointer2 =&Num2;
		*/
		if (NumPointer = NumPointer2)
		{
			cout << "same"<<endl;
		}

		*NumPointer += 100;
		*NumPointer2 += 20;

		cout << "Num2:" << Num2 << endl;


	}

	void PointTestFun03()
	{
		/*
		00000038736FF9C8
		00000038736FF9C8
		00000038736FF9CC
		//这个代表的是字节 不是位
		*/
		int ArrayInt[5];
		cout << ArrayInt<<endl;
		cout << &ArrayInt[0]<< endl;
		cout << &ArrayInt[1]<< endl;
		cout << &ArrayInt[2] << endl;
		cout << &ArrayInt[3] << endl;
		cout << &ArrayInt[4] << endl;
	}

}