/**
 * @file recorde.cpp
 * @author Miguel
 * @brief https://olimpiada.ic.unicamp.br/pratique/p1/2021/f2/recorde/
 * @version 0.1
 * @date 2022-08-21
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <cstdio>

using namespace std;

int main()
{

    int R, M, L;

    scanf("%d%d%d", &R, &M, &L);

    if (R < M)
    {
        printf("RM\n");
    }
    else
    {
        printf("*\n");
    }

    if (R < L)
    {
        printf("RO\n");
    }
    else
    {
        printf("*\n");
    }

    return 0;
}