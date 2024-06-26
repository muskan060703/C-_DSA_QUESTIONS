//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int exactly3Divisors(int n)
    {
    int cnt=0;
    vector<bool>isPrime(sqrt(n)+1,true);
    for(int i=2;i<=sqrt(n);i++)
    {
         if(isPrime[i] and(long)i*i <=n )
        {
        cnt++;
        }
        if(isPrime[i])
        {
            for(int j=2*i;j<=sqrt(n);j=j+i)
            isPrime[j]=false;
        }
       
    }
    
    return cnt;
    }
};

//{ Driver Code Starts.


int main()
 {
    int T;
    
    //taking testcases
    cin>>T;
    while(T--)
    {
        int N;
        
        //taking N
        cin>>N;
        Solution ob;
        //calling function exactly3Divisors()
        cout<<ob.exactly3Divisors(N)<<endl;
    }
	return 0;
}
// } Driver Code Ends