/**
 * @file campeonato.cpp
 * @author Miguel (migueljnm940@gmail.com)
 * @brief Exercício nível 1 - 2018 - fase 2(COMPLETO)
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
    int mK, mL;

    int arena[17];

    for (int i = 1; i <= 16; i++)
    {
        int x;
        cin >> x;
        arena[i] = x;
        if (x == 1)
        {
            mK = i;
        }
        else if (x == 9)
        {
            mL = i;
        }
    }

    if ((mK <= 8 && mL >= 9) || (mL <= 8 && mK >= 9))
    {
        printf("final\n");
    }
    else if (((mK <= 4 && mL >= 5) || (mL <= 4 && mK >= 5)) || ((mK <= 12 && mL >= 13) || (mL <= 12 && mK >= 13)))
    {
        printf("semifinal\n");
    }
    else if ((mK <= 2 && mL >= 3) || (mL <= 2 && mK >= 3) || (mK <= 6 && mL >= 7) || (mL <= 6 && mK >= 7) || (mK <= 10 && mL >= 11) || (mL <= 10 && mK >= 11) || (mK <= 14 && mL >= 15) || (mL <= 14 && mK >= 15))
    {
        printf("quartas\n");
    }
    else
    {
        printf("oitavas\n");
    }

    return 0;
}