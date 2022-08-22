/**
 * @file capsulas.cpp
 * @author Miguel (migueljnm940@gmail.com)
 * @brief Exercício nível 1 - 2018 - fase 2(COMPLETO)
 * @version 0.1
 * @date 2022-08-16
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <iostream>
#include <vector>
using namespace std;

#define maxD 100000000

vector<int> ciclos;
int nC, nM;

int fortuna(int dia)
{
    int res = 0;
    for (auto ciclo : ciclos)
        res += (dia / ciclo);
    return res;
}

int main()
{
    cin >> nC >> nM;
    ciclos = vector<int>(nC);

    for (int i = 0; i < nC; i++)
    {
        cin >> ciclos[i];
    }

    int low, high, mid;

    low = 1;
    high = maxD;

    while (low < high)
    {
        mid = low + (high - low) / 2;
        if (fortuna(mid) < nM)
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
    }

    cout << low << endl;

    return 0;
}