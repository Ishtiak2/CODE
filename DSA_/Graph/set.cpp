#include <iostream>
using namespace std;

void update_set(int S[], int n, int u[], int m, int v[], int p)
{
    for(int i = 0; i < n; i++ )
    {
        for(int j = 0; j < p; j++)
        {
            if(i == u[0])
                S[i] = -m;

            else if(j < m && i == u[j])
                S[i] = u[0];    

            if( i == v[0])
                S[i] = -p;

            if(j != 0 && i == v[j])
                S[i] = v[0]; 
        }
            
    }
}

// u & v are the heads of set
void Union(int S[], int u, int v)
{
    if(S[u] < S[v])
    {
        S[u] = S[u] + S[v];
        S[v] = u;
    }

    else{
        S[v] = S[u] + S[v];
        S[u] = v;
    }
}

int Find(int u, int S[])
{
    int x = u;
    
    while(S[x] > 0)
    {
        x = S[x];
    }

    return x;
}

void print(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] <<" ";
    }

    cout <<endl;
}


int main()
{
    //u = 0,1,2,3,4,5,6,7,8,9,10
    int set[11];

    for(int i = 0; i < 11; i++)
    {
        set[i] = -1;
        cout << set[i] <<" ";
    }
    cout << endl;

    int u[3] = {3,5,9};
    int v[4] = {4,7,8,10};

    update_set(set, 11, u, 3, v, 4);

    print(set, 11);

    Union(set, u[0], v[0]);

    print(set, 11);
    
    cout << Find(4, set) <<endl;
    
    return 0;
}