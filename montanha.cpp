/**
 * @file montanha.cpp
 * @author Miguel (migueljnm940@gmail.com)
 * @brief Exercício nível 1 - 2017 - fase 2(COMPLETO)
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

    int montanhas[n];

    for (int i = 0; i < n; i++)
    {
        cin >> montanhas[i];
    }

    int tot = 0;

    for (int i = 0; i < n - 2; i++)
    {
        if (montanhas[i] > montanhas[i + 1] && montanhas[i + 1] < montanhas[i + 2])
        {
            tot++;
        }
    }

    cout << (tot > 0 ? "S\n" : "N\n");

    return 0;
}