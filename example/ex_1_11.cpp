#include <iostream>

int main()
{
    std::cout<<"Please input two integers"<<std::endl;

    int num_1 = 0;
    int num_2 = 0;
    std::cin>>num_1>>num_2;
    if(num_1>=num_2)
    {
       int num = num_2;
       while(num<=num_1)
       {
           std::cout<<num++<<std::endl;
       } 
    }
    else
    {
        int num = num_1;
       while(num<=num_2)
       {
           std::cout<<num++<<std::endl;
       } 

    }

}