class Solution {
public:
    vector<int> beautifulArray(int n) {
        vector<int>ans;
        ans.push_back(1);
        while(ans.size()<n){
            vector<int>temp;
            for(int i=0;i<ans.size();i++){
                if(ans[i]*2-1<=n){
                    temp.push_back(ans[i]*2-1);
                }
            }
            for(int i=0;i<ans.size();i++){
                if(ans[i]*2<=n){
                    temp.push_back(ans[i]*2);
                }
            }
            ans=temp;
        }
        return ans;
    }
};
