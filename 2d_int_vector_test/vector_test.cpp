#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool findNum(int target, vector<vector<int>> nums)
    {
        int size = nums.size();
        vector<int> first_num;
        for (int i = 0; i < size; i++)
        {
            first_num.push_back(nums[i][0]);
        }
        int row = findTheClosestNum(target, first_num);
        vector<int> row_vec;
        for (int i = 0; i < nums[row].size(); i++)
        {
            row_vec.push_back(nums[row][i]);
        }
        int res = binarySearch(target, row_vec);
        if (res == -1)
            return false;
        else
            return true;
    }

private:
    int binarySearch(int target, vector<int> nums)
    {
        int left = 0;
        int right = nums.size() - 1;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target)
                return mid;
            else if (nums[mid] < target)
                left = mid + 1;
            else
                right = mid - 1;
        }
        return -1;
    }

    int findTheClosestNum(int target, vector<int> nums)
    {
        int temp = 0;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            while (abs(nums[temp] - target) > abs(nums[temp + 1] - target))
                temp++;
        }
        return temp;
    }
};

int findTheClosestNum(int target, vector<int> nums)
{
    int temp = 0;
    while (abs(nums[temp] - target) > abs(nums[temp + 1] - target))
        temp++;
    return temp;
}

int main()
{
    vector<vector<int>> nums{{1, 2, 3, 4}, {5, 6, 7, 8}};
    Solution s;
    cout << nums[1].size() << endl;
    bool res = s.findNum(2, nums);
    cout << res;
}