// week03-2.cpp 學習計畫 Basic第6題
// LeetCode 283. Move Zeroes
//
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k = 0; //目標放在哪裡 nums[k]
        for (int num : nums){ //C++進階 for迴圈
            if (num != 0){//把不是0的都移到左邊
                nums[k] = num; //把數字放左邊
                k++;//換下一格
            }
        }
        //把殘留的，都變成0
        for (int i=k; i<nums.size(); i++){
            nums [i] = 0;
        }
    }
};
