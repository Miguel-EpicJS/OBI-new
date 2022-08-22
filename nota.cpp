/**
 * @file nota.cpp
 * @author Miguel (migueljnm940@gmail.com)
 * @brief Exercício nível 1 - 2019 - fase 2(COMPLETO)
 * @version 0.1
 * @date 2022-08-16
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <cstdio>
#include <iostream>

using namespace std;

int main()
{

    int x, y;

    scanf("%d %d", &x, &y);

    printf("%d\n", abs(x - (y * 2)));

    return 0;
}
