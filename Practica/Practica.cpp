/**
* @file Practica.cpp
* @author ������� �.�., ��. 515-�
* @date 12 �����	 2022
* @brief ��������� ��������.
*
* 30 ���i��� - ���� ���� ����� 2^1000
*/

#include <stdio.h>
#include "Sum.h"

    int main()
    {
        int a[1000] = { 0 };
        a[0] = 1;
        long long int sum = 0;
        int m = dig_calc(a);
        sum = sum_of_dig(a, m);
        printf("Sum of the digits of 2^1000 = %lld", sum);
        return 0;
    }
	