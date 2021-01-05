#include <iostream>
# include <vector>
int lengthOfLongestSubstring(std::string s){

    int start(0), end(0), length(0), result(0);
    int sSize = int(s.size());
    while(end<sSize){
        char tmpChar = s[end];
        for(int index = start;index<end;index++){
            if (tmpChar == s[index])
                {
                    start = index + 1;
                    length = end - start;
                    break;
                }

        }
        end++;
        length++;
        result = std::max(result, length);
    }

    return result;

}



int main(){
    int max = lengthOfLongestSubstring("au");
    std::cout<<max<<std::endl;
}