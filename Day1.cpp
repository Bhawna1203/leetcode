//here i can do in more better way by using hashmap for the same
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> m; 
        int maxl=0; //max length
        vector<int>pre(nums.size(),0);
        for(int i=0;i<nums.size();i++){
          if(i==0) pre[i]= (nums[i]==0 ? -1 : 1);
          else pre[i]=pre[i-1]+ (nums[i]==0 ? -1 : 1) ;
        
            if(pre[i]==0) maxl=max(maxl,i+1); 
            else if(m.find(pre[i])!=m.end()){
                maxl=max(maxl,i-m[pre[i]]); 
            }
            else m[pre[i]]=i; 
        }
    return maxl;
        
    }
};
int main(){
    Solution s;
    vector<int> v;
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    int x = s.findMaxLength(v);
    cout<<"MAX LENGTH IN THE VECTOR IS : "<<x<<endl;
    return 0;
}