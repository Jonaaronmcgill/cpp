#include <iostream>
#include <stdlib.h>
#include <stdio.h>

struct Node
{
    int data;
    Node* next;
};

void addElement(Node** node, int value)
{
    Node* temp = new Node();
    
    temp->data=value;
    temp->next=nullptr;
    
    if(*node==nullptr)
    {
        *node = temp;
        return;
    }
    
    Node* current = *node;
    while(current->next != nullptr)
    {
        current = current->next;
    }
    current->next = temp;
    
}


int main()
{
    int amount{0};
    int value{0};
    
    Node* head = nullptr;
    
    printf("%s", "How many numbers?");
    scanf("%d", &amount);
    
    for(int i=0; i<amount; i++)
    {
        std::cout << "what are the num for " << i+1 << ":";
        std::cin >> value;
        addElement(&head, value);
    }
    
    Node* temp = head;
    
    std::cout << "Numbers are:" << '\n';
    
    while(temp != nullptr)
    {
        std::cout << temp->data;
        temp = temp->next;
    }
    
    temp = head;
    while(temp!=nullptr)
    {
        Node* next = temp->next;
        delete temp;
        temp = next;
    }
 
}
