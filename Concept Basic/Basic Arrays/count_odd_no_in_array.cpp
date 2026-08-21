#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int countOdd(int arr[],int n){
            int c=0;
            for(int i=0;i<n;i++){
                if(arr[i]%2!=0){
                    c++;
                }
            }
            return c;
        }

};
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Solution s;
    cout<<s.countOdd(arr,n);

}