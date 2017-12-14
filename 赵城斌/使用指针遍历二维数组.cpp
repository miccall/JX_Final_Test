#include<iostream>

using namespace std;
int main()
{
    int a[2][3] = {{0, 1, 2}, {3, 4, 5}};
    for(int i = 0; i < 2; i++)
    {
        int *pa = a[i];
        for(; pa <= a[i] + 2; pa++)
        {
            cout<< *pa <<" ";
        }

    }
}
