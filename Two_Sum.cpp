#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            vector<int> twoSum_result;
            for(int i=0;i<nums.size();i++){
                for(int j=i+1;j<nums.size();j++){
                    if(nums[i]+nums[j]==target){
                        twoSum_result.push_back(i);
                        twoSum_result.push_back(j);
                        break;
                    }
                }
            }
            return twoSum_result;
        }
};

int main(){
    vector<int> nums = {2,7,11,15};
    int target=9;
    Solution a;
    vector<int> twoSum_result=a.twoSum(nums,target);
    for(int i=0;i<twoSum_result.size();i++){
        cout<<twoSum_result[i]<<endl;
    }
    cout<<"end"<<endl;
    return 0;
}



