#include "task2.h"
//#include <iostream>
//using namespace std;
/*
bool checkPrime(unsigned int value)  //�������� ����� �� ��������
{
	if (value == 2)
		return true;
	else
	{
		bool isPrime = false;
		double remainder = 0;
		for (unsigned int i = 2; i < value;)
		{
			remainder = (value % i);
			if (remainder != 0)
				i++;
			else
				return isPrime;
		}
		isPrime = true;
		return isPrime;
	}
}
*/


unsigned long long sumPrime(unsigned int hbound)  //����� ���� ������� ����� �� hbound (�� ������� ���)
{
	unsigned long long sumPrimeNumbers = 0;
	for (unsigned int i = 2; i < hbound; i++)
	{
		if (checkPrime(i))  //�������� ����� �� ��������
			//cout << i << endl;
			sumPrimeNumbers += i;
	}
	return sumPrimeNumbers;
}