/**
 * @file calculo.cpp
 * @author Miguel
 * @brief https://olimpiada.ic.unicamp.br/pratique/p1/2021/f2/calculo/
 * @version 0.1
 * @date 2022-08-20
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <cstdio>

using namespace std;

int compareSumDigits(int n, int b)
{
    int sum = 0, m;
    while (n > 0)
    {
        m = n % 10;
        sum = sum + m;
        n = n / 10;
    }

    if (sum == b)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{

    int S, A, B;

    scanf("%d%d%d", &S, &A, &B);

    int tot = 0;

    while (B >= A)
    {
        tot += compareSumDigits(B, S);
        B--;
    }

    printf("%d\n", tot);

    return 0;
}