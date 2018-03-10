#ifndef REVERSELEVELORDER_H
#define REVERSELEVELORDER_H
#include "treetraversal.h"
#include<stack>
#include<queue>
void reverseLevelorder(struct node* root){
    stack<node *> s;
    queue<node *> q;
    q.push(root);
    while(q.empty() == false){
        root = q.front();
        q.pop();
        s.push(root);
        if(root->right)
            q.push(root->right);
        if(root->left)
            q.push(root->left);
    }
    while(s.empty()==false){
        root = s.top();
        cout<<root->data<<"\t";
        s.pop();
    }
    
}
#endif 

