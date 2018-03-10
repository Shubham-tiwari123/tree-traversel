#include<iostream>
using namespace std;
#include "reverselevelorder.h"
#include "treetraversal.h"
int main(){
    struct node *root  = newNode(30);
    root->left         = newNode(20);
    root->right        = newNode(13);
    root->left->left   = newNode(41);
    root->left->right  = newNode(50); 
    
    cout<<"\nPrinting postorder traversal:-\n";
    postorder(root);
    
    cout<<"\nPrinting inorder traversal:-\n";
    inorder(root);
    
    cout<<"\nPrinting preorder traversal:-\n";
    preorder(root);
    
    cout<<"\nPrinting reverse level order traversal:-\n";
    reverseLevelorder(root);
}