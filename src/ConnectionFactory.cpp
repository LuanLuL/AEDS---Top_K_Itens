#include "ConnectionFactory.hpp"

ConnectionFactory::ConnectionFactory(){
    ifstream fileStopWords = getConnection("stopwords.txt");
    string stopWord = "";
    while(getline(fileStopWords, stopWord)){
        this->stopWords.push_back(stopWord);
    }
    closeConnection(fileStopWords);
}

ConnectionFactory::~ConnectionFactory(){/*...*/}

vector<string> ConnectionFactory::getStopWords(){
    return this->stopWords;
}

void ConnectionFactory::setStopWords(vector<string> newStopWords){
    this->stopWords = newStopWords;
}

ifstream ConnectionFactory::getConnection(string paths){
    try{
        ifstream dataset("dataset/" + paths);
        if (!dataset){
            throw "./ConnectionFactory::getConnection(string path) !ERROR! => path didn't find on directory";
        }
        return dataset;
    }
    catch(const char *msg){
        cerr << msg << endl;
        exit(1);
    }
}

void ConnectionFactory::closeConnection(ifstream &dataset){
    dataset.close();
}

void ConnectionFactory::select(ifstream &dataset, unordered_map<string, int> *hash){
    string line;
    while(getline(dataset, line)){
        if(line.empty()){
            /*doesn't do nothing*/
            continue;
        }
        else{
            line = removeAccents(line);
            size_t beginOfWord = 0, finalOfWord = line.find_first_of(' ', beginOfWord);
            while (finalOfWord != std::string::npos) {
                if(line[beginOfWord] == ' '){
                    /*doesn't do nothing*/
                }else{
                    if(!isStopWord(line.substr(beginOfWord, (finalOfWord-beginOfWord)))){
                        auto it = hash->find(line.substr(beginOfWord, (finalOfWord-beginOfWord)));
                        if (it == hash->end()) {
                            (*hash)[line.substr(beginOfWord, (finalOfWord-beginOfWord))] = 1;
                        }
                        else{
                            (*hash)[line.substr(beginOfWord, (finalOfWord-beginOfWord))]++;
                        }
                    }
                }
                beginOfWord = finalOfWord + 1; 
                finalOfWord = line.find_first_of(' ', finalOfWord + 1);
            }
        }
    }
}

string ConnectionFactory::removeAccents(string sentence){ // removes every accents from sentence and makes it lower case
    string accents = ".,;:?!\"\'()[]{}/\\&*#%°_—“”";
    size_t position = sentence.find_first_of(accents);
    while (position != std::string::npos) {
        sentence[position] = ' ';
        position = sentence.find_first_of(accents, position);
    }
    position = 0;
    for (char& caracter : sentence) {
        if((sentence[position] == '-' && sentence[position+1] == '-') || (sentence[position] == '-' && sentence[position+1] == ' ') || (sentence[position] == '-' && sentence[position-1] == ' ')){
            sentence[position] = ' ';
        }
        caracter = tolower(caracter);
        position++;
    }
    return sentence + ' ';
}

bool ConnectionFactory::isStopWord(string palavra){
    for(const auto &stopWord : this->stopWords ){
        if(stopWord == palavra){
            return true;
        }
    }
    return false;
}