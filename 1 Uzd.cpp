#include<iostream>
#include <vector>
using namespace std;
bool gender(string name){
    return (name== "s") ? true : false;
}
void createStars(string name){
    vector<char> message;
    string temp = &name[name.length()-1];
    string welcome = (gender(temp)) ? "* Sveikas, " : "*  Sveika, ";
    welcome+= name+ " *";
    for (int i = 0; i <welcome.size(); i++)
    {
     message.push_back(welcome[i]);

    }

    char ln1[message.size()],ln2[message.size()],ln4[message.size()],ln5[message.size()];
    for (int i = 0; i < message.size(); i++)
    {

        ln1[i]='*';
        ln5[i]='*';
        if(i==0||i==welcome.size()-1)
        ln2[i]=ln4[i]='*';
        else
        ln2[i]=ln4[i]=' ';

    }
    for(int i = 0;i<5;i++){

    for(int j = 0;j<message.size();j++){
        switch (i){
    case 0:
        cout<<ln1[j];
        break;
    case 1:
        cout<<ln2[j];
        break;
    case 2:
        cout<<message[j];
        break;
    case 3:
        cout<<ln4[j];
        break;
    case 4:
        cout<<ln5[j];
        break;
        }
    }
    cout<<endl;
    }
}
int main(){
    string name;

    cout<<"prasome ivesti savo varda: ";
    cin>>name;
    createStars(name);
}
