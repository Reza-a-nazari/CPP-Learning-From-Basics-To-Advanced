    #include <vector>
    #include <iostream>
    using namespace std ;

    class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            for(int i =0 ; i<nums.size() ; i++)
            {
                for( int j =i+1 ; j< nums.size() ; j++)
                {
                    if(nums[i] + nums[j] == target)
                    {
                        return {i,j};
                    }
                    
                }
            }
            return {};
        }
    };

    int main()
    {
        vector<int> myV = {1,2,8,14,16};

        Solution a  ; 
        
        vector<int> result = a.twoSum(myV,30);

        cout<<"["<<result[0]<<","<<result[1] <<"]";
    }