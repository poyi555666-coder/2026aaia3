// week07-2.cpp 學習計畫 Simulation 第3題 不easy的easy題
//  LeetCode 1275. Find Winner on a Tic Tac Toe Game
class Solution {
public: // 大資料結構 moves 裡面放 中資料結構 move 裡面放小資料結構 int 的 i,j
    string tictactoe(vector<vector<int>>& moves) {
        int a[3][3] = {0}; // C語言的2維陣列， 裡面都是0
        int who = 1;       // 1:A, 2:B現在到[誰]
        string whoTable[3] = {"Draw","A","B"};
        for (vector<int> move : moves) {
            int i = move[0], j = move[1];
            a[i][j] = who; /// 要放會變動的[誰]
            // 暫時停在這裡， 下課10分鐘
            if (a[0][0] == a[0][1] && a[0][1] == a[0][2] && a[0][2] == who)return whoTable[who];
            if (a[1][0] == a[1][1] && a[1][1] == a[1][2] && a[1][2] == who)return whoTable[who];
            if (a[2][0] == a[2][1] && a[2][1] == a[2][2] && a[2][2] == who)return whoTable[who];

            if (a[0][0] == a[1][0] && a[1][0] == a[2][0] && a[2][0] == who)return whoTable[who];
            if (a[0][1] == a[1][1] && a[1][1] == a[2][1] && a[2][1] == who)return whoTable[who];
            if (a[0][2] == a[1][2] && a[1][2] == a[2][2] && a[2][2] == who)return whoTable[who];

            if (a[0][0] == a[1][1] && a[1][1] == a[2][2] && a[2][2] == who)return whoTable[who];
            if (a[2][0] == a[1][1] && a[1][1] == a[0][2] && a[0][2] == who)return whoTable[who];
            if (who == 1) who = 2;// 換2:B
            else who = 1; // 換1:A
           // myShowTable(a);暫時列印出來
        }
        //return "A"; // 亂寫"A"會得勝
        if(moves.size()==9)return "Draw";// 平手
        else return "Pending";//還沒有下完
    }
    void myShowTable(int a[3][3]) { // 自己寫的，秀板子的程度
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << a[i][j] << " ";
            }
            cout << "\n";
        }
        cout << "\n";
    }
};
