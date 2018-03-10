#ifndef TREETRAVERSAL_H
#define TREETRAVERSAL_H

struct node{
    int data;
    struct node* left;
    struct node* right;
}*temp,*newnode;
struct node* newNode(int data){
    newnode = new node;
    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;
 
    return(newnode);
}
void postorder(struct node* temp){
    if (temp == NULL)
       return;
    postorder(temp->left);
    postorder(temp->right);
    cout<<temp->data<<"\t";
}
void inorder(struct node* temp){
    if (temp == NULL)
       return;
    inorder(temp->left);
    cout<<temp->data<<"\t";
    inorder(temp->right);
}
void preorder(struct node* temp){
    if (temp == NULL)
       return;
    cout<<temp->data<<"\t";
    preorder(temp->left);
    preorder(temp->right);
}

#endif 

