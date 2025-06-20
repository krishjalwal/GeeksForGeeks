// User function Template for C++
class Solution {
  public:
    pair<int, int> getMinMax(vector<int> arr) {
        int max = INT_MIN;
        int min = INT_MAX;
        
        for(auto x : arr)
        {
            if(x > max)
            {
                max = x;
            }
            if(x < min)
            {
                min = x;
            }
        }
        
        return {min,max};
    }
};