#include <iostream>
#include <cstdlib>
#define MAX 1000

using namespace std;

class Stack
{

private :
    int top;

public:
    int data[MAX];

    //  Constructor
    Stack(){top=-1;}

    //--------------------- Necessary for Stack Operation -------
    void push(int);
    int pop();
    int peek();

    // -------------------- Other utility functions --------------
    void display_stack();
    void run();
    int menu();
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


