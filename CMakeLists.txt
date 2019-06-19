cmake_minimum_required(VERSION 3.12)
project(boostexp)

set(CMAKE_CXX_STANDARD 11)

add_executable(boostexp
        main.cpp
        src/TreeNode.cc
        src/ID3.cc
        src/C45.cc
        src/cart.cc
        src/RandomForest.cc
        src/GBDT.cc
        src/xgboost.cc
        src/utils.cc
        src/corpus.cc
        src/DecisionTree.cc)

