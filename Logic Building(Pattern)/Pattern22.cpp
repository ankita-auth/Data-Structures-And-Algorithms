#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
         void pattern22(int n){
            //*1
            // for(int i=n;i>=1;i--){
            //     for(int j=n;j>=i;j--){
                    
            //         cout<<j;

            //     }
                
            //     cout<<endl;
            // }
            //*2
            // for(int i=n;i>=1;i--){
            //     for(int j=n;j>=i;j--){
                    
            //         cout<<j;

            //     }
            //     for(int j=1;j<=i-1;j++){
                    
            //         cout<<i;

            //     }
                
            //     cout<<endl;
            //  }
            //*3
            // for(int i=n;i>=1;i--){
            //     for(int j=n;j>=1;j--){
            //         if(j>=i){
            //             cout<<j;
            //         }else{
            //             cout<<i;
            //         }

            //     }
               
                
            //     cout<<endl;
            // }
            //*4
            // for(int i=n;i>=1;i--){
            //     for(int j=n;j>=1;j--){
            //         if(j>=i){
            //             cout<<j;
            //         }else{
            //             cout<<i;
            //         }

            //     }
            //     int t=i;
            //     for(int k=1;k<=n-1;k++){
            //         if(k<=i-1){
            //             cout<<i;
            //         }
            //         else{
                        
            //             cout<<++i;
            //         }
            //     }
            //     i=t;
               
                
            //     cout<<endl;
            // }
            //*5
             for(int i=n;i>=1;i--){
                for(int j=n;j>=1;j--){
                    if(j>=i){
                        cout<<j;
                    }else{
                        cout<<i;
                    }

                }
                int t=i;
                for(int k=1;k<=n-1;k++){
                    if(k<=i-1){
                        cout<<i;
                    }
                    else{
                        
                        cout<<++i;
                    }
                }
                i=t;
               
                
                cout<<endl;
            }
             for(int i=2;i<=n;i++){
                for(int j=n;j>=1;j--){
                    if(j>=i){
                        cout<<j;
                    }else{
                        cout<<i;
                    }

                }
                int t=i;
                for(int k=1;k<=n-1;k++){
                    if(k<=i-1){
                        cout<<i;
                    }
                    else{
                        
                        cout<<++i;
                    }
                }
                i=t;
               
                
                cout<<endl;
            }

         }

};
int main(){
    Solution s;
    int N;
    cin>>N;
    s.pattern22(N);
    return 0;
}

//-------------------------------X-------------------------------------------------

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    void pattern22(int n) {
        
        for (int i = 0; i < 2 * n - 1; i++) {

            
            for (int j = 0; j < 2 * n - 1; j++) {

               
                int top = i;
                int left = j;
                int right = (2 * n - 2) - j;
                int bottom = (2 * n - 2) - i;

               
                cout << (n - min(min(top, bottom), min(left, right)));
                if (j < 2 * n) cout << " ";
            }

            cout << endl;
        }
    }
};

int main() {
    int N = 5;
    
    
    Solution sol;
    
    sol.pattern22(N);
    
    return 0;
}