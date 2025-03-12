#include "llrec.h"

//*********************************************
// Provide your implementation of llpivot below
//*********************************************
void llpivot(Node *&head, Node *&smaller, Node *&larger, int pivot) { //follows same logic as my split in hw1. Appends to each list and deletes input
    if (head != nullptr) {
        if (head->val > pivot) {
            append(larger, head);
        }
        else {
            append(smaller, head);
        }
        llpivot(head->next, smaller, larger, pivot);
        clearInput(head);
    }
}
void append(Node*& List, Node*& in) {
    if (List == nullptr) {
        List = new Node(in->val, nullptr);
        return;
    }
    if (List->next == nullptr) {
        List->next = new Node(in->val, nullptr);
    }
    else {
        append(List->next, in);
    }
}
void clearInput(Node*& in) {
    if (in != nullptr) {
      Node* temp = in;
      in = in->next;
      delete temp;
      clearInput(in);
    }
  }
