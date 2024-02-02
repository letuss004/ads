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
  int removeElement(vector<int> &nums, int val)
  {
    int p1 = 0, p2 = nums.size() - 1;
    int count = nums.size();
    while (p1 <= p2)
    {
      if (nums[p2] == val)
      {
        p2--;
        count--;
        continue;
      }

      if (nums[p1] == val)
      {
        nums[p1] = nums[p2];
        p2--;
        count--;
      }

      p1++;
    }
    return count;
  }
};

int main()
{
  Solution solution;
  vector<int> vector = {0, 1, 2, 2, 3, 0, 4, 2};
  cout << solution.removeElement(vector, 2) << endl;
  return 0;
}