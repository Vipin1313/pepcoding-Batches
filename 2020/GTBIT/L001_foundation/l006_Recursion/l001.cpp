#include <iostream>
using namespace std;

void printIncreasing(int a, int b)
{
    if (a == b + 1)
        return;

    a += 10;
    cout << "hi" << a << " ";
    printIncreasing(a + 1, b);
    cout << "Bye" << a << " ";
}

void pppppp(int a)
{
    return;
}

void ppppp(int a)
{
    cout << "hi" << a << endl;
    pppppp(a + 1);
    cout << "bye" << a << endl;
}

void pppp(int a)
{
    cout << "hi" << a << endl;
    ppppp(a + 1);
    cout << "bye" << a << endl;
}

void ppp(int a)
{
    cout << "hi" << a << endl;
    pppp(a + 1);
    cout << "bye" << a << endl;
}

void pp(int a)
{
    cout << "hi" << a << endl;
    ppp(a + 1);
    cout << "bye" << a << endl;
}

void p(int a)
{
    cout << "hi" << a << endl;
    pp(a + 1);
    cout << "bye" << a << endl;
}

// questions.===========================================

void printDecreasing(int n)
{
    if (n == 0)
        return;

    cout << n << endl;
    printDecreasing(n - 1);
}

void printIncreasing(int n)
{
    if (n == 0)
        return;

    printIncreasing(n - 1);
    cout << n << endl;
}

void printIncDec(int n)
{
    if (n == 0)
        return;
    cout << n << endl;
    printIncDec(n - 1);
    cout << n << endl;
}

void printIncDec(int n)
{
    if (n == 0)
        return;
    if (n % 2 != 0)
        cout << n << endl;
    printIncDec(n - 1);
    if (n % 2 == 0)
        cout << n << endl;
}

int factorial(int n)
{
    return n == 0 ? 1 : n * factorial(n - 1);
}

int factorial(int n)
{
    int recAns = 1;
    if (n > 0)
        recAns = n * factorial(n - 1);

    return recAns;
}

int power(int a, int b)
{
    return b == 0 ? 1 : a * power(a, b - 1);
}

int powerBtr(int a, int b)
{
    if (b == 0)
        return 1;
    int smallAns = powerBtr(a, b / 2);
    smallAns *= smallAns;
    return b % 2 == 0 ? smallAns : smallAns * a;
}

int powerBtr2(int a, int b)
{
    if (b == 0)
        return 1;
    int smallAns = powerBtr2(a, b / 2) * powerBtr2(a, b / 2);
    return b % 2 == 0 ? smallAns : smallAns * a;
}

int fibo(int n)
{
    if (n <= 1)
        return n;

    return fibo(n - 1) + fibo(n - 2);
}

int tribonacci(int n)
{
    if (n <= 2)
        return n == 2 ? 1 : n;

    return tribonacci(n - 1) + tribonacci(n - 2) + tribonacci(n - 3);
}

// Recursion With Array

void display(int arr[], int idx, int n)
{
    if (idx == n)
    {
        return;
    }

    cout << arr[idx] << endl;
    display(arr, idx + 1, n);
}

void reverseDisplay(int arr[], int idx, int n)
{
    if (idx == n)
    {
        return;
    }

    reverseDisplay(arr, idx + 1, n);
    cout << arr[idx] << endl;
}

int maxOfArray(int arr[], int idx, int n)
{
    if (idx == n)
        return -1e9;

    return max(arr[idx], maxOfArray(arr, idx + 1, n));
}

int firstIndex(int arr[], int idx, int x, int n)
{
    if (idx == n)
        return -1;

    if (arr[idx] == x)
        return idx;
    return firstIndex(arr, idx + 1, x, n);
}

int lastIndex(int arr[], int idx, int x, int n)
{
    if (idx == -1)
        return -1;

    if (arr[idx] == x)
        return idx;
    return lastIndex(arr, idx - 1, x, n);
}

int main()
{
    p(1);
    return 0;
}