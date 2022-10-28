#include <iostream>
using namespace std;
int main (){
    int atual;
    int nascenca;
    cout<<"Digite o ano atual"<<endl;
    cin>>atual;
    cout<<"Digite o ano em que nasceu:"<<endl;
    cin>>nascenca;
    if(atual-nascenca>=16){
        cout<<"Você já pode votar."<<endl;
    }else{
        cout<<"Você ainda não pode votar."<<endl;
    }
return 0;
}
