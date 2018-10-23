#ifndef SRC_MAIN_CPP_
#define SRC_MAIN_CPP_

#include "src/LinkedList/LinkedList.h"
#include "src/globals.h"

int main(void)
{
  cout << "Start of example..." << endl;

  LinkedList<int> l = LinkedList<int>();

  int data_A = 1;
  int data_B = 2;
  int data_C = 3;
  ListNode<int> node_A = {&data_A, NULL};
  ListNode<int> node_B = {&data_B, NULL};
  ListNode<int> node_C = {&data_C, NULL};

  l.insert(&node_A);
  l.insert(&node_B);
  l.insert(&node_C);

  for (int i = 0; i < l.size(); i++)
  {
    cout << "List node " << i << " with value of " << *l.get(i)->data << endl;
  }

  cout << "End of example..." << endl;
  return 1;
}

#endif /* SRC_MAIN_CPP_ */
