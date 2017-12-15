#include<vector>
#include<algorithm>
#include<iostream>

using namespace std;
/*技术部-赵城斌
 * 遍历二维数组
 * 使用
 * 使用迭代器
 */
int main()
{
    vector< vector<int> > a(3, vector<int>(2, 1));
    int i, j;
    //输入数组元素的值
    for(i = 0; i < a.size(); i++)
    {
        for(j = 0; j < a[i].size(); j++)
        {
            cin>>a[i][j];
        }
    }
    //遍历
    for(i = 0; i < a.size(); i++)
    {
        for(vector<int>::iterator iter = a[i].begin(); iter != a[i].end(); iter++)
            cout<< *iter <<" ";
    }
    return 0;
}
