//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { 
        string ans = ""; int end = s.size();
        for(int i = s.size() - 1; i >=0 ; i--)
        {
            if(s[i]=='.')
            {
                ans += s.substr(i + 1, end - i -1) + ".";
                end = i;
            }
        }
        
        ans += s.substr(0,end);
        
        return ans;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends