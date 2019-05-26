/*You are given a 1*n  grid and k colors. Your task is to determine the number of ways to color each cell by adhering to the following condition:

For any vertical line that divides the grid into two non-empty parts, the number of distinct colors on the right side must be equal to the number of distinct colors on the left side. Note that you can only divide the grid so that every cell either completely belongs to the left or right.

Input format

The first line of the input contains two integers n and  k.

Output format

Print the number of ways to color each cell by following the mentioned condition.

Constraints
n,k <= 10^9

Sample input #2

189232688 48695377
Sample output #2

48695377*/

//Solution
#include<iostream>

using namespace std;

int main(){

    int long long n,k;
    cin>>n>>k;

    if(n!=2){
        cout<<k;
    }else{
        cout<<k*k;
    }
    return 0;
}
