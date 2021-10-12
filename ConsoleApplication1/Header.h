#ifndef LIST_HEAD
#define LIST_HEAD

class List{
private:

  typedef  struct node{
        int data;
        node* next;
    }* nodePtr;
  nodePtr head = NULL;
    nodePtr curr;
    nodePtr temp;
public:
    List();
    void bubbleSort();
    void swap(nodePtr a, nodePtr b);
    void AddNode(int addData);
    void DeleteNode(int delData);
    void Push(int addData);
    void AddAtSpecified(int position,int addData);// ne e gotova
    void PrintList();
};

#endif