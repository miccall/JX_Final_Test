
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std ;
class M_Vector{
private:
    // 元数据
    
    //动态数组 vector
    vector<int> V ;

public:

    M_Vector(int* A)
    {
        //循环插入
        for (int i = 0; i < 10; i++) {
            //push_back 尾插
            V.push_back(A[i]);
        }
    }

public:
    void Test1();
    // 4，插入元素：  V.insert(V.begin()+i,a); //在第i+1个元素前面插入a
    void inset(int i ,int a );
    // 5，删除元素：vec.erase(vec.begin()+i); //删除第i+1个元素
    void erase(int i );
    // 6, 求vector的长度：V.size();
    int size();
    // 7,排序 algorithm库
    void vecsort();

    void Test2();
    void Test3();
};


int main() {
	int A[10] = {9,5,8,6,4,2,3,7,2,1};
    M_Vector *m_vector = new M_Vector(A);
	
    // m_vector->vecsort();
    m_vector->Test1();

    // m_vector->Test2();
    // m_vector->Test3();
    return 0;
}

void M_Vector::Test1()
{
    // 迭代器遍历
    for (vector<int>::iterator iter = V.begin(); iter != V.end() ; iter ++ )
    {
        //  *p 指针的引用值
        cout<<  *iter <<endl;
    }
}

void M_Vector::inset(int i, int a) {
    V.insert(V.begin()+i,a);
}

void M_Vector::erase(int i) {
    V.erase(V.begin()+i);
}

int M_Vector::size() {
    return V.size();
}

void M_Vector::vecsort() {
    sort(V.begin(),V.end());
}


void M_Vector::Test2() {

    vector<int> a ;                                //声明一个int型向量a
    vector<int> b(10) ;                            //声明一个初始大小为10的向量
    vector<int> c(10, 1) ;                         //声明一个初始大小为10且初始值都为1的向量
    vector<int> d(a) ;                             //声明并用向量a初始化向量d
    vector<int> e(a.begin(), a.begin()+3) ;        //将a向量中从第0个到第2个(共3个)作为向量b的初始值

    // 除此之外, 还可以直接使用数组来初始化向量:

    int n[] = {1, 2, 3, 4, 5} ;
    vector<int> f(n, n+5) ;              //将数组n的前5个元素作为向量a的初值
    vector<int> g(&n[1], &n[4]) ;        //将n[1] - n[4]范围内的元素作为向量a的初值

    // 遍历
    // 除了用迭代器，还可以用最普通的方式
    for(int i=0; i<a.size(); i++)
         cout<<n[i]<<" " ;

       a.size();    //获取向量中的元素个数
       a.empty();   //判断向量是否为空
       a.clear();  //清空向量中的元素

    /*
     *   4> 复制
     */
        a = b ;            //将b向量复制到a向量中

    /*   5> 比较
     *   保持 ==、!=、>、>=、<、<= 的惯有含义 ;
     *   如: a == b ;    //a向量与b向量比较, 相等则返回1
     */


     /*
     * 6>. 插入 - insert
     *      ①、 a.insert(a.begin(), 1000);            //将1000插入到向量a的起始位置前
     *
     *      ②、 a.insert(a.begin(), 3, 1000) ;        //将1000分别插入到向量元素位置的0-2处(共3个元素)
     *
     *      ③、 vector<int> a(5, 1) ;
     *      vector<int> b(10) ;
     *      b.insert(b.begin(), a.begin(), a.end()) ;        //将a.begin(), a.end()之间的全部元素插入到b.begin()前
     *
     *  7>. 删除 - erase
     *  ①、 b.erase(b.begin()) ;                     //将起始位置的元素删除
     *  ②、 b.erase(b.begin(), b.begin()+3) ;        //将(b.begin(), b.begin()+3)之间的元素删除
     *
     *  8>. 交换 - swap
     *  b.swap(a) ;            //a向量与b向量进行交换
    */

}


void M_Vector::Test3() {
    vector< vector<int> > b(10, vector<int>(5));        //创建一个10*5的int型二维向量

    /*
     * 作业 : 写出 遍历二维数组的方法
     * */
}