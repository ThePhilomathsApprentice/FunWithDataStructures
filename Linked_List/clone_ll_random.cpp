#include <iostream>
#include <unordered_map>
using namespace std;

struct Node
{
    int data;
    Node *next, *random;
    Node(int x)
    {
        data = x;
        next = random = NULL;
    }
};

void print(Node *start)
{
    Node *ptr = start;
    while (ptr)
    {
        cout << "Data(" << ptr << ") = " << ptr->data << ", Random(" << ptr->random << ")  = " << ptr->random->data << endl;
        ptr = ptr->next;
    }
}

Node *clone(Node *head)
{
    std::unordered_map<Node *, Node *> old_2_new_pointer_map;

    for (Node *old_node = head; old_node != nullptr; old_node = old_node->next)
    {
        old_2_new_pointer_map[old_node] = new Node(old_node->data);
    }

    for (Node *old_node = head; old_node != nullptr; old_node = old_node->next)
    {
        Node *new_node = old_2_new_pointer_map[old_node];
        new_node->next = old_2_new_pointer_map[old_node->next];
        new_node->random = old_2_new_pointer_map[old_node->random];
    }
    return old_2_new_pointer_map[head];
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(5);
    head->next->next = new Node(20);
    head->next->next->next = new Node(15);
    head->next->next->next->next = new Node(20);

    head->random = head->next->next;
    head->next->random = head->next->next->next;
    head->next->next->random = head;
    head->next->next->next->random = head->next->next;
    head->next->next->next->next->random = head->next->next->next;

    cout << "Original list : \n";
    print(head);

    cout << "\nCloned list : \n";
    Node *cloned_list = clone(head);
    print(cloned_list);

    return 0;
}
