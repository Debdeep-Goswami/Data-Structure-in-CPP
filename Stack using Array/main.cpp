#include <iostream>
//#include <cstdlib>
#include <exception>
#define MAX 1000

using namespace std;

class Stack
{

private :
    int top;
    int stack_size;

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
    if(top==stack_size-1)
        cout<<"\nOverflow";
    else
        data_array[++top]=data;
}

int Stack::pop()
{
    int data=-999;
    if(top==-1)
        cout<<"\nUnderflow";
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
        cout<<"\nStack is Empty"<<endl;
    else
        for(i=top;i>=0;i--)
            cout<<"\n|  "<<data_array[i]<<"  |";
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
    cin>>choice;
    return choice;
}

void Stack::run()
{
    int choice,data;
    printf("\nWelcome to Stack operation program using array\n");
    printf("\nEnter the maximum size of the stack = ");
    try
    {
        cin>>stack_size;
    }
    catch(...)
    {
        cout<<"\nUnexpected Error encountered.";
        run();
    }

    if(stack_size<=0)
        return;
    while(choice!=0)
    {
        choice=menu();
        try
        {
            switch(choice)
            {
            case 0:
                break;

            case 1:
                cout<<"\nEnter the data = ";
                cin>>data;
                push(data);
                break;

            case 2:
                data=pop();
                if(data==-999);
                else
                    cout<<"\nItem popped = "<<data<<endl;
                break;

            case 3:
                data=peek();
                if(data==-999)
                    cout<<"\nStack is Empty\n";
                else
                    cout<<"\nItem at the top is = "<<data<<endl;
                break;

            case 4:
                display_stack();
                break;

            default:
                cout<<"\nWrong Choice..Try again\n";
            }
        }
        catch(...)
        {
            cout<<"\nError from Switch case caught";
            continue;
        }
    }
}
/***************  End of Function Definitions  ****************/
