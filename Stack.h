#include "LinkedList.h"

template <class T>
class Stack : public LinkedList<T>{
	public:
		bool Delete (T  &element){
			if(this->first==0)
				return false;
			Node<T> *current=this->first;
			Node<T> *next=this->first->link;
			current=next;
			element=current->data;
			delete current;
			this->current_size--;
			return true;
			}
};
