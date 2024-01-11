#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <string.h>


//这是一个课程案例的模板文件,无内容,方便我添加后续内
//1面试题:赋值运算符函数

using namespace std;
class CMyString
{
public:
	CMyString(char* pData = nullptr);
	CMyString(const CMyString& str);
	~CMyString();
private:
	char* m_pData;

	CMyString& operator=(const CMyString& str)
	{
		if (this == &str)
		{
			return *this;

		}

		delete[]m_pData;
		m_pData = nullptr;

		m_pData = new char[strlen(str.m_pData) + 1];
		strcpy(m_pData, str.m_pData);
		return *this;

	}

	/*
		CMyString& operator=(const CMyString& str)
		{
			if (this == &str)
			{
				CMyString strTemp(str);

				char* pTemp = strTemp.m_pData;
				strTemp.m_pData = m_pData;
				m_pData = pTemp;
			}


			return *this;

		}*/


};
//面试题2 写一个单例

//面试题3 数组中重复的数字
//在一个长度为n的数组里的所有数字都是在0~n-1范围内。数组中某些数字是重复的，但不知道有几个数字重复了，也不知道每个数字重复了几次。
//请找出数组中任意一个重复的数字。
bool duplicate(int numbers[], int length, int* duplication)
{
	if (numbers == nullptr || length <= 0)
	{
		return false;
	}
	for (int i = 0; i < length; ++i)
	{
		if (numbers[i]<0 || numbers[i]>length - 1)
		{
			return false;
		}
	}
	for (int i = 0; i < length; ++i)
	{
		while (numbers[i] != i)
		{
			if (numbers[i] == numbers[numbers[i]])
			{
				*duplication = numbers[i];
				return true;

			}

			//swap number[i] and numbers[numbers[i]]
			int temp = numbers[i];
			numbers[i] = numbers[i];
			numbers[temp] = temp;



		}
	}
	return false;


}
//题目2:不能修改数组找出重复的数字
//在一个长度为n+1的数组里的所有数字都在1~n的范围内，所以数组至少有一个数字是重复的。请找出数组中任意一个重复的数字，但不能修改输入的数组。
//例如，如果输入长度为8的数组{2，3，5，4，3，2，6，7}，那么对应的输出是重复的数字2或者3

int getDuplication(const int* numbers, int length)
{
	if (numbers == nullptr||length<0)
	{
		return -1;
	}

	int start = 1;
	int end = length - 1;
	while (end >= start)
	{
		int middle = ((end - start) >> 1) + start;
		int count = countRange(numbers, length, start, middle);
		if (end == start )
		{
			if (count>1)
			{
				return start;
			}
			else
			{
				break;
			}
		}
		return -1;
	}

	
}
int countRange(const int* numbers, int length, int start, int end)
{
	if (numbers == nullptr)
	{
		return 0;
	}
	int count = 0;
	for (int i = 0; i < length; i++)
	{
		if (numbers[i] >= start && numbers[i] <= end)
		{
			++count;
		}

	}
	return count;
}