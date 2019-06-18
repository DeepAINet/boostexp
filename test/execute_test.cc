#include <iostream>
#include "../src/RandomForest.cc"
#include "../src/xgboost.cc"
#include "../src/cart.cc"
#include "../src/ID3.cc"
#include "../src/C45.cc"
#include "../src/GBDT.cc"
#include "../src/TreeNode.cc"

using namespace std;

void tree_node_test(){
    TreeNode *ptree = new TreeNode();
    ptree->init(100, 20);
    delete ptree;
}
