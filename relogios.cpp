/**
 * @file relogios.cpp
 * @author Miguel (migueljnm940@gmail.com)
 * @brief Exercício nível 1 - 2018 - fase 2(INCOMPLETO)
 * @version 0.1
 * @date 2022-08-16
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{

    int map[100][100];

    int l, c, k;

    scanf("%d %d %d", &l, &c, &k);

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", map[i][j]);
        }
    }

    int atX = 0;
    int atY = 0;

    int count = 0;

    return 0;
}