/**
 * @file media.cpp
 * @author Miguel
 * @brief https://olimpiada.ic.unicamp.br/pratique/p1/2021/f2/media/
 * @version 0.1
 * @date 2022-08-21
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <cstdio>
#include <iostream>

using namespace std;

int main()
{

    long long a, b;

    scanf("%lld %lld", &a, &b);

    printf("%lld\n", min(a * 2 - b, b * 2 - a));

    return 0;
}