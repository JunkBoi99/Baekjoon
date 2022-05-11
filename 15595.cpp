#include <iostream>
using namespace std;

struct Submission
{
    long num;
    char userID;
    int result;
    long usedMem;
    int timeTaken;
    int lang;
    int codeLength;
};

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    Submission Request;

    int reqCount;
    cin >> reqCount;

    while(reqCount--)
    {
        cin>>Request.num>>Request.userID>>Request.result>>Request.usedMem>>Request.timeTaken>>Request.lang>>Request.codeLength;
    }
}