#pragma once

//这是一个 多线程的知识简单记录



//简单测试了下join joinable 与detach
void Worker(int i);

//多线程的测试， 注意共享资源的访问锁问题

void WorkerMultiTest();

//C++多线程（2） 数据竞争&互斥锁

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