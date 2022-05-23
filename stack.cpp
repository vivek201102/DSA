#include <bits/stdc++.h>

using namespace std;

int count_node = 0;

class New_Stack
{
public:
    int data;
    New_Stack *next;
    New_Stack()
    {
        this->next = NULL;
    }

    int push(New_Stack *new_top, int data);
    int pop(New_Stack * new_top);
    void display(New_Stack *top);
};

// Top as main function variable

int New_Stack::push(New_Stack *new_top, int data)
{
    if (new_top->next == NULL)
    {
        count_node++;
        New_Stack *node = new New_Stack();
        node->data = data;
        node->next = NULL;
        new_top->next = node;
        return 0;
    }

    else
    {
        if (count_node < 10)
        {
            count_node++;
            New_Stack *node = new New_Stack();
            node->data = data;
            node->next = new_top->next;
            new_top->next = node;
            return 0;
        }
        else{
            cout<<"Overflow accurred"<<endl;
            return 1;
        }
    }
}

int New_Stack::pop(New_Stack *new_top)
{
    if(count_node > 0)
    {
        count_node--;
        New_Stack * temp = new_top->next;
        new_top->next = temp->next;
        free(temp);
        return 0;
    }
    else{
        cout<<"Underflow accurs"<<endl;
        return 1;
    }
}

void New_Stack::display(New_Stack *new_top)
{
    New_Stack *temp = new_top;
    while (temp->next != NULL)
    {
        temp = temp->next;
        cout << temp->data << " ";
    }
}

// Top as global variable
class Stack
{
public:
    int data;
    Stack *next;
    Stack()
    {
        this->next = NULL;
    }

    void push(int data);
};

Stack *top = new Stack();

void Stack::push(int data)
{

    if (top->next == NULL)
    {

        Stack *node = new Stack();
        node->data = data;
        node->next = NULL;
        top->next = node;
    }

    else
    {
        Stack *node = new Stack();
        node->data = data;
        node->next = top->next;
        top->next = node;
    }
}

void display()
{
    Stack *temp = top;
    while (temp->next != NULL)
    {
        temp = temp->next;
        cout << temp->data << " ";
    }
}

int main()
{
    New_Stack *new_top = new New_Stack();
    int x;
    x = new_top->push(new_top, 5);
    x = new_top->push(new_top, 6);
    x = new_top->push(new_top, 7);
    x = new_top->push(new_top, 8);
    x = new_top->pop(new_top);
    x = new_top->pop(new_top);
    // x = new_top->pop(new_top);
    // x = new_top->pop(new_top);
    new_top->display(new_top);
    // cout << endl;
    // top->push(5);
    // top->push(7);
    // top->push(45);
    // top->push(3);
    // top->push(20);
    // top->push(6);
    // top->push(8);

    // display();
    return 0;
}