/*Write a program to enter the code, name and price of items. The user must
feed the quantity in which he wants a product. The program must calculate
and display the final bill of 10 items in the following format.
Sl.No.  Code        Name            Price   Quantity    Total
-------------------------------------------------------------------------------------
1.      rib001      Printercatrige  300     2           600
2.      Pap45       A4 size paper   200     0           0
3.      Bk216       Computer book   350     5           1750
--------------------------------------------------------------------------------------
                                                Total = Rs.2350/-*/

#include<iostream>
#include<string.h>
using namespace std;

class item{
    int code;
    char name[50];
    int price;
    int qty;
    public: 
        void set(int c,char n[],int p,int q){
            strcpy(name,n);
            code=c;
            price=p;
            qty=q;
        }
        int display(){
            
            cout<<"      "<<code<<"         "<<name<<"         "<<price<<"     "<<qty<<"           "<<qty*price<<endl;
            return(qty*price);
        }
};


int main(){
    int code;
    char *name=new char[50];
    int price;
    int qty;
    item t[2];
    int total=0;
    cout<<"Enter the details for 10 items"<<endl;
    for(int i=0;i<2;i++){
        cout<<"Code: ";
        cin>>code;
        cout<<"Name: ";
        cin>>name;
        cout<<"Price: ";
        cin>>price;
        cout<<"Quantity: ";
        cin>>qty;
        t[i].set(code,name,price,qty);
    }
    cout<<"Sl.No.  Code        Name             Price   Quantity    Total"<<endl;
    cout<<"-------------------------------------------------------------------------------------"<<endl;
    for(int i=0;i<2;i++){
        cout<<i;
        total+=t[i].display();
    }
    cout<<"--------------------------------------------------------------------------------------"<<endl;
    cout<<"                                                Total = Rs."<<total<<"/-"<<endl;
}
