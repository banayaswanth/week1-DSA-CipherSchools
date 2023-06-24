#include <bits/stdc++.h>
using namespace std;
void generateParenthesis (string &strSoFar, vector<string> &result, int open, int close)
{
    if (open<0 ||  close>0 || open>close) {
     return;
     }else if (open==0 && close == 0) {
         result.push_back(strSoFar);
         return;
    }
    else if(open<=close) {
    strSoFar.push_back('(');
    generateParenthesis (strSoFar, result, open-1, close);
    strSofar.pop_back();
    strSofar.push_back(')');
    generateParenthesis (strSoFar, result, open, close-1);
    strSofar.pop_back();
    }
}

vector<string> generateParenthesis(const int n) {
    vector<string> result;
    int open=n, close = n;
    string strSoFar = "";
    generateParenthesis (strSoFar, result, open, close);
}
int main()
{

}