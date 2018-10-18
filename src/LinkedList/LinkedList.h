#ifndef SRC_LINKEDLIST_LINKEDLIST_H_
#define SRC_LINKEDLIST_LINKEDLIST_H_

#include <stddef.h>

/*
 * Based on: https://github.com/ivanseidel/LinkedList/blob/master/LinkedList.h
 */


template <class T>
struct ListNode
{
   T data;
   ListNode<T> *next;
};


template <typename T>
class LinkedList
{
   protected:
      ListNode<T> *_root;
      ListNode<T> *_last;
      int _size;

   public:
      LinkedList();

      int size();
      ListNode<T *> get(int index);
      void insert(T *);
};




template<typename T>
LinkedList<T>::LinkedList()
{
   _root = NULL;
   _last = NULL;
   _size = 0;
}

template<typename T>
int LinkedList<T>::size()
{
   return _size;
}

template<typename T>
ListNode<T *> LinkedList<T>::get(int index)
{

}

template<typename T>
void LinkedList<T>::insert(T *_t)
{
   if (NULL == _t) return;


}

#endif /* SRC_LINKEDLIST_LINKEDLIST_H_ */
