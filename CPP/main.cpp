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
    cout << "请在每行输入5个数字，数字之间用空格隔开，程序将生成10行5列的数组！" << endl;
    for(i = 0; i < 10; i++)
    {
        cout << "第" << i + 1 << "行：" << endl;
        for(j = 0; j < 5; j++)
        {
            cin >> nums[i][j];
        }
        cout << endl;
    }
    cout << "你创建的二维数组为：" << endl;
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
