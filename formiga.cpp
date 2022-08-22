/**
 * @file formiga.cpp
 * @author Miguel (migueljnm940@gmail.com)
 * @brief Exercício nível 1 - 2020 - fase 2(INCOMPLETO)
 * @version 0.1
 * @date 2022-08-19
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <cstdio>
#include <cstring>
#include <vector>

using namespace std;

const int MAX = 200;

int S, T, P;

int altura[MAX];
int visitados[MAX];
vector<int> adj[MAX];

int tot = 0;

void busca(int k)
{
    if (!visitados[k])
    {
        tot++;
        visitados[k] = 1;
        for (auto q : adj[k])
        {
            busca(q);
        }
    }
}

int main()
{

    int i, a, b;

    scanf("%d%d%d", &S, &T, &P);

    for (int i = 0; i < S; i++)
    {
        scanf("%d", &altura[i]);
    }

    for (int i = 0; i < T; i++)
    {
        scanf("%d%d", &a, &b);
        a--;
        b--;
        if (altura[a] > altura[b])
        {
            adj[a].push_back(b);
        }
        else if (altura[a] < altura[b])
        {
            adj[b].push_back(a);
        }
    }

    memset(visitados, 0, sizeof(visitados));
    busca(P - 1);
    printf("%d\n", tot - 1);
}