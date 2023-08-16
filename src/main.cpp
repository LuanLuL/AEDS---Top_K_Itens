#include <iostream>
#include <clocale>
#include <unordered_map>
#include <string>
#include "ConnectionFactory.hpp"
#include "Heap.hpp"

#define FILES 2

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");
    ConnectionFactory DAO;
    unordered_map<string, int> wordsHash;
    for(short int i=1;i<=FILES;i++){
        ifstream file = DAO.getConnection("input" + to_string(i) + ".txt");
        DAO.select(file, &wordsHash);
        DAO.closeConnection(file);
    }
    Heap heapTree(&wordsHash);
    heapTree.print(20);
}