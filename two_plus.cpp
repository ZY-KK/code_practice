#include <iostream>

struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x):val(x), next(NULL){}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2){
    ListNode* result=new ListNode(-1);
    ListNode* r = result;
    bool carry =false;

    while(l1!=NULL||l2!=NULL){
        int sum=0;
        if(l1!=NULL){
            sum+=l1->val;
            l1 = l1->next;
        }
        if(l2!=NULL){
            sum+=l2->val;
            l2=l2->next;
        }
        if(carry){
            sum++;
        }
        r->next = new ListNode(sum%10);
        r = r->next;
        carry = sum>=10? true: false;
    }
    if(carry){
        r->next = new ListNode(1);
    }

    return  result->next;

}
int main(){
    ListNode* l = new ListNode(1);
    int val = l->next ? l->next->val: 10;
    std::cout<<val<<std::endl;

}