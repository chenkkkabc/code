typedef int Item;
typedef struct Node* SinglyLinkedList;
typedef struct Node* CircularLinkedList;
struct Node {
  Item item;
  struct Node* next;
};

typedef struct DNode* DoublyLinkedList;
struct DNode {
  Item item;
  struct DNode* prev;
  struct DNode* next;
};

void slist_append(SinglyLinkedList, Item);
void slist_prepend(SinglyLinkedList, Item);
