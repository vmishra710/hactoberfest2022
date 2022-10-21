#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        long long current_sum=0;
        long long max_sum=arr[0];
        
        for(int i=0;i<n;i++){
            current_sum += arr[i];
            if(current_sum > max_sum){
                max_sum = current_sum;
            }
            if(current_sum < 0){
                current_sum = 0;
            }
        }
        // Your code here
       return max_sum; 
    }
};

// { Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
