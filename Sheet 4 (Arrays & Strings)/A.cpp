#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int vec[n][n];
    for (int i = 0; i < n; i++) {
        vec[i][0] = 1; 
        vec[0][i] = 1;  
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            vec[i][j]=vec[i][j-1]+vec[i-1][j];
        }
    }
    cout<<vec[n-1][n-1]<<endl;
}
