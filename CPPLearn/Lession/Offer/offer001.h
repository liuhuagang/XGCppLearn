#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <string.h>


//����һ���γ̰�����ģ���ļ�,������,��������Ӻ�����
//1������:��ֵ���������

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
//������2 дһ������

//������3 �������ظ�������
//��һ������Ϊn����������������ֶ�����0~n-1��Χ�ڡ�������ĳЩ�������ظ��ģ�����֪���м��������ظ��ˣ�Ҳ��֪��ÿ�������ظ��˼��Ρ�
//���ҳ�����������һ���ظ������֡�
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
//��Ŀ2:�����޸������ҳ��ظ�������
//��һ������Ϊn+1����������������ֶ���1~n�ķ�Χ�ڣ���������������һ���������ظ��ġ����ҳ�����������һ���ظ������֣��������޸���������顣
//���磬������볤��Ϊ8������{2��3��5��4��3��2��6��7}����ô��Ӧ��������ظ�������2����3

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