#include<iostream>
using namespace std;
int main()
{
    //system("cls");
    char a[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
    char turn='X';
    int choice,i,j;

    cout<<"\t\t                      TIC TAC TOE\n\n";
    cout<<"\tX for Player 1\n\n";
    cout<<"\tO for Player 2\n\n";
    cout<<"\t\t                        |     |     \n";
    cout<<"\t\t                     "<<a[0][0]<<"  |  "<<a[0][1]<<"  |  "<<a[0][2]<<"  \n";
    cout<<"\t\t                   _____|_____|_____\n";
    cout<<"\t\t                        |     |     \n";
    cout<<"\t\t                     "<<a[1][0]<<"  |  "<<a[1][1]<<"  |  "<<a[1][2]<<"  \n";
    cout<<"\t\t                   _____|_____|_____\n";
    cout<<"\t\t                        |     |     \n";
    cout<<"\t\t                     "<<a[2][0]<<"  |  "<<a[2][1]<<"  |  "<<a[2][2]<<"  \n";
    cout<<"\t\t                        |     |     \n\n";

    while(1)
    {
        if(turn=='X'){
           cout<<"\t\tPlayer [X] turn:";}
        if(turn=='O'){
           cout<<"\t\tPlayer [O] turn:";}
        cin>>choice;

        switch(choice){
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
                    if(turn=='X'){
                        turn='O';}
                    if(turn=='O'){
                        turn='X';}
            continue;}

        if(turn=='X' && a[i][j]!='X' && a[i][j]!='O'){
           a[i][j]='X';
           turn='O';}
        else if(turn=='O' && a[i][j]!='X' && a[i][j]!='O'){
           a[i][j]='O';
           turn='X';}
        else{
           cout<<"ALREADY FIELD!\n";}

        cout<<"\t\t                      TIC TAC TOE\n\n";
        cout<<"\t\t                        |     |     \n";
        cout<<"\t\t                     "<<a[0][0]<<"  |  "<<a[0][1]<<"  |  "<<a[0][2]<<"  \n";
        cout<<"\t\t                   _____|_____|_____\n";
        cout<<"\t\t                        |     |     \n";
        cout<<"\t\t                     "<<a[1][0]<<"  |  "<<a[1][1]<<"  |  "<<a[1][2]<<"  \n";
        cout<<"\t\t                   _____|_____|_____\n";
        cout<<"\t\t                        |     |     \n";
        cout<<"\t\t                     "<<a[2][0]<<"  |  "<<a[2][1]<<"  |  "<<a[2][2]<<"  \n";
        cout<<"\n";

        for(i=0;i<3;i++){
           if(a[i][0]==a[i][1] && a[i][0]==a[i][2] || a[i][0]==a[1][i] && a[0][i]==a[2][i]){
               if(turn=='X'){
                  cout<<"Congratulations!! Player [O] wins";}
               else if(turn=='O'){
                  cout<<"Congratulations!! Player [X] wins";}
        return 0;}}
        if(a[0][0]==a[1][1] && a[0][0]==a[2][2] || a[0][2]==a[1][1] && a[0][2]==a[2][0]){
           if(turn=='X'){
               cout<<"Congratulations!! Player [O] wins";}
           else if(turn=='O'){
               cout<<"Congratulations!! Player [X] wins";}
        return 0;}
        for(i=0;i<3;i++){
           for(j=0;j<3;j++){
               if(a[i][j]!='X' && a[i][j]!='O'){
                  continue; }}
        }
        if(a[0][0]!='1'&&a[0][1]!='2'&&a[0][2]!='3'&&a[1][0]!='4'&&a[1][1]!='5'&&a[1][2]!='6'&&a[2][0]!='7'&&a[2][1]!='8'&&a[2][2]!='9'){
           cout<<"draw!!";
        return 0;}
    }
    return 0;
}


