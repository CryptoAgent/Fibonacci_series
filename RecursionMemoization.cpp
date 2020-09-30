/* program to print last value of fibonicci series using recursion
    output: 0 1 1 2 3 5.... for n = 5 -> 5
    Here time taken is O(n)
    Method 2: optimised code(generally preferred)
 */
#include <iostream>
#include <conio.h>
#include <time.h>
using namespace std;
long fib[150];    //allocates memory to store the vlaues for first time
long RecursionDemo(int n) {
    if (n<=1)
    {
        return n;

    }
    else if (fib[n] != -1)
    {
        return fib[n];
    }
     
    else
    {
        fib[n] = RecursionDemo(n-1) + RecursionDemo(n-2);
        return fib[n];
    }   
}

int main()
{
    time_t start, end;    //declaring variables to calculate time taken

    time(&start);                               //starts the time from where the program starts
    for (int i = 0; i < 150; i++) {         
        fib[i] = -1;                            //loop to initialize all the values to -1
    }
    int n = 60;                                 //actual argument to claculate
    cout<< RecursionDemo(n);                    //function calling
    time(&end);
    double timeTaken = double (end - start);
    cout<<endl<<"time taken is: "<<fixed << timeTaken ;         //calculating the runtime
    cout<<"sec" << endl;
    // time complexity will be O(n)
    return 0;
}
