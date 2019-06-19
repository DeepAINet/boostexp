#include <iostream>
#include "../src/RandomForest.cc"
#include "../src/xgboost.cc"
#include "../src/cart.cc"
#include "../src/ID3.cc"
#include "../src/C45.cc"
#include "../src/GBDT.cc"
#include "../src/TreeNode.cc"
#include "../src/corpus.cc"
#include "../src/utils.cc"

using namespace std;

void tree_node_test(){
    TreeNode *ptree = new TreeNode();
    ptree->init(100, 20);
    delete ptree;
}

void corpus_test(){
    corpus corp("./data.txt");
}

void is_number_test(){
    if (is_number("-1.2223e123")){
        std::cout << "-1.2223e123" << std::endl;
    }

    string num = "1233e-9";
    if (is_number(num)){
        std::cout << num << std::endl;
    }

    num = "1234";
    if (is_number(num)){
        std::cout << num << std::endl;
    }

    num = ".233443e10";
    if (is_number(num)){
        std::cout << num << std::endl;
    }
}
