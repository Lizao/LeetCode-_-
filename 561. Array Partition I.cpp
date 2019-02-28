#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        std::sort(nums.begin(),nums.end());
		int s = 0;
		
		for(int ix =0;ix<nums.size();ix=ix+2)
		{
			s = s +  nums[ix];
		} 
	    return s;
    }
};

int main(int argc, char** argv) {
	Solution s;
	std::cout << s.arrayPairSum([9,4,5,2,4,56,35,89]) << std::endl;
	return 0;
}
