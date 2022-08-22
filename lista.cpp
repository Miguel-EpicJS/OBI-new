/**
 * @file lista.cpp
 * @author Miguel
 * @brief https://olimpiada.ic.unicamp.br/pratique/p1/2021/f2/lista/
 * @version 0.1
 * @date 2022-08-21
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

    int n;

    cin >> n;

    int lista[n];
    int tsila[n];

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        lista[i] = x;
        tsila[i] = x;
    }

    int tot = 0;

    reverse(tsila, tsila + n);

    for (int i = 0; i < n / 2; i++)
    {
        if (lista[i] != tsila[i])
        {
            tot++;
        }
    }

    printf("%d\n", tot);

    return 0;
}