class Solution {
public:
    int lengthOfLastWord(string s) {
        string word;
        vector<string>a;
        for (int i=0; i<s.length(); i++){
            if (s[i]!=' '){
                word+=s[i];
            }else{
                a.push_back(word);
                word="";
            }
        }
        if (!word.empty()) {
            a.push_back(word);
        }

        for (int i=0; i<a.size();){
            if (a[i]==""){
                a.erase(a.begin()+i);
            }else{
                i++;
            }
        }

        return a[a.size() - 1].size();

    }
};
