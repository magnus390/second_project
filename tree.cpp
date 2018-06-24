#include<bits/stdc++.h>
using namespace std;
int a[1000],n=0;
struct node 
{
    int data;
  	struct node *left;
    struct node *right;  
};
 
/* newNode() allocates a new node with the given data and NULL left and 
   right pointers. */

struct node* newNode(int data)
{
	n++;
  // Allocate memory for new node 
  struct node* node = (struct node*)malloc(sizeof(struct node));
 
  // Assign data to this node
  node->data = data;
 
  // Initialize left and right children as NULL
  node->left = NULL;
  node->right = NULL;
  return(node);
}
void print(struct node* var)
{
	a[0]=var->data;
	cout<<a[0];
	
}
int main()
{
	
  /*create root*/
  struct node *root = newNode(1);  
  /* following is the tree after above statement 
 
        1
      /   \
     NULL  NULL  
  */
   
 
  root->left        = newNode(2);
  root->right       = newNode(3);
  /* 2 and 3 become left and right children of 1
           1
         /   \
        2      3
     /    \    /  \
    NULL NULL NULL NULL
  */
 
 
  root->left->left  = newNode(4);
  root->left->right  = newNode(5);
  root->right->left  = newNode(6);
  
  /* 4 becomes left child of 2
           1
       /       \
      2          3
    /   \       /  \
   4    NULL  NULL  NULL
  /  \
NULL NULL
*/
  print(root);
  return 0;
}
