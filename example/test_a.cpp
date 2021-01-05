#include <iostream>
using namespace std;

template <typename T, int count>

void foo(T x)
{
    T val[count];
    for(int i=0; i<count;i++)
    {
        val[i]=x++;
        cout<<val[i]<<" ";
    }
};
long countOptions(int people, int groups) {
    int amount =0;
    int base = people/groups;
    if(groups!=1)
    {
        for(int i =1; i<=base;i++)
        {
            return base*countOptions(people-i, groups--);
            
        }
        
    }

    return 1;
}
int main()
{
    // unsigned char ch = 0;
    // int count =0;
    // while(++ch<=255)
    // {
    //     count++;
    // }

    // printf("%d", count);
    // return 0;

    // int i=5, j=2;
    // printf("%d %d", i<<j, i>>j);
    long l = countOptions(7, 3);
    cout<<l;
}