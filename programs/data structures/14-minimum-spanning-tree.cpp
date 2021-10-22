#include <iostream>
using namespace std;

struct node {
    int fr, to, cost;
} p[6];

int c = 0, dist1 = 0, dist = 0;

void primsalgo(int *ptr, int b[][7], int i, int j)
{
    ptr[i] = 1;
    while (c < 6)
    {
        int min = 999;
        for (int i = 0; i < 7; i++)
        {
            if (ptr[i] == 1)
            {
                for (int j = 0; j < 7;)
                {
                    if (b[i][j] >= min || b[i][j] == 0)
                    {
                        j++;
                    }
                    else if (b[i][j] < min)
                    {
                        min = b[i][j];
                        dist = i;
                        dist1 = j;
                    }
                }
            }
        }
        ptr[dist1] = 1;
        p[c].fr = dist;
        p[c].to = dist1;
        p[c].cost = min;
        c++;
        b[dist][dist1] = b[dist1][dist] = 1000;
    }
    for (int k = 0; k < 6; k++)
    {
        cout << "source node : " << p[k].fr << endl;
        cout << "destination node : " << p[k].to << endl;
        cout << "weight of node : " << p[k].cost << endl;
    }
}

int main()
{
    int a[7];
    for (int i = 0; i < 7; i++)
    {
        a[i] = 0;
    }
    int b[7][7];
    for (int i = 0; i < 7; i++)
    {
        cout << "enter values for " << (i + 1) << " row : " << endl;
        for (int j = 0; j < 7; j++)
        {
            cin >> b[i][j];
        }
    }
    primsalgo(a, b, 0, 0);

    return 0;
}

/*
Output:
enter values for 1 row :
1 1 1 1 1 1 1
enter values for 2 row :
2 2 2 2 2 2 2
enter values for 3 row :
3 3 3 3 3 3 3
enter values for 4 row :
4 4 4 4 4 4 4
enter values for 5 row :
5 5 5 5 5 5 5
enter values for 6 row :
6 6 6 6 6 6 6
enter values for 7 row :
7 7 7 7 7 7 7
source node : 0
destination node : 0
weight of node : 1
source node : 0
destination node : 1
weight of node : 1
source node : 0
destination node : 2
weight of node : 1
source node : 0
destination node : 3
weight of node : 1
source node : 0
destination node : 4
weight of node : 1
source node : 0
destination node : 5
weight of node : 1
*/

