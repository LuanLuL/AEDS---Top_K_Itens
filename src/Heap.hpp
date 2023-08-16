#ifndef __HEAP_HPP
#define __HEAP_HPP

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

class Heap{
    private:
        int wordsNumber;
        pair<string, int> *heap;
    public:
        Heap(unordered_map<string, int> *hash);
        ~Heap();
        int getWordsNumber();
        void setWordsNumber(int newWordsNumber);
        bool isEmpty();
        void fixUp(int index);
        void fixDown(int index);
        void insert(string text, int frequency);
        void remove();
        void print(int K);
};

#endif