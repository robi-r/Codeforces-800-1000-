#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n;
        cin >>n;
        int arr[n];
        for(int i = 0; i < n; i++)
        {
            cin>> arr[i];
        }
    
    sort(arr, arr + n);
    bool ans = true;
    for(int i = 1; i < n; i++)
    {
        if(arr[i] - arr[i-1] > 1)
        {
           ans = false;
        }
        
    }
    if(ans)
    {
        cout<<"YES"<<endl;
    }
    else cout <<"NO"<<endl;

    }
return 0;
}