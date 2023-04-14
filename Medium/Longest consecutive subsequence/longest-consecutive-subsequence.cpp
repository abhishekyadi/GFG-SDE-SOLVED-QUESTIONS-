//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      int max_el=*max_element(arr,arr+N);
      bool isPresent[max_el +1];
      fill(isPresent,isPresent+max_el +1,false);
      
      for(int i=0;i<N;i++) isPresent[arr[i]]=true;
      int ans=0;
      int cnt=0;
      for(int i=1;i<=max_el;i++){
          if(isPresent[i])cnt++;
          else{
              ans=max(ans,cnt);
              cnt=0;
          }
      }
      ans=max(ans,cnt);
      return ans;
    }
};

//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends