#pragma once

//����һ�� ���̵߳�֪ʶ�򵥼�¼



//�򵥲�������join joinable ��detach
void Worker(int i);

//���̵߳Ĳ��ԣ� ע�⹲����Դ�ķ���������

void WorkerMultiTest();

//C++���̣߳�2�� ���ݾ���&������

void HardWare_Get();

template<typename T>
class Singleton
{
public: static T& getInstance()
{
	if (!value_) {
		value_ = new T();
	}
	return *value_;
}
private:
	class CGarbo {
	public:
		~CGarbo()
		{
			if (Singleton::value_)
				delete Singleton::value_;
		}
	};

	static CGarbo Garbo;
	Singleton();     ~Singleton();
	static T* value_;
};
template<typename T> T* Singleton<T>::value_ = NULL;