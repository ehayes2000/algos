//
// Created by eric on 9/5/20.
//
#include "Node.cpp"
#include <iostream>

template <class T>
class LinkedList{
public:
    Node<T> *head = nullptr;

    void append(T inData){
        if (!head){
            head = new Node<T>(inData);
        }
        else{
            Node<T> *i = head;
            while (i->next){
                i = i->next;
            }
            i->next = new Node<T>(inData);
        }
    }

    void remove(T data){

        if (head->data == data){
            Node<T> *remove = head;
            head = head->next;
            delete remove;
        }
        else if (head->next){
            Node<T> *prev = head;
            for (Node<T> *i = head->next; i; i = i->next){
                if (i->data == data){
                    prev->next = i->next;
                    delete i;
                    break;
                }
            }
        }
    }

    friend std::ostream &operator << (std::ostream &out, const LinkedList<T> &LL){
        Node<T> *i = LL.head;
        while (i->next){
            out << i->data << "->";
            i = i->next;
        }
        out << i->data;
        return out;
    }
};
