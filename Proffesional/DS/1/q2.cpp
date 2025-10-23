    #include <vector>
    #include <iostream>
    using namespace std ;
    #include <unordered_map>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int j = nums.size()-1;
        unordered_map<int,int> mp ; 
        for(int i=0 ; i<nums.size();i++)
        {
            
            int temp = target - nums[i] ;
            if(mp.count(temp))
            {
                return {mp[temp],i};
            }
            mp[nums[i]] = i;
        }
        return {};
    }
};


int main()
{
    vector<int> myv = {1,2,3,5,8,100};

        Solution a  ; 
        
        vector<int> result = a.twoSum(myv,101);

        cout<<"["<<result[0]<<","<<result[1] <<"]";
}