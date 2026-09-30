#include<iostream>
using namespace std;
int winner = 0;
char arr[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
void print(){
    cout<<arr[0][0]<<" | "<<arr[0][1]<<" | "<<arr[0][2]<<"\n"
        <<"--|---|--\n"
        <<arr[1][0]<<" | "<<arr[1][1]<<" | "<<arr[1][2]<<"\n"
        <<"--|---|--\n"
        <<arr[2][0]<<" | "<<arr[2][1]<<" | "<<arr[2][2]<<"\n"
        <<"--|---|--\n";
}
void swapmarker(char **marker){
    if(**marker == 'X'){
        **marker = 'O';
    }else{
        **marker = 'X';
    }
}
int checker(int **player){
    for(int i=0 ; i<3 ; i++){
        //cols ckeck
        if(arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i])
        return **player;
        //rows check
        if(arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2])
        return **player;
        }
        // diagonal-1 ckeck
        if(arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2])
        return **player;
        // diagonal-2 ckeck
        if(arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0])
        return **player;
    return 0;
}
void game(char *marker,int* i,int *player){
    int slot;
    if(*player == 1){
        cout<<"player 1 Choose your slot : ";
    }else{
        cout<<"player 2 Choose your slot : ";
    }
        cin>>slot;
        if(slot > 9 || slot < 1){
            cout<<"Your input is invalid\nPlease enter correct input\n\n";
            *i=*i-1;
            return ;
        }
        cout<<endl;
        int rows,cols;
        rows = (slot-1)/3;
        cols = (slot-1)%3;
        if(arr[rows][cols] == 'O' || arr[rows][cols] == 'X'){
            *i=*i-1;
            cout<<"This place is filled\nPlease enter another input\n\n";
            return ;
        }
        else{
        arr[rows][cols] = *marker;
        winner = checker(&player);
        if(*player == 1){
            *player = 2;
        }else{
            *player = 1;
        }
        // print();
        swapmarker(&marker);
        }
}
int main(){
    cout<<"Choose any one X or O = ";
    char marker;
    cin>>marker;
    int player = 1;
    print();
    for(int i=1; i<10; i++){
    game(&marker,&i,&player);
    print();
    if(winner != 0){
    cout<<"Player "<<winner<<" you are winner\n";
    break;
    }
    }
    if(winner==0)
    cout<<"Game is draw\n";
    return 0;
}