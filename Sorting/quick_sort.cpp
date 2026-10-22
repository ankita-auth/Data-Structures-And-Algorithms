#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int partition(vector<int> &arr, int low, int high)
    {
        int pivot = arr[low];
        int i = low;
        int j = high;
        while (i < j)
        {
            while (arr[i] <= pivot && i <= high - 1)
            {
                i++;
            }
            while (arr[j] > pivot && j >= low + 1)
            {
                j--;
            }
            if (i < j)
            {
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[low], arr[j]);
        return j;
    }

    void quickSortHelper(vector<int> &arr, int low, int high)
    {
        if (low < high)
        {
            int pIndex = partition(arr, low, high);
            quickSortHelper(arr, low, pIndex - 1);
            quickSortHelper(arr, pIndex + 1, high);
        }
    }

    vector<int> quickSort(vector<int> &nums)
    {
        int n = nums.size();

        quickSortHelper(nums, 0, n - 1);
        return nums;
    }
};

int main()
{
    vector<int> vec;
    int x;
    while (cin >> x)
    {
        vec.push_back(x);
    }
    Solution s;
    vector<int> nums = s.quickSort(vec);
    for (int i : nums)
    {
        cout << i << " ";
    }
}

/*
//*Time Complexity:
O(N*logN), where N = size of the array. At each step, we divide the whole array, which takes logN steps, and n steps are taken for the partition() function, so overall time complexity will be N*logN.
 
The following recurrence relation can be written for Quick sort:
 
//*F(n) = F(k) + F(n-1-k)
 
Here, k is the number of elements smaller or equal to the pivot and n-1-k denotes elements greater than the pivot.
 
There can be 2 cases:
 
Worst Case: This case occurs when the pivot is the greatest or smallest element of the array. If the partition is done and the last element is the pivot, then the worst case would be either in the increasing order of the array or in the decreasing order of the array.
 
Recurrence:
 
F(n) = F(0) + F(n-1) or F(n) = F(n-1) + F(0)
 
Worst Case Time Complexity: O(n2)
 
Best Case: This case occurs when the pivot is the middle element or near to middle element of the array.
 
Recurrence:
 
F(n) = 2F(n/2)
 
Time Complexity for the best and average case: O(N*logN)
 
//*Space Complexity:
O(1) + O(N) auxiliary stack space, where N = size of the array.
*/
 