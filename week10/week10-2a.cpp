//week10-2.cpp 學習計畫 Math第1題(暴力for迴圈比較慢)
//LeetCode 1523. COUNT odd Numbers in an Lnrercal Range
class Solution {
public:
    int countOdds(int low, int high) {
       int ans = 0;
       for(int i=low; i<=high; i++){
        if (i%2==1) ans++;
       }
       return ans;
    }
};
