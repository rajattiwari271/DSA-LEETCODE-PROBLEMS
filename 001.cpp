#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        for (int i = 0; i < nums.size(); i++) {

            int j = i + 1;

            while (j < nums.size()) {

                if (nums[i] == nums[j]) {
                    nums.erase(nums.begin() + j);
                }
                else {
                    j++;
                }
            }
        }

        return nums.size();
    }
};

int main() {

    vector<int> nums = {1, 1, 2, 2, 3};

    Solution obj;

    int k = obj.removeDuplicates(nums);

    cout << "Unique elements: " << k << endl;

    cout << "Array: ";

    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }

    cout << endl;

    return 0;
}