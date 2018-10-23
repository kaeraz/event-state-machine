#ifndef LISTNODE_H
#define LISTNODE_H

#include <stddef.h>


template <typename T> class ListNode
{
public:
  ListNode(const T &data) : data(data)
  {
    next = NULL;
  };

  const T &data;
  ListNode<T> *next;
};

#endif /* end of include guard: LISTNODE_H */
