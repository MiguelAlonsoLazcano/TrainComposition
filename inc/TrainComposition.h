//
// Created by alonso on 8/23/18.
//

#ifndef TRAINCOMPOSITION_TRAINCOMPOSITION_H
#define TRAINCOMPOSITION_TRAINCOMPOSITION_H

#include <iostream>
#include <Node.h>


class TrainComposition {
public:
    TrainComposition():head{nullptr}, tail{ nullptr}{
    }
    TrainComposition(int i):head{new Node(i)}{
        tail = head;
    }

    std::string printTrainComposition(){
        if(head == nullptr)
            return "isEmpty";
        Node* t = head;
        do{
            std::cout << t->getValue() << ' ';
            Node* a = t->getLeft();
            t = a;
        }while(t != nullptr);

    }

    void attachWagonFromLeft(int wagonId)
    {
        if (head != nullptr){
            Node *x = new Node(wagonId);
            Node *t = tail;
            tail->setLeft(x);
            x->setRight(t);
            tail = x;
        }
        if(head == nullptr) {
            head = new Node(wagonId);
            tail = head;
        }

    }

    void attachWagonFromRight(int wagonId)
    {
        if (head != nullptr){
            Node *x = new Node(wagonId);
            Node *t = head;
            head->setRight(x);
            x->setLeft(t);
            head = x;
        }
        if(head == nullptr){
            head = new Node(wagonId);
            tail = head;
        }

    }

    int detachWagonFromLeft()
    {
        int i = 0;
        if (tail != nullptr){
            i = tail->getValue();
            Node *t = tail->getRight();
            tail = t;
        }
        return i;
    }

    int detachWagonFromRight()
    {
        int i = 0;
        if(head != nullptr){
            i = head->getValue();
            Node *t = head->getLeft();
            head = t;
        }
        return i;
    }

private:
    Node* head;
    Node* tail;
};


#endif //TRAINCOMPOSITION_TRAINCOMPOSITION_H
