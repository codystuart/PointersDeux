// StuartCodyPtrsDuex.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "TriangleStack.h"
#include "TriangleHeap.h"

int AddNumbersReturnInt(int* a, int* b);
void AddNumbersReturnVoid(int a, int b, int* sum);
void SwapValues(int* a, int* b);


int main()
{
    int a = 5;
    int b = 10;
    int sum;

    int* aptr = &a;
    int* bptr = &b;
    int* sumptr = &sum;

    std::cout << "[AddNumbersReturnInt Test]" << std::endl;
    std::cout << "a pointer + b pointer = " << AddNumbersReturnInt(aptr, bptr) << "\n" << std::endl;

    std::cout << "[AddNumbersReturnVoid Test]" << std::endl;
    AddNumbersReturnVoid(a, b, sumptr);
    std::cout << "a + b = " <<  * sumptr << "\n" << std::endl;

    std::cout << "[SwapValues Test]" << std::endl;
    SwapValues(aptr, bptr);
    std::cout << std::endl;

    std::cout << "[Creating TriangleStack Objects]" << std::endl;
    TriangleStack ts1;
    ts1.SetBase(5);
    ts1.SetHeight(10);
    TriangleStack ts2;
    ts2.SetBase(9);
    ts2.SetHeight(6);

    std::vector<TriangleStack> v;
    v.push_back(ts1);
    v.push_back(ts2);

    for (int i = 0; i < v.size(); i++)
    {
        std::cout << "Triangle #" << i + 1 << std::endl;
        v[i].Print(v[i]);
        std::cout << std::endl;
    }

    std::cout << "[Creating TriangleHeap Objects]" << std::endl;
    float base = 10;
    float height = 12;
    
    float* baseptr = nullptr;
    float* heightptr = nullptr;

    baseptr = &base;
    heightptr = &height;

    TriangleHeap th1(baseptr, heightptr);
    TriangleHeap th2 = th1;

    std::vector<TriangleHeap> th;
    th.push_back(th1);
    th.push_back(th2);

    for (int i = 0; i < th.size(); i++)
    {
        std::cout << "Triangle #" << i + 1 << std::endl;
        th[i].Print(th[i]);
        std::cout << std::endl;
    }



}

int AddNumbersReturnInt(int* a, int* b)
{
    int c = *a + *b;
    return c;
}

void AddNumbersReturnVoid(int a, int b, int* sum)
{
    int temp = a + b;
    *sum = temp;
}

void SwapValues(int* a, int* b)
{
    std::cout << "a = " << *a << "\nb = " << *b << std::endl;
    int* temp = a;
    a = b;
    b = temp;
    std::cout << "a = " << *a << "\nb = " << *b << std::endl;
}
