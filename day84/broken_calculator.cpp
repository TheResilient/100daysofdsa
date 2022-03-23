#include<bits/stdc++.h>
using namespace std;

int brokenCalc(int startValue, int target)
{
    int result = 0;
    while (target > startValue)
    {
        result++;
        if (target % 2 == 0)
            target = target / 2;
        else
            target += 1;
    }
    result = result + (startValue - target);
    return result;
}
int main(){
    int startValue, target;
    cin>>startValue>>target;
    cout<<brokenCalc(startValue, target)<<endl;
    return 0;
}