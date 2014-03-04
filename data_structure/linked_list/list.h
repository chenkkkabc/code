typedef int Item;
typedef struct Node* SinglyLinkedList;
typedef struct Node* CircularLinkedList;
struct Node {
  Item item;
  struct Node* next;
};

typedef struct Node* DoublyLinkedList;
struct DNode {
  Item item;
  struct DNode* prev;
  struct DNode* next;
};
