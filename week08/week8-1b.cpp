// week08-1b.cpp 學習計畫 Matrix 第1題 最有錢的錢
// LeetCode 1672. Richest Customer wealth
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
         int M = accounts.size(), N = accounts[0].size();
          int ans = 0; //最有錢的人，有多少錢?(先設成0)
         for (int i=0; i<M; i++){ //左手i 範圍M
             int now = 0; //小迴圈前面now是a
             for (int j=0; j<N; j++){//右手j 範圍N
                now += accounts[i][j];// 小迴圈中間 now +=
         }
         if ( now > ans) ans = now; // 小迴圈後面now拿來用
         }
        return ans;
    }
};
