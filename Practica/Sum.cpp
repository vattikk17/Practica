/**
* @file Sum.cpp
* @author Пащенко В.В., гр. 515-В
* @date 12 липня	 2022
* @brief Навчальна практика.
*
* 30 Варiант - Сума цифр числа 2^1000
*/
#include "Sum.h"
#include <stdio.h>

int sum_of_dig(int a[], int step)
{
    int s = 0;
    for (int i = step - 1; i >= 0; i--)
        s += a[i];
    return s;
}
int dig_calc(int a[])
{
    int m = 1;
    int carry = 0;
    for (int i = 1; i <= 1000; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int x = a[j] * 2 + carry;
            a[j] = x % 10;
            carry = x / 10;
        }
        while (carry != 0)
        {
            a[m++] = carry % 10;
            carry /= 10;
        }
    }
    return m;
}