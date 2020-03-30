
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *left;
    node *right;
    node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

int CalculateSize(node *node){
    if(node == NULL){
        return 0;
    }
    else{
        return(CalculateSize(node->left) + 1 + CalculateSize(node->right));
    }
}

int main(){
    node *root = new node(1);
    cout << CalculateSize(root);
   return 0;
}

