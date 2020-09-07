#include <iostream>
#include "BinaryTree.cpp"


using namespace std;
int main() {



    Node<int> *A = new Node<int>(1);
    Node<int> *B = new Node<int>(2);
    Node<int> *C = new Node<int>(3);
    Node<int> *D = new Node<int>(4);


    // TODO This tree causes an error
    // why
    A->L = B;
    B->L = C;
    B->R = D;
//    A->L = B;
//    A->R = C;
//    C->L = D;


    BinaryTree<int> BT;
    BT.size = 5;

    A = BT.invert(A);

    int *b = new int[5];
    int *c = new int[5];

    int *a = BT.Preorder(A);
    cout << "Preorder: ";
    for (int i = 0; i < 5; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    a = BT.Inorder(A);
    cout << "Inorder: ";
    for (int i = 0; i < 5; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    a = BT.Postorder(A);
    cout << "Postorder: ";
    for (int i = 0; i < 5; i++){
        cout << a[i] << " ";
    }
}

