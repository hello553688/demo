#include<iostream>
#include<vector>
#include<string>
#include<stack>
#include<queue>
#include<thread>

using namespace std;

class Solution1 {
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
//add
int add(int a,int b){
	return a+b;
}

int main(){
    vector<int> nums = {2,7,11,15};
    int target=9;
    Solution1 a;
    vector<int> twoSum_result=a.twoSum(nums,target);
    for(int i=0;i<twoSum_result.size();i++){
        cout<<twoSum_result[i]<<endl;
    }
    cout<<"end"<<endl;
    return 0;
}



