#include <iostream>
#include <vector>
#include <string>


std::string convert(std::string s, int numRows){
    if(numRows==1)
    return s;
    std::vector<std::string> rows(std::min(numRows, int(s.size())));
    int currentRow = 0;
    bool goDown = false;

    for(char c: s){
        rows[currentRow]+=c;
        if(currentRow==0||currentRow ==numRows-1){
            goDown=!goDown;
        }

        currentRow+= goDown? 1:-1;


    }

    std::string ret;
    for(std::string row : rows){
        ret+=row;
    }

    return ret;


}
int main()
{
    std::cout<<convert("AB", 2)<<std::endl;
}