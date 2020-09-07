//
// Created by eric on 9/5/20.
//
#include <string>
template <class T>
class Node{
public:
    T data;
    Node *R, *L;

    Node(T newData){
        data = newData;
        R = nullptr;
        L = nullptr;
    }
    std::string &operator<<(std::string &o){
        return data;
    }
};