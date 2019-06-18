#include <string>
#include <map>
#include <vector>
#include <numeric>
#include <iostream>
using namespace std;
typedef float real;
typedef unsigned long long LONG;

class TreeNode{
    public:
        string                  subject;
        int                     best_feature;
        int                     height;
        map<real, TreeNode*>    son_map;
        vector<real>            span;
        vector<real>            span_;
        vector<LONG>            x;
        vector<int>             features_remainder;
        vector<real>            purities;
        vector<TreeNode*>       sons;
        vector<map<real, real>> feature_purity_table;
        real                    purity;
        bool                    leaf;
        real                    y;
        LONG                    most_common;
        LONG                    size;
    public:
        TreeNode(){
            best_feature=-1;
            height=0;
            purity=0.0f;
            leaf=false;
            y=0.0f;
            most_common=0;
            size=0;
        }

        virtual ~TreeNode(){
            for (TreeNode *son: sons) 
                if (0 != son) delete son;
        }

        void init(LONG x_size, int x_dim){
            x.resize(x_size);
            std::iota(x.begin(), x.end(), 0);
            for (LONG num: x)
                std::cout << num << '\t';
            std::cout << std::endl;

            features_remainder.resize(x_dim);
            std::iota(features_remainder.begin(), features_remainder.end(), 0);
            for (int fid: features_remainder)
                std::cout << fid << '\t' ;
            std::cout << std::endl;
        }
};
