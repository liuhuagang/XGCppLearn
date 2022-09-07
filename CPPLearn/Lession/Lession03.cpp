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

}