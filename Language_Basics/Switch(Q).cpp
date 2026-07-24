/*
Problem: Print the Day of the Week
 
Problem Statement:
Given an integer day representing the day number of the week, print the corresponding day name.
 
Mapping:
1 -> Monday
2 -> Tuesday
3 -> Wednesday
4 -> Thursday
5 -> Friday
6 -> Saturday
7 -> Sunday
 
If the value of day is less than 1 or greater than 7, print "Invalid".
 
Note:
- Print the day name with only the first letter capitalized.
- Print "Invalid" exactly as specified.
 
Input:
- A single integer day.
 
Output:
- Print the corresponding day of the week or "Invalid".
 
Examples:
 
Example 1:
Input:
3
 
Output:
Wednesday
 
Explanation:
Day number 3 corresponds to Wednesday.
 
Example 2:
Input:
8
 
Output:
Invalid
 
Explanation:
Since 8 is not a valid day number (1–7), print "Invalid".
 
Example 3:
Input:
2
 
Output:
Tuesday
 
Explanation:
Day number 2 corresponds to Tuesday.
 
Constraints:
0 <= day <= 50
*/
 
 
 
 
//---------------------------x------------------------
 
 
 
 

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
      void whichWeekDay(int day){
        switch(day){
            case 1:cout<<"Monday";
            break;
            case 2:cout<<"Tuesday";
            break;
            case 3:cout<<"Wednesday";
            break;
            case 4:cout<<"Thrusday";
            break;
            case 5:cout<<"Friday";
            break;
            case 6:cout<<"Saturday";
            break;
            case 7:cout<<"Sunday";
            break;
            default:cout<<"Invalid";


        }
    }

};
int main(){
    Solution s;
    int day;
    cin>>day;
    s.whichWeekDay(day);

    return 0;
}