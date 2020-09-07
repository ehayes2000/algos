//
// Created by eric on 9/5/20.
//
#include "Node.cpp"
#include <vector>
#include <iostream>

template <class T>
class BinaryTree{
public:
    int size;
    int height;

    //     invert node->L = node->R, node->R = node->L
    Node<T> *invert(Node<T> *root){

        if (not root){
            return root;
        }

        Node<T> *R = invert(root->R);
        Node<T> *L = invert(root->L);

        root->R = L;
        root->L = R;
        return root;
    }

    // find the maximum depth of a binary tree
    int getHeight(Node<T> *root){
        if (not root){
            return 0;
        }
        int heightL = getHeight(root->L);
        int heightR = getHeight(root->R);
        if (heightL > heightR){
            return heightL + 1;
        }
        else{
            return heightR + 1;
        }

    }
    // TODO simplify traversals and use Node<T>* return instead of int*
    int *Inorder(Node<T> *root){
        static int *traversal = new int[size];
        static int iter;
        if (root->L){
            Inorder(root->L);
        }
        traversal[iter] = root->data;
        iter ++;
        if (root->R) {
            Inorder(root->R);
        }
        return traversal;
    }

    // root left right
    int *Preorder(Node<T> *root){
        static int *traversal = new int[size];
        static int iter;

        traversal[iter] = root->data;
        iter ++;

        if (root->L){
            Preorder(root->L);
        }
        if (root->R){
            Preorder(root->R);
        }
        return traversal;
    }

    //left right root
    int *Postorder(Node<T> *root){
        static int *traversal = new int[size];
        static int iter;

        if (root->L){
            Postorder(root->L);
        }
        if (root->R){
            Postorder(root->R);
        }
        traversal[iter] = root->data;
        iter++;
        return traversal;
    }
};
