// week06-4.cpp 學習計畫 Simulation 第1題
// LeetCode 682. Baseball Game
// 5: 陣列裡 5
// 2: 陣列裡 5 2
// C: 陣列裡 5 (劃掉最後的2)
// D: 陣列裡 5 10 15 (最後的5,變2倍, 塞入)
// +: 陣列裡 5 10 15 (最後2個數 5+10變15, 塞入)
// 答案是， 把所有的數加入
class Solution {
public: // week02 教 string, week03 教 vector<int>
    int calPoints(vector<string>& operations) {
        // 遇到 Simulation 模擬, 就用 for迴圈， 一步步做
        // week03 week04 教過 C++進階for迴圈 for(char c : s) for (int num : a)
        vector<int> a;                // 迴圈前面 伸縮自如的C++的陣列
        for (string s : operations) { // 大資料結構vector裡, 裝小資料結構string
            if (s == "C") {
                a.pop_back();
            } else if (s == "D") {
                a.push_back(a[a.size() - 1] * 2);
            } else if (s == "+") {
                a.push_back(a[a.size() - 2] + a[a.size() - 1]);
            } else { // 剩下的 就是單純的放入數字 (可能是很多萬的數字)
                // Google: C++ string to int
                // 有三種方法 可以把 string 變int整數
                // a.push_back(stoi(s)); //方法1 stoi(s) 在 C++11 最簡單的方法
                // a.push_back(atoi(s.c_str()) ); //方法2: atoi((s,c_str())
                // 轉換成傳統C語言的方法
                // 方法3: 上周教過的 stringstream 字串便串流，再流到答案裡
                int now;
                stringstream ss(s);
                ss >> now;
                a.push_back(now);
            }
        }
        int ans = 0; // 迴圈前面ans是0
        for (int num : a) {
            ans += num; // 迴圈中間ans慢慢加
        }
        return ans; // 迴圈後面 ans拿來用
    }
};
