#include <iostream>

using namespace std;

class LinkedList{
private:
    // Define a node structure for the linked list
    struct node
    {
        int value;   // Stores the value of the node
        node* next;  // Pointer to the next node in the list
    };

    // Global pointer to track the head (first node) of the linked list
    node* head = nullptr;

public:
    // function to add new node in linked list
    void insertNode (int value)
    {
        // Step 1: Create a new node dynamically
        node* newNode = new node;

        // Step 2: Assign value to the new node and initialize next as nullptr
        newNode->value = value;
        newNode->next = nullptr;
        
        // Step 3: If the list is empty, make the head points to the newNode
        if (head == nullptr){
            head = newNode;
        }
        else {
            // Step 4: Traverse the list to find the last node
            node* last = head; // last = head = address of the first node

            while (last->next) // Move until we reach the last node
            {
                last = last->next;
            }

            // Step 5: Link the last node to the new node
            last->next = newNode;
        }
    }

    // function to appear elements of linked list
    void display (){
        // Check if the linked list is empty
        if (head == nullptr){
            cout << "Linked List is Empty" << endl;
        }
        else {
            node* currentNode = head;

            // Traverse the list and print each node's value
            while (currentNode){
                cout << currentNode->value << " "; // Print current node's value
                currentNode = currentNode->next;    // Move to the next node
            }
            cout << endl;
        }
    }

    // function to insert node at the beginning of linked list
    void insertNodeAtBeginning (int value){
        // Step 1: Create a new node dynamically
        node* newNode  = new node;
        newNode->value = value;

        // Step 2: Point new node's next to the current head
        newNode->next = head;

        // Step 3: Update head to point to the new node
        head = newNode;
    }

    // function to delete the beginning node of linked list
    void deleteBegNode (){
        // Check if the list is empty
        if (head == nullptr){
            cout << "Linked List is Empty" << endl;
            return;
        }

        node* firstNode = head;
        head = firstNode->next;
        delete firstNode;
    }

    // function to delete a specific node in linked list
    void deleteNode(int value){
        if (head == nullptr){
            cout << "Linked List is Empty" << endl;
            return;
        }

        if (head->value == value){
            node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        node* previosuNode = head;
        node* currentNode  = head;

        while (currentNode->value != value){
            previosuNode = currentNode;
            currentNode = currentNode->next;

            if (currentNode == nullptr){
                cout << "No Founded Data" << endl;
                return;
            }
        }

        previosuNode->next = currentNode->next;
        delete(currentNode);
    }

    void deleteNodeAtEnd (){
        if (head == nullptr){
            cout << "Linked List is Empty" << endl;
            return;
        }

        if (head->next == nullptr){
            node* temp = head;
            head = nullptr;
            delete temp;
            return;
        }

        node* previousNode = head;
        node* currentNode  = head;

        while(currentNode->next != nullptr){
            previousNode = currentNode;
            currentNode = currentNode->next;
        }

        previousNode->next = nullptr;
        delete currentNode;
    }
    
    // Destructor to free memory
    ~LinkedList() {
        node* currentNode = head;
        while (currentNode != nullptr) {
            node* nextNode = currentNode->next;
            delete currentNode;
            currentNode = nextNode;
        }
    }
};

int main ()
{
    LinkedList list;
    list.insertNode(10);
    list.insertNode(20);
    list.insertNode(30);
    list.deleteNode(20);
    list.display();
}