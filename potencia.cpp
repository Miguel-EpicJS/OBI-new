/**
 * @file potencia.cpp
 * @author Miguel
 * @brief https://olimpiada.ic.unicamp.br/pratique/p1/2021/f2/media/
 * @version 0.1
 * @date 2022-08-21
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <cstdio>
#include <cmath>

using namespace std;

int main()
{

    int n;

    scanf("%d", &n);

    long long tot = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        tot += pow(x / 10, x % 10);
    }

    printf("%lld\n", tot);
    return 0;
}