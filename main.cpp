#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool canJump(vector<int> &nums) {
        if (nums.size() == 1)
            return true;
        bool canJump = true;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                int j = 1;
                canJump = false;
                while (i >= j) {
                    if (i == nums.size() - 1 && nums[i - j] >= j)
                        return true;
                    if (nums[i - j] > j) {
                        canJump = true;
                        break;
                    }
                    j++;
                }
                if (canJump)
                    continue;
                return canJump;
            }
        }
        return canJump;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    vector<int> nums = {2, 0, 0};
    Solution s;

    cout << s.canJump(nums) << endl;
    return 0;
}