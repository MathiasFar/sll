#include "sll.h"

int main() {
    SLL sll;
    sll.appendNode(4);
    sll.appendNode(3);
    sll.appendNode(8);
    sll.appendNode(7);
    sll.prependNode(1);

    sll.printList();
    sll.deleteList();
    return 0;
}
