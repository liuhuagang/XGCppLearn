#pragma once
#include <iostream>
//����һ���γ̰�����ģ���ļ�,������,��������Ӻ�������
//�����������淨

//SINGLETON
namespace L0997
{

	void TestSinglton1();

	void TestSinglton2();

	void TestSinglton3();

	//ע�� ����ط��ڴ���������ͷ�û����
	//�߳�Ҳû����
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


	//��������һ��ģ����

	template <typename T>
	class TemplateSinglton
	{


	public:

		//�̲߳���ȫ ���ʵ������
		//�����ȴ����������߳�,Ȼ�����߳�ʹ��
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

	//�����˹��캯��
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

	//�������˹��캯��
	//Ҫʹ����Ԫ������
	class SubClass1
	{
		//����������Ԫ��
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

Ȼ��4�д���������[doge]
���Դ��̰߳�ȫ(since c++11)

*/
//https://blog.csdn.net/weixin_39770712/article/details/110925745

/*

����ģʽָ������ϵͳ�����������֤һ����ֻ�ܲ���һ��ʵ����ȷ�������Ψһ�ԡ�

����ģʽ���Է�Ϊ����ʽ�Ͷ���ʽ������֮����������ڴ���ʵ����ʱ�䲻ͬ��
����ʽ��ָϵͳ�����У�ʵ���������ڣ�ֻ�е���Ҫʹ�ø�ʵ��ʱ���Ż�ȥ������ʹ��ʵ���������ַ�ʽҪ�����̰߳�ȫ��
����ʽ��ָϵͳһ���У��ͳ�ʼ������ʵ��������Ҫʱ��ֱ�ӵ��ü��ɡ���������̰߳�ȫ��û�ж��̵߳����⣩
1.��ͨ����ʽ���̲߳���ȫ��
��������������������������������
��Ȩ����������ΪCSDN������weixin_39770712����ԭ�����£���ѭCC 4.0 BY-SA��ȨЭ�飬ת���븽��ԭ�ĳ������Ӽ���������
ԭ�����ӣ�https://blog.csdn.net/weixin_39770712/article/details/110925745

2.���ڲ���̬�����Ľ�������ʽ���̰߳�ȫ��
��̬�ֲ������������ص㣺
��1���ñ�����ȫ�������������ڴ棻
��2����̬�ֲ������ڳ���ִ�е��ö����������ʱ���״γ�ʼ�������Ժ�ĺ������ò��ٽ��г�ʼ����
��3����̬�ֲ�����һ������������ʼ�������û����ʽ��ʼ�����ᱻ�����Զ���ʼ��Ϊ 0��
��4����ʼ��פ����ȫ����������ֱ���������н���������������Ϊ�ֲ������򣬵��������ĺ������������ʱ������������֮������
��������������������������������
��Ȩ����������ΪCSDN������weixin_39770712����ԭ�����£���ѭCC 4.0 BY-SA��ȨЭ�飬ת���븽��ԭ�ĳ������Ӽ���������
ԭ�����ӣ�https://blog.csdn.net/weixin_39770712/article/details/110925745

3.����ʽ����ģʽ��������̰߳�ȫ��
*/