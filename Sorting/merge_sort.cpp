#include <bits/stdc++.h>
using namespace std;


class Solution{
    public:
        void merge(vector<int> &arr, int low,int mid, int high){
            vector<int> temp;
            int left=low;
            int right=mid+1;

            while(left<=mid && right<=high){
                if(arr[left]<=arr[right]){
                    temp.push_back(arr[left]);
                    left++;

                }
                else{
                    temp.push_back(arr[right]);
                    right++;
                }
            }

            while(left<=mid){
                temp.push_back(arr[left]);
                left++;
            }

            while(right<=high){
                temp.push_back(arr[right]);
                right++;
            }
            
            for(int i=low;i<=high;i++){
                arr[i]=temp[i-low];
            }
            

        }

        void mergeSortHelper(vector<int> &arr,int low,int high){
            if(low>=high){
                return;
            }
            int mid=(low+high)/2;
            mergeSortHelper(arr,low,mid);
            mergeSortHelper(arr,mid+1,high);
            merge(arr,low,mid,high);
        }

        vector<int> mergeSort(vector<int> &nums){
            int n=nums.size();
            mergeSortHelper(nums,0,n-1);
            return nums;
        }
};

int main(){
    vector<int> arr={9,4,7,6,3,1,5};
    int n=arr.size();

    cout<<"Before Sorting Array:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    Solution sol;

    cout<<"After Sorting Array:"<<endl;
    for(auto it: sol.mergeSort(arr)){
        cout << it << " ";
    }
    cout<<endl;
   
    return 0;
}

//*T.C: O(nlogn)
//*S.C: O(n)

