#pragma once
#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

template <typename T>
bool Fib(T begin, T end)
{

    if (*begin <= 0)
    {
        return false;
    }

    int n1 = 1;
    int n2 = 1;
    int ans = 0;
    if (*begin == 1)
    {
        begin++;
        if (*begin != 1 && *begin > 2)
        {
            return false;
        }
        begin++;
    }

    while (begin != end)
    {
        ans = n1 + n2;
        n1 = n2;
        ;
        n2 = ans;
        if (*begin != ans && *begin < ans)
        {
            return false;
        }
        if (*begin == ans)
        {
            begin++;
        }
    }
    return true;
}

template <typename T>
T Transpose(T begin, T end)
{
    int size = end - begin;
    if (size == 0 || size % 2 != 0)
    {
        return begin;
    }
    while (begin != end)
    {
        auto n1 = *begin;
        auto n2 = *(begin + 1);
        *begin = n2;
        *(begin + 1) = n1;
        begin += 2;
    }
    return begin;
}

template <typename In, typename Out, typename Op>
Out Transform2(In begin, In end, Out res, Op op)
{
    int size = end - begin;
    bool isOdd = false;
    if (size % 2 != 0)
    {
        isOdd = true;
    }
    while (begin != end)
    {
        if (begin == (end - 1) && isOdd)
        {
            break;
        }
        *res++ = op(*begin, *(begin + 1));
        begin += 2;
    }
    return res;
}