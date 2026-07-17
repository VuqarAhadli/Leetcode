class Solution {
public:
    void generate(string par, int closed, int open, int n, vector<string>& res){
        if(par.length() == n*2){
            res.push_back(par);
            return;
        }

        if(open < n){
            generate(par + "(",closed,open+1,n,res);
        }
        if(closed < open){
            generate(par + ")",closed+1,open,n,res);
        }
    }

    vector<string> generateParenthesis(int n) {
       vector<string> res;
       generate("",0,0,n,res);
       return res;

    }
};