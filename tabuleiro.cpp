/**
 * @file tabueleiro.cpp
 * @author Miguel (migueljnm940@gmail.com)
 * @brief Exercício nível 1 - 2017 - fase 2(INCOMPLETO)
 * @version 0.1
 * @date 2022-08-16
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{

    int n;

    cin >> n;

    int tabuleiro[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> tabuleiro[i][j];
        }
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (tabuleiro[i][j] == 9)
            {
                if (tabuleiro[i - 1][j - 1] == 0 && (tabuleiro[i - 1][j] == 0 || tabuleiro[i][j - 1] == 0))
                {
                    tabuleiro[i][j] = 1;
                }
                else if (tabuleiro[i - 1][j - 1] == 1 && (tabuleiro[i - 1][j] == 1 || tabuleiro[i][j - 1] == 1))
                {
                    tabuleiro[i][j] = 0;
                }
                else if (tabuleiro[i - 1][j - 1] == 0 && (tabuleiro[i - 1][j] == 1 && tabuleiro[i][j - 1] == 1))
                {
                    tabuleiro[i][j] = 0;
                }
                else
                {
                    tabuleiro[i][j] = 1;
                }
            }
        }
    } /*
     puts("");
     puts("");

     for (int i = 0; i < n; i++)
     {
         for (int j = 0; j < n; j++)
         {
             cout << tabuleiro[i][j] << " ";
         }
         puts("");
     } */

    int res;

    res = tabuleiro[n - 1][n - 1];

    cout << res << "\n";

    return 0;
}