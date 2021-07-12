#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) 
    {
        map<int,int> mp;
        for(int i = 0; i < nums.size(); i++)
        {
            auto it = mp.find(target - nums[i]);
            if(it != mp.end())
            {
                return vector<int> {i, it->second};
            }
            mp[nums[i]] = i;
        }
        return vector<int> {0,0};
    }
};

int main()
{
	
}
