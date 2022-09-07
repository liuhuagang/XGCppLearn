#pragma once
#include "string"
namespace L03
{
	void ArrayTestFun00();


	void CharTestFun00();

	void CharTestFun01();

	void CharTestFun03();

	void CharTestFun04();

	void CharTestFun04(int InNum);

	void StringTestFun00();

	void StringTestFun01();




	struct Interger {
		float MyFloat;

		int num;
		std::string AString;

	};
	struct BasketballTeam {



		char TeamName[10];
		float  Money;
		int TallNum[5];


	};


	void StructTestFun00();

	void StructTestFun01();

	BasketballTeam GetABasketballTeam();

	void DealtWithBasketballTeam(BasketballTeam InBasketballTeam);

	BasketballTeam DealtWithBasketballTeam_Ret(BasketballTeam InBasketballTeam);


	void StructTestFun02();

	void Math_Add(int InNumA, int InNumb);

	int Math_Add_Ret(int InNumA, int InNumb);


	void StructDeclare();

	void ArrayStruct();

	void BitTest();

}
