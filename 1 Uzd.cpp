#include<iostream>
#include <vector>
using namespace std;
bool gender(string name){
    return (name== "s") ? true : false;
}
void createStars(string name,int plotis){
    vector<char> message;
    string temp = &name[name.length()-1];
    string welcome = (gender(temp)) ? "* Sveikas, " : "*  Sveika, ";
    welcome+= name+ " *";
    for (int i = 0; i <welcome.size(); i++)
    {
     message.push_back(welcome[i]);
    }
    for(int j =0;j<plotis;j++)
    {
        for (int i = 0; i < message.size(); i++)
        {
            if(j==0||j==plotis-1)
            cout<<"*";
            else if(j==plotis/2)
            cout<<message[i];
            else if(i==0||i==message.size()-1)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }

    }

int main(){
    string name;
    int plotis;
    cout<<"prasome ivesti savo varda: ";
    cin>>name;
    cout<<"prasome ivesti ploti: ";
    cin>>plotis;
    createStars(name,plotis);
}
