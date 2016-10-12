typedef int Item;
struct Node {
  Item item;
  Node* next;
};
typedef Node* SinglyLinkedList;
typedef Node* CircularLinkedList;

struct DNode {
  Item item;
  DNode* prev;
  DNode* next;
};
typedef DNode* DoublyLinkedList;

