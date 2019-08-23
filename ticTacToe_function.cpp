#include<iostream>
using namespace std;
char a[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char turn='X';
bool draw=false;
void display()
{
    //System("cls");
    cout<<"\t\t                      TIC TAC TOE\n\n";
    cout<<"\t\t                        |     |     \n";
    cout<<"\t\t                     "<<a[0][0]<<"  |  "<<a[0][1]<<"  |  "<<a[0][2]<<"  \n";
    cout<<"\t\t                   _____|_____|_____\n";
    cout<<"\t\t                        |     |     \n";
    cout<<"\t\t                     "<<a[1][0]<<"  |  "<<a[1][1]<<"  |  "<<a[1][2]<<"  \n";
    cout<<"\t\t                   _____|_____|_____\n";
    cout<<"\t\t                        |     |     \n";
    cout<<"\t\t                     "<<a[2][0]<<"  |  "<<a[2][1]<<"  |  "<<a[2][2]<<"  \n";
    cout<<"\t\t                        |     |     \n\n";
}
void p_turn()
{
    int choice,i,j;
    if(turn=='X')
    {
       cout<<"\t\tPlayer [X] turn:";
    }
    if(turn=='O')
    {
       cout<<"\t\tPlayer [O] turn:";
    }
    cin>>choice;
    switch(choice)
    {
        case 1: i=0; j=0; break;
        case 2: i=0; j=1; break;
        case 3: i=0; j=2; break;
        case 4: i=1; j=0; break;
        case 5: i=1; j=1; break;
        case 6: i=1; j=2; break;
        case 7: i=2; j=0; break;
        case 8: i=2; j=1; break;
        case 9: i=2; j=2; break;
        default: cout<<"PLEASE ENTER CORRECT CHOICE!";
    }
    if(turn=='X' && a[i][j]!='X' && a[i][j]!='O')
    {
        a[i][j]='X';
        turn='O';
    }
    else if(turn=='O' && a[i][j]!='X' && a[i][j]!='O')
    {
        a[i][j]='O';
        turn='X';
    }
    else
    {
        cout<<"ALREADY FIELD!\n";
        //p_turn();
    }
}
bool winner()
{
    int i,j;
    for(i=0;i<3;i++)
    {
        if(a[i][0]==a[i][1] && a[i][0]==a[i][2] || a[i][0]==a[1][i] && a[0][i]==a[2][i])
        {
            return false;
        }
    }
    if(a[0][0]==a[1][1] && a[0][0]==a[2][2] || a[0][2]==a[1][1] && a[0][2]==a[2][0])
    {
        return false;
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j]!='X' && a[i][j]!='O')
            {
                return true;
            }
        }
    }
    draw=true;
    return false;
}
int main()
{
    display();
    while(winner())
    {
        p_turn();
        display();
        winner();
    }
    if(turn=='X' && draw==false)
    {
        cout<<"Congratulations!! Player [O] wins";
    }
    else if(turn=='O' && draw==false)
    {
        cout<<"Congratulations!! Player [X] wins";
    }
    else
    {
        cout<<"draw!!";
    }

    return 0;
}

