#ifndef LISTNODE_H
#define LISTNODE_H

#include <stddef.h>


template <typename T> class ListNode
{
public:
  ListNode(T *data) : data(data)
  {
    next = NULL;
  };

  T *data;
  ListNode<T> *next;
};

#endif /* end of include guard: LISTNODE_H */
