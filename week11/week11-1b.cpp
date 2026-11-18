//week11-1b.cpp學習計畫 Linked List 第1題
//LeetCode 21. Merge Two Sorted Lists
//想要用一些範例的程式[鷹架]
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode * ans = new ListNode(999);
        ListNode * now = ans;
        while (list1 != nullptr && list2 !=nullptr){//改成都要有
            if(list1 ->val< list2->val){//左邊小,放左邊
                now->next = new ListNode(list1->val);
                list1 = list1->next;
            } else { //否則, 就是右邊小, 放右邊
                    now->next = new ListNode(list2->val);
                    list2 = list2->next;
        }
         now  = now->next;
         }
        if (list1) now->next = list1;//如果list1有剩,就接到後面
        if (list2) now->next = list2;//如果list2有剩,就接到後面
         return ans->next;
 }
 };
