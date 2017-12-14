#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

/**
*干事：洪文豪
*ID：mosoup
*/


int main()
{
    int i, j;
    int nums[10][5];
    int a, b;
    for(i = 0; i < 10; i++)
    {

        for(j = 0; j < 5; j++)
        {
            cin >> nums[i][j];
        }
        cout << endl;
    }
    cout << "二维数组的输出为：" << endl;
    for(a = 0; a < 10; a++)
    {

        for(b = 0; b < 5; b++)
        {
            cout << nums[a][b] << "\t";
        }
        cout << endl;
    }

    return 0;
}
