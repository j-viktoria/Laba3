/*3. В массиве А(N,М) найти максимальный и минимальный элементы
среди всех элементов тех строк, которые упорядочены по возрастанию
или по убыванию.*/


#include <iostream>
#include <stdlib.h>

using namespace std;

const int m=3;

void fun1(int mas[][m], int m, int n);
void fun2(int mas[][m], int m, int n);
int main()
{
    int const n=4;                                                        // n - rows, m - cols
    int mas[n][m]= {{1,6,7},{1,2,3},{9,8,7},{12,5,8}};
    for(int i=0; i<n; ++i)
    {
        for(int j=0; j<m; ++j)
        {
            cout <<"   "<< mas[i][j];
        }
        cout << endl;
    }
    cout << "\n";
    fun1(mas,m,n);
    fun2(mas,m,n);
    return 0;
}
void fun1(int mas[][m], int m, int n)
{
    int trueFalse = 0;
    for(int i=0; i<n; ++i)
    {
        for(int j=0; j<m; ++j)
        {
            if(mas[i][j]<=mas[i][j+1])
            {
                ++trueFalse ;
            }
            if(mas[i][j]>mas[i][j+1])
            {
                trueFalse = 0;
            }
        }
        if(trueFalse>m-1)
        {
            cout << mas[i][0]<<"    "<<mas[i][m-1] << endl;

        }
    }
}
void fun2(int mas[][m], int m, int n)
{
    int trueFalse2 = 0;
    for(int i=n-1; i>=0; --i)
    {
        for(int j=m-1; j>=0; --j)
        {
            if(mas[i][j]<=mas[i][j+1])
            {
                ++trueFalse2 ;
            }
            if(mas[i][j]>mas[i][j+1])
            {
                trueFalse2 = 0;
            }
        }
        if(trueFalse2>m-1)
        {
            cout << mas[i][m-1]<<"    "<<mas[i][0] << endl;

        }
    }
}
