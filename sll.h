#include <iostream>


class SLL {
    struct Node {
            int data;
            Node *next;
    };
    
    public:
        SLL() : head(NULL){};
        Node *prependNode(int data);
        Node *appendNode(int data);
        Node *popNode();
        void deleteList();
        void printList();

    private:
        Node* head;
};


