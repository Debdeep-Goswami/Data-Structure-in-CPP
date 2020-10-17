#include <iostream>
#include <cstdlib>
#define MAX 1000

using namespace std;

class Stack
{

private :
    int top;

public:
    int data_array[MAX];

    //  Constructor
    Stack(){top=-1;}

    //--------------------- Necessary for Stack Operation -------
    void push(int);
    int pop();
    int peek();

    // -------------------- Other utility functions --------------
    void display_stack();
    int menu();
    void run();
};


//_________________________ Main Function ________________

int main()
{
    Stack st;
    st.run();
    cout <<endl;
    return 0;
}

// _______________________ END of Main Function __________


/*****************   Function Definitions  ***************/

void Stack::push(int data)
{
    if(top==Stack_Size-1)
        printf("\nOverflow");
    else
        data_array[++Top]=data;
}

int pop()
{
    int data=-999;
    if(top==-1)
        printf("\nUnderflow");
    else
        data=data_array[Top--];
    return data;
}

int peek()
{
    if(top==-1)
        return -999;
    else
        return data_array[top];
}

void display_stack()
{
    int i;
    if(top==-1)
        printf("\nStack is Empty\n");
    else
        for(i=top;i>=0;i--)
            printf("\n|  %d  |",data_array[i]);
}


int menu()
{
    int choice;
    printf("\nList of Choices\n");
    printf("\n Push\t\t\t= 1\n");
    printf("\n Pop\t\t\t= 2 \n");
    printf("\n Show Top\t\t= 3\n");
    printf("\n Display Stack\t\t= 4\n");
    printf("\n Exit\t\t\t= 0\n");
    printf("\nEnter your choice = ");
    scanf("%d",&choice);
    return choice;
}

void run()
{
    int choice,data;
    printf("\nWelcome to Stack operation program using array\n");
    printf("\nEnter the maximum size of the stack = ");
    scanf("%d",&Stack_Size);

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
    return 0;
}
/***************  End of Function Definitions  ****************/
