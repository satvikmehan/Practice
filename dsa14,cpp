#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int singleNonDuplicate(vector<int> &nums)
{
    int st = 1, end = nums.size() - 2;
    if (nums.size() == 1)
    {
        return nums[0];
    }
    if (nums[0] != nums[1])
    {
        return nums[0];
    }
    else if (nums[end + 1] != nums[end])
    {
        return nums[end + 1];
    }
    else
    {
        while (st <= end)
        {
            int mid = st + (end - st) / 2;
            if (nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1])
            {
                return nums[mid];
            }
            if (mid % 2 == 0)
            {
                if (nums[mid] == nums[mid - 1])
                {
                    end = mid - 1;
                }
                else
                {
                    st = mid + 1;
                }
            }
            else
            {
                if (nums[mid] == nums[mid - 1])
                {
                    st = mid + 1;
                }
                else
                {
                    end = mid - 1;
                }
            }
        }
    }

    return -1;
}

int main()
{
    vector<int> nums = {1, 1, 2, 3, 3, 4, 4, 8, 8};

    cout << singleNonDuplicate(nums);

    return 0;
}