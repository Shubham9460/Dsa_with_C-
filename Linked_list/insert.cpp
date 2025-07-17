#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;


   Node(int val){
    data = val;
    next = NULL;
   }
};

class list {
    Node* head;
    Node* tail;
 
public:
    list(){
        head = NULL;
        tail = NULL;
    }

    void push_front(int val){
        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
        }
        else{
            newNode->next = head;
            head = newNode;

        }
    }
    void push_back(int val){
        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
    }

    void printList(){
        Node* temp = head;
        while (temp != NULL)
        {
            cout<<temp->data<< "->";
            temp = temp->next;
        }
        cout<< "NULL\n";
        
    }
//inset va node of any possition
    void insert(int val,int poss) 
    {
        Node* newNode = new Node(val);
        Node* temp =head;
        for(int i=0; i< poss-1; i++){
            if(temp == NULL){
                printf("possition is INVALID\n");
                return;
            }
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
//linkedlist ke first NODE ko delete karne ke liya
    void pop_front(){
        if(head == NULL){
            cout<<"ll is empty\n";
            return;
        }
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

//linkedlist ke last Node ko delete karne ke liye
   void pop_back(){
    Node* temp = head;
    while (temp->next->next != NULL)
    {
       temp = temp->next;
    }
    temp->next = NULL;
    delete tail;
    tail = temp;
    
   }
   int searchIdx(int key){
    Node* temp = head;
    int idx = 0;
    while(head != NULL){
        if(temp->data == key){
            return idx;
        }
        temp =temp->next;
        idx++;
    }
    return -1;
   }
// revers a linkedList
   void revers(){
    Node* curr = head;
    Node* prev = NULL;
    while(curr != NULL){
        Node* next = curr->next;
        curr->next = prev;

        prev=curr;
        curr = next;
    }
    head = prev;
   }
   //Get size an LinkedList
   int getsize(){
    int size=0;
    Node* temp = head;
    while(temp != NULL){
        temp = temp->next;
        size++;
    }
    return size;
   }
   //Remove revers side to Nth number
   void removeNth(int n){
    int size = getsize();
    Node* prev = head;
    for(int i= 1; i<(size-n);i++){
        prev = prev->next;
    }
    Node* toDel = prev->next;
    cout<<toDel->data<<endl;
    prev->next = prev->next->next;
   }
   
};

int main(){
list ll;
ll.push_front(5);
ll.push_front(4);
ll.push_front(3);
ll.push_front(2);
ll.push_front(1);
ll.printList();
ll.removeNth(2);
ll.printList();



}