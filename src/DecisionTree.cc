#include <iostream>
#include <vector>
#include "TreeNode.cc"
#include "corpus.cc"

using namespace std;

class DecisionTree{
    protected:
        TreeNode *root;
        corpus *corp;
        int num_threads;
        int max_height=-1;
        int max_leaf_nodes=-1;
    public:
        DecisionTree(){}

        virtual ~DecisionTree(){
            if (0 != root) delete root;
        }

        virtual real calculate_purity(TreeNode *node)=0;
        virtual bool continue_split(TreeNode *node)=0;
        virtual void push_sons(TreeNode *node)=0;
        virtual void pruning()=0;
        virtual void select_feature_thread(TreeNode *node, const vector<int>& features)=0;
        
        void init(){
            root = new TreeNode();
            root->init(100, 20);
            calculate_purity(root);
        }
        void grow(){}

        void generate(string filename, int num_threads=8, bool pruned=false, int max_height=-1, int max_leaf_nodes=-1){
            // add corpus interface
            init();
            grow();
            if (pruned) pruning();
        }
};
