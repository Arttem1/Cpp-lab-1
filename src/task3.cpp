#include "task2.h"
#include <iostream>
#include <math.h>
using namespace std;


/*
bool checkPrime(unsigned int value)  //�������� ����� �� ��������
{
	if (value == 2)
		return true;
	else
	{
		//bool isPrime = false;
		//double remainder = 0;
		for (unsigned int i = 2; i <= sqrt(double(value)); i++)
		{
			//remainder = (value % i);
			if ((value % i) == 0)
				//return isPrime;
				return false;
		}
		//isPrime = true;
		//return isPrime;
		return true;
	}
}
*/


unsigned long long sumPrime(unsigned int hbound)  //����� ���� ������� ����� �� hbound (�� ������� ���)
{
	unsigned long long sumPrimeNumbers = 0;
	for (unsigned int i = 2; i < hbound; i++)
	{
		if (checkPrime(i))  //�������� ����� �� ��������
		{   
			//cout << i << endl;
			sumPrimeNumbers += i;
		}
	}
	return sumPrimeNumbers;
}
