#include "SLL.h"
#include <iostream>

SLL::Node* SLL::prependNode(int data) {
    SLL::Node *new_ = new SLL::Node();
    if(head == NULL) {
        new_->data = data;
        head = new_;
        new_->next = NULL;
    } else {
        new_->next = head;
        new_->data = data;
        head=new_;
    }
    return new_;
}


SLL::Node* SLL::appendNode(int data) {
    SLL::Node *new_ = new SLL::Node();
    new_->next = NULL;
    new_->data = data;
    if(head == NULL) {
        head = new_;
    } else {
        SLL::Node *current = head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = new_;
    }
    return new_;
}

SLL::Node* SLL::popNode() {
    if(head== NULL) {
        delete head;
        return nullptr;
    }
    SLL::Node *current{head};
    SLL::Node *previous {NULL};
    while (current->next != NULL) {
        previous = current;
        current = current->next;
    }
    previous->next = NULL;
    delete current;
    return previous;
}

void SLL::deleteList() {
    SLL::Node *current = head;
    while(current != NULL) {
        SLL::Node *temp = current;
        current = current->next;
        delete temp;
    }
    head = NULL; 
}

void SLL::printList() {
    SLL::Node *current {head};
    while (current != NULL) {
        std::cout<<current->data;
        if(current->next != NULL) {
            std::cout<<" -> ";
        }
        current=current->next;
    }
    std::cout<<std::endl;
}
