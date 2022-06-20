// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {

       int ans = -1;
       int count1 = 0;
       int count2 = 0;
       for(int i = 0; i<n; i++){
           count1 =0;
           count2 = 0;
           for(int j = 0; j<n; j++){
               if(i != j && M[i][j] == 0){
                   count1++;
               }
                if( i != j && M[j][i] == 1){
                   count2++;
               }
           }
          
           if(count1 == n-1 && count2 == n-1){
               ans = i;
             break;
           }
       }
       return ans;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}
  // } Driver Code Ends