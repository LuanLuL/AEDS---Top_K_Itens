#ifndef __CONNECTIONFACTORY_HPP
#define __CONNECTIONFACTORY_HPP

#include <iostream>
#include <fstream>
#include <unordered_map>
#include <string>
#include <vector>

using namespace std;

class ConnectionFactory{
    private:
        vector<string> stopWords;
    public:        
        ConnectionFactory();
        ~ConnectionFactory();
        vector<string> getStopWords();
        void setStopWords(vector<string> newStopWords);
        ifstream getConnection(string path);
        void closeConnection(ifstream &dataset);
        void select(ifstream &dataset, unordered_map<string, int> *hash);
        string removeAccents(string linha);
        bool isStopWord(string palavra);
    };

#endif