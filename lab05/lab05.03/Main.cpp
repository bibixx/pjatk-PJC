#include <iostream>
using namespace std;

struct Node {
  int data;
  Node* next;
};

void printList(Node* head) {
  if (head == nullptr) {
    return;
  }

  cout << head->data << endl;

  printList(head->next);
}

bool search(Node* current, int serachedData) {
  if (current == nullptr) {
    return false;
  }

  if (current->data == serachedData) {
    return true;
  }

  return search(current->next, serachedData);
}

bool add(Node*& head, int data) {
  if (search(head, data)) {
    return false;
  }

  Node* nextHead = new Node;
  nextHead->data = data;
  nextHead->next = head;

  head = nextHead;

  return true;
}

int main() {
  int tab[] = { 1, 4, 1, 3, 5 };
  Node* head = 0;

  for (size_t i = 0, e = sizeof(tab) / sizeof(int); i != e; ++i) {
    bool b = add(head,tab[i]);
    cout << tab[i] << (b ? "     " : " NOT ") << "added" << endl;
  }

  printList(head);

  return 0;
}
