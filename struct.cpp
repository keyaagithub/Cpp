#include<iostream>
#include<string.h>
using namespace std;

struct cricket{
    char name[10];
    char team[10];
    float avg;
    void read(int);
    void team_sort(struct cricket[],int);
    void display(int);
};
cricket players[5];

void cricket::read(int n){
    for(int i=0;i<n;i++){
        cout<<"Enter player's name: ";
        cin>>players[i].name;
        cout<<"Enter team's name: ";
        cin>>players[i].team;
        cout<<"Enter batting average: ";
        cin>>players[i].avg;
    }
}

void cricket::team_sort(struct cricket players[],int n){
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(players[j].team,players[j+1].team)>0) {
                cricket temp = players[j];
                players[j] = players[j + 1];
                players[j + 1] = temp;
            }
        }
    }
}

void cricket::display(int n){
    cout<<"Player\tTeam\tAverage\n";
    for(int i=0;i<n;i++){
        cout<<players[i].name<<"\t"<<players[i].team<<"\t"<<players[i].avg<<"\n";
    }
}

int main(){
    int n;
    cout<<"Number of players: ";
    cin>>n;
    cricket p;
    p.read(n);
    p.team_sort(players,n);
    p.display(n);
}
