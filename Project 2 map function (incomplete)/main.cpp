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
    int cmnd;
    /*char a=x-1;
    char s=y-1;
    char d=x+1;
    char w=y+1; */
    for(int i = 1; i < 7; i++) 
        if (i < 0)
            cout<<" "<<i;
        else
            cout<<"  "<<i;
    cout<<endl;

    for(int i = 1; i < 7; i++)
        {
            cout<<(char)(i + 49);
            for(int j = 1; j < 7; j++)
            if(i == y - 1 && j == x)
                cout<<" x ";
            else
                cout<<" . ";

            cout<<(char)(i + 48)<<endl;}
            /*cout<<"Press a to move left,s to move down, d to move right, w to move up"<<endl;
            cin>>cmnd; */
        
}


