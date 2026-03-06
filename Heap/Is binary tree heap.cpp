/*
class Node {
   public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    int count(Node* tree){
        if(!tree) return 0;
        return 1+count(tree->left)+count(tree->right);
    }
    bool cbt(Node* tree,int i,int num){
        if(!tree) return 1;
        if(i>=num) return 0;
        return cbt(tree->left,2*i+1,num)&&cbt(tree->right,2*i+2,num);
    }
    
    bool maxheap(Node* tree){
        if(tree->left){
            if(tree->data < tree->left->data){
                return 0;
            }
            if(!maxheap(tree->left)){
                return 0;
            }
        }
        if(tree->right){
             if(tree->data < tree->right->data){
                return 0;
            }
            if(!maxheap(tree->right)){
                return 0;
            }
        }
        return 1;
    }
    bool isHeap(Node* tree) {
        int num=count(tree);
        
        if(!cbt(tree,0,num)){
            return 0;
        }
    
        return maxheap(tree);
        
    }
};