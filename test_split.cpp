/*
CSCI 104: Homework 1 Problem 1

Use this file to test your split.cpp file.

Create linked lists and split them with your split() function.

You can compile this file like this:
g++ split.cpp test_split.cpp -o test_split
*/

#include "split.h"

void deleteNode(Node* node) {
  if (node == nullptr) {
    return;
  }
  deleteNode(node->next);
  delete node;
}

int main(int argc, char* argv[])
{
  Node* head = new Node{1, new Node{2, new Node{3, new Node{4, nullptr}}}};
  Node* odds = nullptr;
  Node* evens = nullptr;

  split(head, odds, evens);

  deleteNode(odds);
  deleteNode(evens);


}
