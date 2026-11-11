//week10-2.cpp 學習計畫 Math第1題(數學方法，精簡、漂亮、快速)
//LeetCode 1523. COUNT odd Numbers in an Lnrercal Range
class Solution {
public:
    int countOdds(int low, int high) {
       int ans = (high - low) / 2;
       if(low%2==1 || high%2==1) ans++;
       return ans;
    }
};
