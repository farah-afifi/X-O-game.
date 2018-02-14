#include <iostream>
using namespace std;
int main()
{   int x=1;
    char index[3][3];
    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            index[i][j]=char(x+'0');
            x++;
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<index[i][j];
            if(j!=2){
               cout<<'|';
            }
        }
        cout<<endl;
    }
    for (int k=0;k<9;k++){
       if(k%2==0){
            cout<<"player 1's turn"<<endl<<"please pick the position's number:"<<endl;
            int position;
            cin>>position;
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    if(index[i][j]==char(position+'0')){
                        index[i][j]='X';
                    }
                    cout<<index[i][j];
                        if(j!=2){
                            cout<<'|';
                        }
                }
            cout<<endl;
            }
            if ((index[0][0]=='X'&&index[1][1]=='X'&&index[2][2]=='X')||(index[0][2]=='X'&&index[1][1]=='X'&&index[2][0]=='X')||
            (index[0][0]=='X'&&index[0][1]=='X'&&index[0][2]=='X')||(index[1][0]=='X'&&index[1][1]=='X'&&index[1][2]=='X')||
            (index[2][0]=='X'&&index[2][1]=='X'&&index[2][2]=='X')||(index[0][0]=='X'&&index[1][0]=='X'&&index[2][0]=='X')||
            (index[0][1]=='X'&&index[1][1]=='X'&&index[2][1]=='X')||(index[0][2]=='X'&&index[1][2]=='X'&&index[2][2]=='X')){
                cout<<"player 1 is the winner!!";
                return 0;
            }
       }

        else{
            cout<<"player 2's turn"<<endl<<"please pick tfv\he position's number:"<<endl;
            int position;
            cin>>position;
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    if(index[i][j]==char(position+'0')){
                        index[i][j]='O';
                    }
                    cout<<index[i][j];
                        if(j!=2){
                            cout<<'|';
                        }
                }
            cout<<endl;
            }
            if ((index[0][0]=='O'&&index[1][1]=='O'&&index[2][2]=='O')||(index[0][2]=='O'&&index[1][1]=='O'&&index[2][0]=='O')||
            (index[0][0]=='O'&&index[0][1]=='O'&&index[0][2]=='O')||(index[1][0]=='O'&&index[1][1]=='O'&&index[1][2]=='O')||
            (index[2][0]=='O'&&index[2][1]=='O'&&index[2][2]=='O')||(index[0][0]=='O'&&index[1][0]=='O'&&index[2][0]=='O')||
            (index[0][1]=='O'&&index[1][1]=='O'&&index[2][1]=='O')||(index[0][2]=='O'&&index[1][2]=='O'&&index[2][2]=='O')){
                cout<<"player 2 is the winner!!";
                return 0;
                }

        }
    }
    cout<<"it's a tie!!";

return 0;
}
