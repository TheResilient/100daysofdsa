#include <bits/stdc++.h>
using namespace std;

bool isRobotBounded(string instructions) {
    int n = instructions.size();
    int x = 0, y = 0, dir = 0;
    for(int i = 0; i < n; i++){
        if(instructions[i] == 'G'){
            if(dir == 0) y++;
            else if(dir == 1) x++;
            else if(dir == 2) y--;
            else x--;
        }
        else if(instructions[i] == 'L'){
            dir = (dir + 3) % 4;
        }
        else if(instructions[i] == 'R'){
            dir = (dir + 1) % 4;
        }
    }
    return x == 0 && y == 0 || dir != 0;
}

int main(){
    string instructions = "GGLLGG";
    cout << isRobotBounded(instructions) << endl;
    return 0;
}