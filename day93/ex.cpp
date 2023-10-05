#include <bits/stdc++.h>

using namespace std;

class Battleship
{
public:
    char teamName;
    int SectorX;
    int SectorY;
};

// check Adjacent ships
void checkAdjacent(vector<vector<char>> &battleArea)
{
    int n = battleArea.size();
    int m = battleArea[0].size();

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int x[] = {0, 1, 1, -1, -1, 0, -1, 1};
            int y[] = {1, 0, 1, -1, 0, -1, 1, -1};

            // Stores current battleship and covert to lower Case
            char currentShip = battleArea[i][j];
            currentShip = tolower(currentShip);

            for (int k = 0; k < 8; k++)
            {
                for (int l = 0; l < 8; l++)
                {
                    // Checks if it out of battleArea
                    if (i + k < 0 or i + k > n or j + l < 0 or j + l > m)
                    {
                        continue;
                    }
                    char temp = battleArea[i + k][i + l];
                    temp = tolower(temp);
                    if (temp != currentShip)
                    {
                        battleArea[i][j] = currentShip;
                    }
                }
            }
        }
    }
}

// creates battle area
vector<vector<char>> createBattleArea(int maxX, int maxY, Battleship ships[], int n)
{
    // initialize empty battle Area
    vector<vector<char>> battleArea(maxX, vector<char>(maxY, ' '));

    for (int i = 0; i < n; i++)
    {
        char teamName = ships[i].teamName;
        int x = ships[i].SectorX;
        int y = ships[i].SectorY;

        battleArea[x - 1][maxY - y] = teamName;
    }

    // checkAdjacent(battleArea);

    return battleArea;
}

// prints battle area
void printBattleArea(vector<vector<char>> battleArea, int maxX, int maxY)
{
    int j = 0, i = 0, k = maxY;
    //cout << "+" << endl;
    for (i = 1; i < maxX; i++)
    {
        for (j = 1; j < maxY; j++)
            cout << "| " << battleArea[i][j] << " ";
        cout << "| " << k-- << endl;

        for (j = 0; j < maxY; j++)
            cout << "+---";
        cout << "+" << endl;
    }
    for (j = 0; j < maxX; j++)
        cout << "  " << j + 1 << " ";
}

int main()
{
    int n = 4;
    Battleship ships[n];

    ships[0].teamName = 'A';
    ships[0].SectorX = 3;
    ships[0].SectorY = 5;

    ships[1].teamName = 'Z';
    ships[1].SectorX = 7;
    ships[1].SectorY = 1;

    ships[2].teamName = 'Z';
    ships[2].SectorX = 4;
    ships[2].SectorY = 4;

    ships[3].teamName = 'A';
    ships[3].SectorX = 2;
    ships[3].SectorY = 6;

    int maxX = 0;
    int maxY = 0;
    for (int i = 0; i < n; i++)
    {
        if (ships[i].SectorX > maxX)
        {
            maxX = ships[i].SectorX;
        }
        if (ships[i].SectorY > maxY)
        {
            maxY = ships[i].SectorY;
        }
    }

    vector<vector<char>> battleArea = createBattleArea(maxX, maxY, ships, n);
    printBattleArea(battleArea, maxX, maxY);
}