#include <iostream>

using namespace std;


struct Node {
    int data;
    Node *next;
};

Node *head = NULL;

Node *prependNode(int data) {
    Node *new_ = new Node;
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

Node *popNode() {
    if(head->next == NULL) {
        delete head;
        return nullptr;
    }
    Node *current = head;
    Node *previous = NULL;
    while (current->next != NULL) {
        previous = current;
        current = current->next;
    }
    previous->next = NULL;
    delete current;
    return previous;
}

void printList() {
    Node *current = head;
    while (current != NULL) {
        cout<<current->data;
        if(current->next != NULL) {
            cout<<" -> ";
        }
        current=current->next;
    }
    cout<<endl;
}

int main() {
    prependNode(5);
    prependNode(2);
    prependNode(11);
    printList();

    popNode();
    printList();
    return 0;
}
