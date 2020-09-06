//
// Created by eric on 9/5/20.
//
template <class T>
struct Node{
    T data;
    Node *next = nullptr;

    Node(T inData){
        data = inData;
    }

    void insert(T inData){
        Node *insertNode = new Node<T>(inData);
        insertNode->next = next;
        next = insertNode;
    }
};

