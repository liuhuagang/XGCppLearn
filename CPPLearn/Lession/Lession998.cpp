#include <iostream>

#include <thread>
#include "Lession998.h"
#include <vector>
#include <mutex>

using namespace std;
//声明一个全局的锁
mutex mtx;

void WorkTest()
{
	std::cout << "子线程执行" << std::endl;
}
void WorkTestMulti(int id)
{
	mtx.lock();
	std::cout << " 多线程子线程执行" << std::endl;
	//打印线程的id 确认
	cout << "目前线程的id" << id << "线程名称" << this_thread::get_id() << endl;
	mtx.unlock();

	//可以使用printf 这个是线程安全的
	printf("this is form thread %d \n", id);

	//注意自增不是原子的操作

}

void Worker(int i)
{
	std::cout << "线程测试开始" << std::endl;

	// 创建的时候自动执行了咯
	std::thread ThreadTest(WorkTest);
	// 不加入这一句会报错
	ThreadTest.join();

	//这是并发线程，不确定先后顺序

	//注意分离
	//ThreadTest.detach()

	//只能搞一个 多搞会崩溃

	if (ThreadTest.joinable())
	{
		ThreadTest.join();
	}


	//主线程结束之前要处理并发的线程
	//不处理会崩溃


}

void WorkerMultiTest()
{
	std::cout << "多线程测试开始" << std::endl;
	//首先搞个容器，创建十个线程进去 ，让他们在后台自由进行
	vector<thread> Threads;

	for (int i = 0;i<10;i++)
	{
		Threads.push_back(thread(WorkTestMulti, i));

	}
	//让主线程依次等待他们进行完毕
	for (int i = 0; i < 10; i++)
	{
		Threads[i].join();
	}
	

}

void HardWare_Get()
{
	int thread_num = thread::hardware_concurrency();
	cout << "threads:" << thread_num << endl;

}
