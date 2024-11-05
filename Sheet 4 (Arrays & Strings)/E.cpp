#include <iostream>
using namespace std;
void getInput(string *arr, int size) {
 
    for (int i = 0; i < size; i++) 
    {
        cin >>  arr[i];
    }
}

int main()
{
    int size,count=0, amountOfchanges =0;
    cin>>size;
    string *arr =new string[size];
    getInput(arr,size);
    for(int i = 1; i<=(size-1); i++)
    {
        if (arr[i] != arr[i-1] && amountOfchanges == 0)
        {
            count+=2;
            amountOfchanges =1;
        }
        else if (arr[i] != arr[i-1] && amountOfchanges == 1)
        {
            count+=1;
            
        }

    }
    if (count == 0 && size !=0)
        {
            count++;
        }
    cout<<count<<endl;
    
    return 0;
}
