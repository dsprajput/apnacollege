// stack is fixed memory location where memory allocation and deallocation occur on its own. It is of small size.
// heap is free space memory that is equal to the size of the virtual memory that is ram. We have allocate and deallocate it manually.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a=10;   //stored in stack
    int *p = new int();  // allocated in heap
    *p = 200;

    delete(p);   //deallocation of memory

    p = new int[4];

    delete[]p;
    p = NULL;
    return 0;
}
