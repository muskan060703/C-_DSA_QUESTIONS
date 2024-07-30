//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    //  Function to find the gray code of given number n
    int binary(int n) {
        int ans = 0;
        int fact = 1;
        while( n > 0) {
            ans += (n%2)*fact;
            fact*=10;
            n/=2;
        }
        return ans;
    }
    int greyConverter(int n)
    {
        
        // Your code here
        binary(n);
        int g=n ^ n>>1;
        return g;
        
    }
};

//{ Driver Code Starts.

int main()
{
    int t,n;
    cin>>t;//testcases
    while(t--)
    {
        cin >> n;//input n
        Solution ob;
        //calling greyConverter() function
        cout << ob.greyConverter(n) << endl;
    }
}

// } Driver Code Ends