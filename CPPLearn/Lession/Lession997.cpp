
#include "Lession997.h"





namespace L0997
{
	Singleton* Singleton::SingletonInstance = NULL;
	void	TestSinglton1()
	{
		std::cout << "²âÊÔ»ù´¡µÄµ¥Àý" << std::endl;

		Singleton::Instance()->show();
	}





	void TestSinglton2()
	{

		TemplateSinglton<SubClass>::Instance()->show();
		TemplateSinglton<SubClass1>::Instance()->show();
	}

	void TestSinglton3()
	{


	}

}