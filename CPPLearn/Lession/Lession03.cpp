#define _CRT_SECURE_NO_WARNINGS

#include "Lession03.h"
#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <array>
using namespace std;
int a988 = 100;
//tetst
namespace L03 {


	void ArrayTestFun00()
	{	
		a988 = 112;
	
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
/*
		struct MyStruct {
			int a;
			float b;
		} Struct1,Struct2;

		struct  MyStruct_P
		{
			int a;
			float b;
		};

		MyStruct_P S1, S2;*/

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

	void PointNewTestFun00()
	{
		int Number = 100;
		double NumberDou = 100.0;

		cout << "Size of Number: " << sizeof(Number) << endl;
		cout << "Size of NumberDou: " << sizeof(NumberDou) << endl;

		//int* NumberPoniter = &Number;
		int * NumberPoniter  = new int ;
		double * NumberDouPoniter = new double;
		cout << "Size of NumberPoniter: " << sizeof(NumberPoniter) << endl;
		cout << "Size of NumberDouPoniter: " << sizeof(NumberDouPoniter) << endl;


		cout << " NumberPoniter: " << NumberPoniter << endl;
		cout << " NumberDouPoniter: " << NumberDouPoniter << endl;

		*NumberPoniter = 99;
		*NumberDouPoniter = 99.1;

		cout << " *NumberPoniter: " << *NumberPoniter << endl;
		cout << " *NumberDouPoniter: " << *NumberDouPoniter << endl;

	}

	void PointNewAndDeleteTestFun00()
	{
		int* NumPointer = new int;
		*NumPointer = 10;
		*NumPointer += 10;
		//60-68
		cout << "&NumPointer:" << &NumPointer << endl;
		//80-84
		cout << "NumPointer:" << NumPointer<<endl;
		//20
		cout << "*NumPointer:" << *NumPointer << endl;

		//因为已经delete 这个块内存区域已经不存在了
		delete NumPointer;
		cout << "&NumPointer:" << &NumPointer << endl;
		cout << "NumPointer:" << NumPointer << endl;
		//cout << "*NumPointer:" << *NumPointer << endl;
		NumPointer = nullptr;
		cout << "&NumPointer:" << &NumPointer << endl;
		cout << "NumPointer:" << NumPointer << endl;

		//指针是存在栈上面的,在这个方法执行完成后销毁
	}

	void PointNewAndDeleteTestFun01()
	{
		int  Array[10] = {};
		int* Pointer = new int[10];

		cout << sizeof(Pointer)<<endl;
		cout << sizeof(Array) << endl;

		delete[] Pointer;
	}




	void PointNewAndDeleteTestFun02()
	{
		int* Pointer = new int[10];
		Pointer[0] = 1;
		Pointer[1] = 2;
		Pointer[2] = 4;
		Pointer[3] = 8;
		Pointer[4] = 16;
		cout << "Pointer[0]:" << Pointer[0] << endl;
		cout << "*Pointer:" << *Pointer << endl;
		*Pointer = -1;
		cout << "Pointer[0]:" << Pointer[0] << endl;
		cout << "*Pointer:" << *Pointer << endl;
		Pointer += 1;
		cout << "Pointer[0]:" << Pointer[0] << endl;
		cout << "*Pointer:" << *Pointer << endl;
		Pointer += 1;
		cout << "Pointer[0]:" << Pointer[0] << endl;
		cout << "*Pointer:" << *Pointer << endl;
		int* Point2 = &Pointer[0];

		Point2 -= 2;
		cout << "*Point2:" << *Point2 << endl;





	}

	void PointMath()
	{
		int Array[3] = { 11,22,33 };
		
		cout <<  "Array:" << Array << endl;
		cout << "&Array[0]:" << Array << endl;


		//数组的总字节数
		cout << "sizeof(Array):" << sizeof(Array)<<endl;
		//数组中元素类型的单位大小字节数
		cout << "sizeof(Array[0]):" << sizeof(Array[0])<< endl;
		//指针大小字节数
		cout << "sizeof(&Array[0]):" << sizeof(&Array[0]) << endl;

		int* pointer = &Array[0];

	}

	void PointMath01()
	{
/*
		int Array[3] = { 11,22,33 };
		cout << "Array:" << Array << endl;
		cout << "&Array:" << &Array << endl;
		int* AP1;
		int* Ap2;
		AP1 = Array+ 1;
		*/
	//	Ap2 = &Array+ 1;


	}

	void PointAndArrayFun00()
	{
		char flower[10] = "rose";
		cout << flower << "s are red \n";

		char * flower_first = flower;

		cout << flower_first << endl;

		int* MyAddress = (int*)flower_first;

		cout << "MyAddress:" << MyAddress << endl;
	}

	void PointAndArrayFun01()
	{
		char CharArrary[20] = "myArray";

		strcpy(CharArrary, "NewArray");

		cout << CharArrary;

		int aabb=100;

	}

	void PointAndStructFun00()
	{
	
		struct MyStruct
		{
			int Numa;
			float Numb;

		};
		MyStruct Struct1 = { 10,10.1f };
		cout << Struct1.Numa << endl;
		cout << Struct1.Numb << endl;



		MyStruct* StructPointer = new MyStruct;
		StructPointer->Numa = 101;
		StructPointer->Numb = 101.1f;

		cout << StructPointer->Numa << endl;
		cout << StructPointer->Numb << endl;

		cout << (*StructPointer).Numa << endl;
		cout << (*StructPointer).Numb << endl;
		(*StructPointer).Numa = 1002;
		cout << (*StructPointer).Numa << endl;

		delete StructPointer;
		StructPointer = nullptr;

		{
			int aabb = 11;
		}
		int  aabb = 102;;



	}

	void PointAndStructFun01()
	{

		MyStruct9918* StructPointer;

		StructPointer = PointAndStructFun02();
		StructPointer->c = 988;




		(* StructPointer).c = 988;
		cout << StructPointer->c << endl;
		StructPointer = new MyStruct9918;
		StructPointer->c = 1007;


		MyStruct9918 S2 = *StructPointer;

		cout << S2.c << endl;

		cout << MyDouble << endl;

	}

	MyStruct9918* PointAndStructFun02()
	{
		MyStruct9918 Struct998;

		return &Struct998;
	}

	void PointStrcutArrayFun00()
	{
		struct NumT
		{
			int Numer;

		};

		NumT N1, N2, N3;
		N1.Numer = 1;
		N2.Numer = 2;
		N3.Numer = 1;
		const NumT* NumTPointer[3] = { &N1,&N2,&N3 };

		//定义了一个指向指针的指针
		const NumT* * NPP = NumTPointer;
		auto AutoNumT = &N1;
		auto AutoNumTTP = NumTPointer;

		cout << (*(NPP+1))->Numer << endl;
		cout << AutoNumT->Numer<< endl;
		cout << (*AutoNumTTP)->Numer<< endl;
		cout << (*AutoNumTTP) << endl;
		NumT* MyPointer = const_cast<NumT*>( * AutoNumTTP);
		MyPointer->Numer = 998;

		cout << MyPointer->Numer << endl;


	}

	void ArrayAndVectorFun00()
	{

		int a1[4] = { 0,1,2,3 };

		vector<int> a2(4);
		a2[0] = 0;
		a2[1] = 2;
		a2[2] = 4;
		a2[3] = 8;
		array<int, 4> a3 = {4,5,6,7};

		cout << a2.at(99);
		
		


	}

	MyStruct9918::MyStruct9918()
	{
		
			cout << "我被构造了";
		
	}

	MyStruct9918::~MyStruct9918()
	{
		
			cout << "我被析构了";
		
	}


	
}