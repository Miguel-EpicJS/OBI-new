/**
 * @file lesma.cpp
 * @author Miguel (migueljnm940@gmail.com)
 * @brief Exercício nível 1 - 2020 - fase 2(INCOMPLETO)
 * @version 0.1
 * @date 2022-08-19
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <cstdio>

using namespace std;

int main()
{

    int A, S, D;

    scanf("%d %d %d", &A, &S, &D);

    int p = 0, d = 0;

    while (p <= A)
    {
        p += S;
        d++;
        if (p >= A)
        {
            break;
        }
        else
        {
            p -= D;
        }
    }

    printf("%d\n", d);

    return 0;
}