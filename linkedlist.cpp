#include<iostream>
using namespace std;

/*This is basic implementation of Linked List meant for quick coding purpose only*/
class Node
{
public:
    int data;
    Node* next;
    Node(int _data): data(_data), next(NULL){}
};

class LinkedList
{
public:
    Node* head;
    LinkedList(): head(NULL){}
    LinkedList(int data): head(new Node(data)){}
    
    void print(){
        Node* tempHead = head;
        while(tempHead != NULL)
        {
            cout << tempHead->data << endl;
            tempHead = tempHead->next;
        }
    }
    
    Node* addLast(int data)
    { 
        if(head != NULL)
        {
            Node* lastNode = head;
            while(lastNode->next != NULL)
            {
                lastNode = lastNode->next;
            }
            lastNode->next = new Node(data);
        }
        else
        {
            head = new Node(data);
        }
    }
};

int main()
{
    LinkedList ll;

    ll.addLast(1);
    ll.addLast(13);
    ll.addLast(3);
    ll.print();
}
