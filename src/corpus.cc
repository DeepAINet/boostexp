#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;
class corpus{
    protected:
        string file;
//        ifstream in;
    public:
        corpus(string filename):file(filename){
            read();
        }

        ~corpus(){
//            if (in.is_open()) in.close();
        }

        void read(){
            ifstream in(file);
            if (in.is_open()) std::cout << " opened." << std::endl; 
            string line;
            while(getline(in, line)){
                std::cout << line << std::endl;
            }
        }


};
