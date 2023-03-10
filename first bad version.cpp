https://leetcode.com/problems/first-bad-version/submissions/897056048/
class Solution {
 public:
  int firstBadVersion(int n) {
    int lowest_bad = n;
    int highest_true = 0;
    while (highest_true != lowest_bad - 1) {
      // preventing int overflow
      int check = lowest_bad + (highest_true - lowest_bad) / 2;
      if (!isBadVersion(check)) {
        highest_true = check;
      } else {
        lowest_bad = check;
      }
    }
    return lowest_bad;
  }
};
