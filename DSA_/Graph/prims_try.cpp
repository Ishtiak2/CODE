#include<iostream>
using namespace std;

#define I 9999
#define V 8

void PrintMST(int T[][V-2], int G[V][V]){
    cout << "\nMinimum Spanning Tree Edges (w/ cost)\n" << endl;
    int sum {0};
    for (int i {0}; i<V-2; i++){
        int c = G[T[0][i]][T[1][i]];
        cout << "[" << T[0][i] << "]---[" << T[1][i] << "] cost: " << c << endl;
        sum += c;
    }
    cout << endl;
    cout << "Total cost of MST: " << sum << endl;
}


void PrimsMST(int G[][V])
{
    int u,v;
    int track[V];
    int t[2][V-2] {0};

    int min = I;

    for(int i = 1; i < V; i++)
    {
        track[i] = I;

        for(int j = i; j < V; j++)
        {
            if(G[i][j] < min)
            {
                min = G[i][j];
                u = i;
                v = j; 
            }
        }
    }

    track[u] = track[v] = 0;
    t[0][0] = u;
    t[1][0] = v;

    for(int i = 1; i < V; i++)
    {
        if(track[i] != 0)
        {
        if(G[i][u] > G[i][v])
            track[i] = v;

        else
            track[i] = u;  
        }  
    }

    for(int i = 1; i < V-2; i++)
    {
        min = I;
        int k;

        for(int j = 1; j < V; j++)
        {
            if(track[j] != 0 && G[j][track[j]] < min)
            {
                min = G[j][track[j]];
                k = j;
            }
        }

        t[0][i] = k;
        t[1][i] = track[k];
        track[k] = 0;

        for(int j = 1; j <  V; j++)
        {
            if( track[j] != 0 && G[j][k] < G[j][track[j]])
                track[j] = k;
        }
    }

    PrintMST(t,G);

}

int main() 
{
    int cost [V][V] {
            {I, I, I, I, I, I, I, I},
            {I, I, 25, I, I, I, 5, I},
            {I, 25, I, 12, I, I, I, 10},
            {I, I, 12, I, 8, I, I, I},
            {I, I, I, 8, I, 16, I, 14},
            {I, I, I, I, 16, I, 20, 18},
            {I, 5, I, I, I, 20, I, I},
            {I, I, 10, I, 14, 18, I, I},
    };

    PrimsMST(cost);


    return 0;
}