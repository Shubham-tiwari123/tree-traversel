#include<iostream>
using namespace std;
#include "reverselevelorder.h"
int main(){
    struct node *root  = newNode(30);
    root->left         = newNode(20);
    root->right        = newNode(13);
    root->left->left   = newNode(41);
    root->left->right  = newNode(50); 
    
    reverseLevelorder(root);
}