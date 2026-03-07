#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* binaryTree(){

    int x;
    cin >> x;

    if(x == -1) return NULL;

    Node* root = new Node(x);

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){

        Node* temp = q.front();
        q.pop();

        int first, second;

        cin >> first;

        if(first != -1){
            temp->left = new Node(first);
            q.push(temp->left);
        }

        cin >> second;

        if(second != -1){
            temp->right = new Node(second);
            q.push(temp->right);
        }
    }

    return root;
}

void printTree(Node* root){

    if(root == NULL) return;

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){

        Node* temp = q.front();
        q.pop();

        cout << temp->data << " ";

        if(temp->left)
            q.push(temp->left);

        if(temp->right)
            q.push(temp->right);
    }
}

int main(){

    Node* root = binaryTree();

    printTree(root);

    return 0;
}
