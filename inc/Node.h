//
// Created by alonso on 8/23/18.
//

#ifndef TRAINCOMPOSITION_NODE_H
#define TRAINCOMPOSITION_NODE_H


class Node {
public:
    Node(int i):data{i}, right{nullptr},left{nullptr}{}

    int getValue(){
        return data;
    }

    void setValue(int data){
        data = data;
    }

    void setRight(Node* node){
        right = node;
    }

    Node* getRight(){
        return right;
    }

    void setLeft(Node* node){
        left = node;
    }

    Node* getLeft(){
        return left;
    }


private:
    int data{};
    Node* right;
    Node* left;

};


#endif //TRAINCOMPOSITION_NODE_H
