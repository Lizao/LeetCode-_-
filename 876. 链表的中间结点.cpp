/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) 
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
      ListNode*cur=head->next;
      ListNode*prev=head;
      while(cur)
      {
        if(cur)
        {
          cur=cur->next->next;
        }
        else
        {
          cur=cur->next；
        }
        prev=prev->next;
      }
    }
}

本题有两种模型：
（1）第一种链表的节点个数为奇数，我们可以定义两个指针来标记，
     第一个指针为每次走一步，第二个指针每次走两步，
     当第二个指针走到尾的时候，第一个指针也就到了中间位置
（2）第二种链表的节点个数为偶数，当第二个节点每次走两次时容易出错，
     走到最后的位置时容易访问越界，
     所以我们加一个判断，当第二个指针的next为空时，
     它向后走一步，所以第一个指针会多走一步，指向题目要求的第二个节点

