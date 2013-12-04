#include <iostream>
#include <stdio.h>
#include <cstdlib>


using namespace std;
int const m=3;
void Input (int n, int A[][m])
{
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < m; ++j)
        {
            cout<<"A"<<"["<<i<<"]"<<"["<<j<<"] = ";
            cin >> A[i][j];
        }
    }
}


void Output (int n, int A[][m])
{
    for(int i=0; i<n; ++i)
    {
        for(int j=0; j<m; ++j)
        {
            cout.width(3);
            cout << A[i][j];
        }
        cout<<endl;
    }
}

int increase(int [][m], int);
int decrease(int [][m], int);
int maxs(int [][m], int);
int mins(int [][m], int);
int main()
{
    const int n = 2, m = 3;
    int A[n][m];
    int maxx=-999,minn=999;
    Input (n,A);
    Output(n,A);
    for(int i=0; i<n; ++i)
    {
        if(increase(A,i)>0 || decrease(A,i)>0)
        {
            if(maxx<maxs(A,i)) maxx=maxs(A,i);
            if(minn>mins(A,i)) minn=mins(A,i);

        }

    }


    cout<<"min="<<minn<<endl;
    cout<<"max="<<maxx;

    return 0;
}

int increase(int A[][m], int n)
{
    int trueFalse = 0;


    for(int j=0; j<m-1; ++j)
    {
        if(A[n][j]<=A[n][j+1])
            ++trueFalse;
        else trueFalse=-999;
    }


    return trueFalse;

}
int decrease(int A[][m], int n)
{
    int trueFalse2 = 0;

    for(int j=0; j<m-1; ++j)
    {
        if(A[n][j]>=A[n][j+1])
            ++trueFalse2;
        else trueFalse2=-999;
    }


    return trueFalse2;
}

int maxs(int A[][m], int n)
{
    int maxx=-999;
    for(int j=0; j<m; ++j)
    {
        if(maxx<A[n][j])
            maxx=A[n][j];
    }
    return maxx;
}
int mins(int A[][m],int n)
{
    int minn=999;
    for(int j=0; j<m; ++j)
    {
        if(minn>A[n][j])
            minn=A[n][j];
    }
    return minn;
}
