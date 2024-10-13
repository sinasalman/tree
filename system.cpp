#include<iostream>
#include"tree.h"
using namespace std;
int main(){
    tree t;
    bool setLoop = true ;
    while (setLoop){
        int x;
        cout<<"Add Node : 1 \n Exit : 0";
        cin>>x;
        if(x == 1){
            int data , dir;
            cout<<"Left or Right ? : 1: Left   0: Right";
            cin>>dir;
            cout<<"Data : ";
            cin >> data;
            
            t.insert(data,dir);
            system("cls");
        }else{
            
            setLoop = false;
            
        }

    }
    t.DisplayTree();
    
}

