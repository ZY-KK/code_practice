#include<iostream>

typedef struct Node{
    int val=0;
    struct Node *nextNode;
}NODE;

NODE* sort(NODE *pi){
    NODE *ptr = pi;
    while(pi->nextNode!=NULL){
        int val = ptr->val;
        NODE *p1 = pi;
        NODE *p2 = pi;
        while(p2->nextNode!=NULL){
            if(p2->val>val)
            {
                int temp = p2->val;
                NODE *tempPtr = p2->nextNode;
                p2->val=val;
                p1->val = temp;
                p2->nextNode = p1;
                p1->nextNode = tempPtr->nextNode;
                

            }
            p2 = p1->nextNode;
            
        }
        p1=ptr->nextNode;
        ptr = ptr->nextNode;
        return pi;
    }
}

void print(NODE *p){
    NODE *ptr = p;
    while(ptr->nextNode!=NULL){
        std::cout<<ptr->val<<" ";
        ptr = ptr->nextNode;
    }
}
int main(){
    int n=0;
    std::cin>>n;
    NODE *p_1r;
    for(int i=0; i<n;i++){
        
        NODE *currentNode;
        p_1r->nextNode=currentNode;
        int val=0;
        std::cin>>val;
        currentNode->val=val;
        p_1r = currentNode;
    }
    int m=0;
    std::cin>>m;
    NODE *p_2r;
    for(int j=0;j<m;j++){
        NODE *currentNode;
        p_2r->nextNode=currentNode;
        int val=0;
        std::cin>>val;
        currentNode->val=val;
        p_2r = currentNode;
    }
    NODE *sorted = sort(p_1r);
    print(sorted);

}