bool is_number(string word){
    int i = 0;
    size_t size = word.size();
    while(i < size && word[i] == ' ') ++i;
    if (i < size && (word[i] == '+' || word[i] == '-')) {
        ++i;
    }

    bool has_int = false;
    while(i < size && isdigit(word[i])) {
        ++i;
        has_int = true;
    }

    bool has_point = false;
    if (i < size && word[i] == '.'){
        ++i;
        has_point = true;
    }

    bool small = false;
    while(i < size && isdigit(word[i])){
        ++i;
        small = true;
    }

    if (i < size && word[i] == 'e'){
        ++i;
        if (i < size && (word[i] == '+' || word[i] == '-')) ++i;
        bool exp_ = false;
        while(i < size && isdigit(word[i])){
            ++i;
            exp_ = true;
        }
        if (!exp_) return false;
    }

    while(i < size && word[i] == ' ') ++i;
    return i == size && (has_int || (has_point && small));
}

void read_word(ifstream& in, string& word){
    return;
}
