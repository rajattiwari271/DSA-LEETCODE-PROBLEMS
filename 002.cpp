#include <iostream>

using namespace std;


class Node {
    public:

    int data ;
Node * next ;

Node(){
    this->data = 0 ;
    this ->next = NULL;

}

Node (int data){
    this ->data  = data;
    this -> next = NULL;

}
};


void print(Node * head){
     Node * temp = head ;
     while (temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
     }
}


int main (){

Node *first = new  Node(10);
Node *second = new  Node(20);
Node *third = new  Node();
Node *fourth = new  Node();
Node *fifth  = new  Node();

first ->next = second ;
second ->next = third;
third->next = fourth;
fourth ->next = fifth ;


cout<<"Printing  the LL "<<endl; 

print(first);

return 0;


}