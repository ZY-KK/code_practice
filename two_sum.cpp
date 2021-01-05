#include <iostream>
#include <vector>

std::vector<int> two_sum_for(std::vector<int> num_array, int target){
    
    for(auto i =0; i<num_array.size();i++){
        for(auto j=i+1;j<num_array.size();j++)
        {
            if(num_array[i]+num_array[j]==target){
                return {i, j};
            }

        }
    }

    return {};
}

int main(){
    
}

