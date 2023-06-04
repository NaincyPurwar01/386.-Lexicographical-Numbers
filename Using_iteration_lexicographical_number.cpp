class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<int> ans;
        int l = 1;
        for(int i=0;i<n;i++)
        {
            ans.push_back(l);
            if(l* 10 <= n)
            {
                l = l * 10;
            }
            else if(l+1 <= n  && l % 10 != 9)
            {
                l = l + 1;
            }
            else
            {
                while((l/10) %10 == 9)
                {
                    l = l/10;
                }
                l = l/10 + 1;
            }
        }
        return ans;
        
    }
};