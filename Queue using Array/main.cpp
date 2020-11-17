/**********************************************
        Queue using Array
***********************************************/

#include <iostream>
#include <cstdlib>
#define MAX 1000

using namespace std;

class Queue
{

private :
    int front;
    int rear;
    int queue_size;

public:
    int data_array[MAX];

    //  Constructor
    Queue(){front=0;rear=0;}

    //--------------------- Necessary for Stack Operation -------
    void enqueue(int);
    int dequeue();

    // -------------------- Other utility functions --------------
    void display_queue();
    int menu();
    void run();
};


//_________________________ Main Function ________________

int main()
{
    Queue q;
    q.run();
    cout <<endl;
    return 0;
}
// _______________________ END of Main Function __________


/*****************   Function Definitions  ***************/

void Queue::enqueue(int data)
{
    if(rear==queue_size-1)
        printf("\nOverflow");
    else
        data_array[++top]=data;
}

int Queue::dequeue()
{
    int data=-999;
    if(top==-1)
        printf("\nUnderflow");
    else
        data=data_array[top--];
    return data;
}

int Stack::peek()
{
    if(top==-1)
        return -999;
    else
        return data_array[top];
}

void Stack::display_stack()
{
    int i;
    if(top==-1)
        printf("\nStack is Empty\n");
    else
        for(i=top;i>=0;i--)
            printf("\n|  %d  |",data_array[i]);
}


int Stack::menu()
{
    int choice;
    printf("\nList of Choices\n");
    printf("\n Push\t\t\t= 1");
    printf("\n Pop\t\t\t= 2");
    printf("\n Show Top\t\t= 3");
    printf("\n Display Stack\t\t= 4");
    printf("\n Exit\t\t\t= 0");
    printf("\nEnter your choice = ");
    scanf("%d",&choice);
    return choice;
}

void Stack::run()
{
    int choice,data;
    printf("\nWelcome to Stack operation program using array\n");
    printf("\nEnter the maximum size of the stack = ");
    scanf("%d",&stack_size);

    while(choice!=0)
    {
        choice=menu();
        switch(choice)
        {
        case 0:
            break;

        case 1:
            printf("\nEnter the data = ");
            scanf("%d",&data);
            push(data);
            break;

        case 2:
            data=pop();
            if(data==-999);
            else
                printf("\nItem popped = %d\n",data);
            break;

        case 3:
            data=peek();
            if(data==-999)
                printf("\nStack is Empty\n");
            else
                printf("\nItem at the top is = %d\n",data);
            break;

        case 4:
            display_stack();
            break;

        default:
            printf("\nWrong Choice..Try again\n");
        }
    }
}
/***************  End of Function Definitions  ****************/
