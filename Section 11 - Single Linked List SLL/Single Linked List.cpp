#include <iostream>

using namespace std;

// Define a node structure for the linked list
struct node
{
    int value;   // Stores the data of the node
    node* next;  // Pointer to the next node in the list
};

// Global pointer to track the head (first node) of the linked list
node* head = nullptr;

// function to add new node in linked list
void insertNode (int data)
{
    // Step 1: Create a new node dynamically
    node* newNode = new node;

    // Step 2: Assign data to the new node and initialize next as nullptr
    newNode->value = data;
    newNode->next = nullptr;
    
    // Step 3: If the list is empty, make the head points to the newNode
    if (head == nullptr){
        head = newNode;
        newNode->next = nullptr;
    }
    else {
        // Step 4: Traverse the list to find the last node
        node* last = head; // last = head = address of the first node

        while (last->next != nullptr) // Move until we reach the last node
        {
            last = last->next;
        }

        // Step 5: Link the last node to the new node
        last->next = newNode;
    }
}

// Display function to appear elements of linked list
void display (){
    if (head == nullptr){
        cout << "Linked List is Empty" << endl;
    }
    else {
        node* currentNode = head;

        while (currentNode->next != nullptr){
            cout << currentNode->value << endl;
            currentNode = currentNode->next;
        }
    }

}

int main ()
{
    insertNode(10);
    insertNode(20);
    insertNode(30);
    display();
}