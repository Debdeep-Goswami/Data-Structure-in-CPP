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
    int top;
    int queue_size;

public:
    int data_array[MAX];

    //  Constructor
    Queue(){top=-1;}

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
    if(top==queue_size-1)
        printf("\nOverflow");
    else
        data_array[++top]=data;
}


