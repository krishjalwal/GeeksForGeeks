class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        int zero = 0 ;
        int one = 0;
        int two = 0 ;
        
        vector<int> ans;
        
        for(auto x : arr)
        {
            if(x==0)
            {
                zero++;
            }
            if(x==1)
            {
                one++;
            }
            if(x==2)
            {
                two++;
            }
        }
        
        for(int i = 0 ; i < zero ; i++)
        {
            ans.push_back(0);
        }
        for(int i = 0 ; i < one ; i++)
        {
            ans.push_back(1);
        }
        for(int i = 0 ; i < two ; i++)
        {
            ans.push_back(2);
        }
         arr = ans;
    }
};