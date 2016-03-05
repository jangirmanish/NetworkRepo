/*
//KMP
public KMP(String pat)
{
    this.pat = pat;
    M = pat.length();
    dfa = new int[R][M];
    dfa[pat.charAt(0)][0] = 1;
    for (int X = 0, j = 1; j < M; j++)
    {
        for (int c = 0; c < R; c++)
            dfa[c][j] = dfa[c][X];
        dfa[pat.charAt(j)][j] = j+1;
        X = dfa[pat.charAt(j)][X];
    }
}

*/
#include <iostream>
#include <vector>
using namespace std;

void sink(std::vector<int>& heap, int i, int size)
{
    while(2*i <=size)
    {
        int j = 2*i;
        if (j < size && heap[j] < heap[j+1])
            j++;
        if (heap[i] >= heap[j])
            break;
        int temp = heap[i];
        heap[i] = heap[j];
        heap[j] = temp;
        i=j;
    }
}

void Heapify(std::vector<int>& heap)
{
    int size = heap.size()-1;
    for(int i = size/2; i>= 1;i--)
    {
        sink(heap, i, size);
    }
}

int main()
{
    std::vector<int> heap;
    heap.push_back(-1);
    int T;
    cin >> T;
    for(int i=0;i<T;i++)
    {
        int t;
        cin >> t;
        heap.push_back(t);
    }
    Heapify(heap);
}

while (N > 1)
{
exch(a, 1, N--);
sink(a, 1, N);
}