#include <iostream>

using namespace std;
#define N 3

bool CheckWinner(char chart[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            /// 4 conditions
            if(chart[i][j] == 'X')
            {
                if(chart[i-1][j-1] == 'X' && chart[i+1][j+1] == 'X')/// skew right
                {
                    printf("X wins!\n");
                    return true;
                }
                else if(chart[i][j-1] == 'X' && chart[i][j+1] == 'X')/// horizon
                {
                    printf("X wins!\n");
                    return true;
                }
                else if(chart[i-1][j] == 'X' && chart[i+1][j] == 'X')/// Vertical
                {
                    printf("X wins!\n");
                    return true;
                }
                else if(chart[i-1][i+1] == 'X' && chart[i+1][j-1] == 'X')///Skew left
                {
                    printf("X wins!\n");
                    return true;
                }
            }
            else if(chart[i][j] == 'O')
            {
                if(chart[i-1][j-1] == 'O' && chart[i+1][j+1] == 'O')/// skew right
                {
                    printf("O wins!\n");
                    return true;
                }
                else if(chart[i][j-1] == 'O' && chart[i][j+1] == 'O')/// horizon
                {
                    printf("O wins!\n");
                    return true;
                }
                else if(chart[i-1][j] == 'O' && chart[i+1][j] == 'O')/// Vertical
                {
                    printf("O wins!\n");
                    return true;
                }
                else if(chart[i-1][i+1] == 'O' && chart[i+1][j-1] == 'O')///Skew left
                {
                    printf("O wins!\n");
                    return true;
                }
            }
        }
    }
    return false;
}
int main()
{
    int x, y;
    bool side = 0;
    char chart[3][3]={};
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            chart[i][j] = 'N';
        }
    }
    
    cout<< "Input a number\n";
    
    while (true)
    {
        cin >> x >> y  ;
        //cout << x <<", "<< y<< ", "<< side<<"\n";
        if(side == 0)
            chart[x][y] = 'O';
        else
            chart[x][y] = 'X';
        
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                printf(" %c ", chart[i][j]);
            }
            printf("\n");
        }
        
        if( CheckWinner(chart) == true )
            break;
        
        side = !side;
     }
    
    return 0;
}

