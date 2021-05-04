#include<bits/stdc++.h>   
using namespace std; 
#define val 10 

class Tree{
  public:
  int num; 
  Tree *left, *right; 
  Tree(int num){
    this->num= num;
    this->left= NULL;
    this->right= NULL;
  }
}; 
void Ptree(Tree *root, int list){
  if (root== NULL) 
  return; 
  list+= val; 
  Ptree(root->right, list); 
  cout<< endl; 
  for (int i= val; i< list; i++) 
  cout<<" "; 
  cout<< root->num<< "\n"; 
  Ptree(root->left, list); 
} 
void PrintT(Tree *root){
  Ptree(root, 0); 
} 
int main(){
  Tree *root= new Tree(1); 
  root->left= new Tree(2); 
  root->right= new Tree(2);  
  root->left->left= new Tree(3); 
  root->left->right= new Tree(3); 
  root->right->left= new Tree(3); 
  root->right->right= new Tree(3); 
  root->left->left->left= new Tree(4); 
  root->left->left->right= new Tree(4); 
  root->left->right->left= new Tree(4); 
  root->left->right->right= new Tree(4); 
  root->right->left->left= new Tree(4); 
  root->right->left->right= new Tree(4); 
  root->right->right->left= new Tree(4); 
  root->right->right->right= new Tree(4); 
  PrintT(root); 
  return 0; 
} 