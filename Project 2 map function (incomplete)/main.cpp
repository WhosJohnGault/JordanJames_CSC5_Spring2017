 #include <iostream>
using namespace std;


void draw(int,int);
int main()
{
    cout<<"Main Board\n";
    draw(3,4);

    system("pause");
}

void draw(int x, int y)
{
   
    
    
    for(int i = 1; i < 7; i++) 
        if (i < 0)
            cout<<" "<<i;
        else
            cout<<"  "<<i;
    cout<<endl;

    for(int i = 0; i < 6; i++)
        {
            cout<<(char)(i + 49);
            for(int j = 1; j < 7; j++)
            if(i == y - 1 && j == x)
                cout<<" x ";
            else
                cout<<" . ";

            cout<<(char)(i + 48)<<endl;}
    cout<<"press a to move west, w to move north,d to move east or s to move south"<<endl;
    char move;
    cin>>move;
    switch(move){
        case'a':(x-1,y);
        case's':(x,y-1);
        case'd':(x+1,y);
        case'w':(x,y+1);

    // cin<<move;
}     
}

