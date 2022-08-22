/**
 * @file ponto.cpp
 * @author Miguel (migueljnm940@gmail.com)
 * @brief Exercício nível 1 - 2019 - fase 2(INCOMPLETO)
 * @version 0.1
 * @date 2022-08-16
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <cstdio>
#include <iostream>

long find(int n)
{

    long pl = 2;

    for (int i = 0; i < n; i++)
    {
        pl += pl - 1;
    }

    return pl;
}

using namespace std;

int main()
{

    int n;

    scanf("%d", &n);

    long p = find(n);

    printf("%ld\n", p * p);

    return 0;
}
