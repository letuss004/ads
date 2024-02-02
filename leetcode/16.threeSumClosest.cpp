#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
#include <array>
#include <climits>

using namespace std;

class Solution
{
public:
  int threeSumClosest(vector<int> &nums, int target)
  {
    sort(nums.begin(), nums.end());
    int result = 0;
    int closet = INT_MAX;

    for (size_t base = 0; base < nums.size() - 2; base++)
    {
      int p1 = base + 1, p2 = nums.size() - 1;
      while (p1 < p2)
      {
        int sum = nums[base] + nums[p1] + nums[p2];
        int distance = abs(sum - target);

        if (!distance)
          return target;

        if (distance < closet)
        {
          closet = distance;
          result = sum;
        }

        sum <= target ? p1++ : p2--;
      }
    }
    return result;
  }
};