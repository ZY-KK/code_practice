#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> initialArray(vector<vector<int>> data, int n, int time, int start)
{
    //vector<vector<int>> newData(data);
    
        if(time%2!=0)
        {
            for(int i=0;i<n;i++)
            {
                data[time-1][i+time-1] = start+i+1;
                data[time-2+n][i+time-1] =start+3*n-i-2; 
            }
            for(int j =1; j<n-1;j++)
            {
                data[time-1+j][n+time-2] = start+n+j;
                data[time-1+j][time-1] = start+4*n-3-j;
            
            }
        }
        else
        {
            for(int i = 0;i<n;i++)
            {
                data[time-1+i][time-1] = start+i+1;
                data[time-1+i][n+time-2] = start+3*n-2-i;
            }
            for(int j = 1; j<n-1;j++)
            {
                data[time-1][j+time-1] = start+4*n-3-j;
                data[n+time-2][j+time-1] = start+n+j;
                
            }
        }
        // newStart +=4*n-4;

    
    
    return data;
}

int getNumber(int x, int y)
{
    return 0;
}

int main(){

    int c=  0;
    
    while(cin>>c)
    {
        int n, m, x, y;
        cin>>n>>m;
        int nCopy = n;
        vector<vector<int>> data(n, vector<int>(n));
        int time =1;
        int start = 0;
        // data = initialArray(data, n, time, start);
        // start +=4*n-4;
        
        while(n>=0)
        {
            
            
            
            data = initialArray(data, n, time, start);
            start +=4*n-4;
            n-=2;
            time++;

        }
        for(int i = 0; i<nCopy;i++)
        {
            for(int j=0; j<nCopy; j++)
            {
                cout<<data[i][j]<<" ";
            }
            cout<<endl;
        }
        
        
    }

return 0;
}