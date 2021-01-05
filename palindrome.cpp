#include <iostream>
#include <vector>

std::string longestPalindrome(std::string s) {
    int len = s.size();
    if(len==0||len==1){
        return s;
    }

    int start =0;
    int max = 1;
    std::vector<std::vector<int>> dp(len, std::vector<int>(len));
    for(int i=0; i<len;i++){
        dp[i][i] = 1;
        if(i<len-1&&s[i]==s[i+1]){
            dp[i][i+1] = 1;
            max = 2;
            start = i;
        }
    }

    for(int l=3; l<=len;l++){
        for(int j=0; j+l-1<len;j++){
            int e =j+l-1;
            if(s[j]==s[e]&&dp[j+1][e-1]==1){
                dp[j][e] = 1;
                start = j;
                max = l;
            }
        }
    }

    return s.substr(start, max);

}


int main()
{
    return 1;
}