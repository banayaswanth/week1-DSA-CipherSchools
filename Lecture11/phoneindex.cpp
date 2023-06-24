#include <bits/stdc++.h>
using namespace std;
vector<string> dialpad = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
void generateParenthesis (string &input,string &strSoFar, vector<string> &result, int start, int end)
{
    if (start > end) {
         result.push_back(strSoFar);
         return;
     }

    else 
     {
        char digitPressed = input[start];
        string possibleMoves = dialpad[digitPressed = '0'];
        for(int i=0;i<possibleMoves.size();i++) {
            strSoFar.push_back(possibleMoves[i]);
            generateParenthesis (input,strSoFar, result,start+1, end);
            strSofar.pop_back();
        
        }
    }
}

vector<string> generateParenthesis(string &input) {
    vector<string> result;
    int start=0, end = input.size()-1;
    string strSoFar = "";
    generateParenthesis (input,strSoFar, result, start, end);
    return result;
}
int main()
{

}