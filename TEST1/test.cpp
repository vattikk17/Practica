#include "pch.h"

#include "..\Practica\Sum.cpp"
//�������� �� ���������� ���� � ����� 2^1000
TEST(dig_calc_test, m_value)
{
    int test[1000] = { 0 };
    test[0] = 1;
    EXPECT_EQ(302, dig_calc(test));
}
//������� �� ����������� ������ ����� ���� ����� 2^1000

TEST(sum_of_dig, sum_value)
{
    int test[1000] = { 0 };
    test[0] = 1;
    int m = dig_calc(test);
    EXPECT_EQ(1366, sum_of_dig(test, m));
}