/**
 * @file tenis.cpp
 * @author Miguel
 * @brief https://olimpiada.ic.unicamp.br/pratique/p1/2021/f2/tenis/
 * @version 0.1
 * @date 2022-08-21
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{

    int tenis[4];

    scanf("%d%d%d%d", &tenis[0], &tenis[1], &tenis[2], &tenis[3]);

    sort(tenis, tenis + 4);

    int a = tenis[0] + tenis[3];
    int b = tenis[1] + tenis[2];

    printf("%d\n", abs(a - b));

    return 0;
}