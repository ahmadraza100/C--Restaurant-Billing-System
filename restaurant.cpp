#include<iostream>
using namespace std ;
int main(){

    int burger=250 , pizza=620 , drink=90 , choice;
    cout<<"\t\t\t__________________|Welcome to Restaurant|___________________\n\n";
    cout<<"Press 1 to buy burger\n";
    cout<<"Press 2 to buy pizza\n";
    cout<<"Press 3 to buy drink\n\n";
    cout<<"Please Enter your Choice = ";
    cin>>choice;


    if(choice==1){
        int quantity;
    cout<<"\n\n\t\t\t__________________|Burger Deal = 250Rs/Only|___________________\n\n";
    cout<<"How many Quantity you want to buy";
    cin>>quantity;

    int price = quantity*burger;
    int tip = (price/100)*15;
    int net = price + tip ;
    cout<<"\n\n\t\t\t__________________|Bill|___________________\n\n";
    cout<<"The price of burgers are "<<price<<endl ;
    cout<<"The 15% Additional Charges are =  "<<tip<<endl ;
    cout<<"The Net Amount is =  "<<net<<endl ;
    cout<<"\n\n\t\t\t__________________|Thank You!|___________________\n\n";

    }

     else if(choice==2){
        int quantity;
    cout<<"\n\n\t\t\t__________________|Pizza Deal = 620Rs/Only|___________________\n\n";
    cout<<"How many Quantity you want to buy";
    cin>>quantity;

    int price = quantity*pizza;
    int tip = (price/100)*15;
    int net = price + tip ;
    cout<<"\n\n\t\t\t__________________|Bill|___________________\n\n";
    cout<<"The price of Pizza is = "<<price<<endl ;
    cout<<"The 15% Additional Charges are =  "<<tip<<endl ;
    cout<<"The Net Amount is =  "<<net<<endl ;
    cout<<"\n\n\t\t\t__________________|Thank You!|___________________\n\n";

    }

    else if(choice==3){
        int quantity;
    cout<<"\n\n\t\t\t__________________|Drinks = 90Rs/Only|___________________\n\n";
    cout<<"How many Quantity you want to buy";
    cin>>quantity;

    int price = quantity*drink;
    int tip = (price/100)*15;
    int net = price + tip ;
    cout<<"\n\n\t\t\t__________________|Bill|___________________\n\n";
    cout<<"The price of drink is = "<<price<<endl ;
    cout<<"The 15% Additional Charges are =  "<<tip<<endl ;
    cout<<"The Net Amount is =  "<<net<<endl ;
    cout<<"\n\n\t\t\t__________________|Thank You!|___________________\n\n";

    }
    else{
        cout<<"Sorry ! The item you have selected is not exist in our menu" ; 
    }
    return 0 ;
}