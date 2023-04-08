//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int search(int a[], int n){
	  int l=0;
        int h=n-1;
        while(l<=h)
        {
            int mid=(l+h)/2;
           
          if((mid%2==0 and a[mid]==a[mid+1]) 
          or (mid%2==1 and a[mid]==a[mid-1]))
            {
                l=mid+1;
            }
           else 
            {
                h=mid-1;
            }
           
           
        }
       return a[l];
	}
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t,len;
    cin>>t;
    while(t--)
    {
        cin>>len;
        int arr[len];
        for(int i=0;i<len;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.search(arr, len)<<'\n';
    }
    return 0;
}

// } Driver Code Ends