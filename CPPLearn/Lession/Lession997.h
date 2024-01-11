#pragma once
#include <iostream>
//这是一个课程案例的模板文件,无内容,方便我添加后续内容
//看看单例的玩法

//SINGLETON
namespace L0997
{

	void TestSinglton1();

	void TestSinglton2();

	void TestSinglton3();

	//注意 这个地方内存的析构和释放没有做
	//线程也没有做
	class Singleton
	{

	public:
		static Singleton* Instance()
		{
			if (SingletonInstance == NULL)
			{
				SingletonInstance = new Singleton();
			}
			return SingletonInstance;
		}

		void show()
		{
			std::cout << InstanceName << std::endl;
		}
	private:
		Singleton()
			:InstanceName("ganglion")
		{

		}
		Singleton(const Singleton&);
		~Singleton() {};
		Singleton& operator = (const Singleton&) {};

	private:
		std::string InstanceName;
		static Singleton* SingletonInstance;

	};


	//现在来做一个模板类

	template <typename T>
	class TemplateSinglton
	{


	public:

		//线程不安全 多个实例访问
		//可以先创建好在主线程,然后子线程使用
		static T* Instance()
		{
			if (TemplateSinglton_Instance == NULL)
			{
				TemplateSinglton_Instance = new T();
			}
			return TemplateSinglton_Instance;
		}
	private:
		TemplateSinglton() {}

		TemplateSinglton(const TemplateSinglton<T>&);
		~TemplateSinglton() {}

		TemplateSinglton<T>& operator = (const TemplateSinglton<T>);

	private:
		static T* TemplateSinglton_Instance;




	};

	template <typename T>
	T* TemplateSinglton<T>::TemplateSinglton_Instance = NULL;

	//公开了构造函数
	class SubClass
	{
	public:

		void show()
		{
			std::cout << InstanceName << std::endl;
		}

	public:

		SubClass()
			:InstanceName("SubClass")
		{

		}
		SubClass(const SubClass&);
		~SubClass() {};
		SubClass& operator = (const SubClass&) {};


	private:
		std::string InstanceName;
	};

	//不公开了构造函数
	//要使用友元函数噢
	class SubClass1
	{
		//它是它的友元类
		friend class TemplateSinglton<SubClass1>;

	public:

		void show()
		{
			std::cout << InstanceName << std::endl;
		}

		private:

		SubClass1()
			:InstanceName("SubClass111")
		{

		}
		SubClass1(const SubClass&);
		~SubClass1() {};
		SubClass1& operator = (const SubClass&) {};


	private:
		std::string InstanceName;
	};

}
/*


template <class T>
T& singleton() {
   static T instance;
   return instance;
}

然而4行代码解决的事[doge]
还自带线程安全(since c++11)

*/
//https://blog.csdn.net/weixin_39770712/article/details/110925745

/*

单例模式指在整个系统生命周期里，保证一个类只能产生一个实例，确保该类的唯一性。

单例模式可以分为懒汉式和饿汉式，两者之间的区别在于创建实例的时间不同：
懒汉式：指系统运行中，实例并不存在，只有当需要使用该实例时，才会去创建并使用实例。（这种方式要考虑线程安全）
饿汉式：指系统一运行，就初始化创建实例，当需要时，直接调用即可。（本身就线程安全，没有多线程的问题）
1.普通懒汉式（线程不安全）
————————————————
版权声明：本文为CSDN博主「weixin_39770712」的原创文章，遵循CC 4.0 BY-SA版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/weixin_39770712/article/details/110925745

2.用内部静态变量改进的懒汉式（线程安全）
静态局部变量有以下特点：
（1）该变量在全局数据区分配内存；
（2）静态局部变量在程序执行到该对象的声明处时被首次初始化，即以后的函数调用不再进行初始化；
（3）静态局部变量一般在声明处初始化，如果没有显式初始化，会被程序自动初始化为 0；
（4）它始终驻留在全局数据区，直到程序运行结束。但其作用域为局部作用域，当定义它的函数或语句块结束时，其作用域随之结束。
————————————————
版权声明：本文为CSDN博主「weixin_39770712」的原创文章，遵循CC 4.0 BY-SA版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/weixin_39770712/article/details/110925745

3.饿汉式单例模式（本身就线程安全）
*/