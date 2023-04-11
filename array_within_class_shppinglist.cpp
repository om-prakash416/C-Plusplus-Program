#include<iostream>
using namespace std;
const m=50;
class ITEMS
{
    int itemcode[m];
    float itemprice[m];
    int count;
    public:
    void CNT(void){count=0;}
    void getitem(void);
    void s\displaysum(void);
    void remove(void);
    void dispayaItems(void);
};
//==================================================
void ITEMS:: getitem(void)
{
    cout<<"enter item code: ";
    cin>>itemcode[count];
 count<<"enter item cost: ";
 cin>>itemprice[m];
 count++;   
}
void ITEMS::dispayaItems(void)
{
    float sum=0;
    for(int i=0;i<count;i++)
    sum=sum+itemprice[i];
    cout<"\ntotal value:"<<sum<<"\n";
}
void ITEMS::remove(void)
{
    int a;
    cout<<"enter item code: ";
    cin>>a;
    for (int i = 0; i < count; i++)
    {
       if(itemcode[i]==a);
       itemprice[i]=0;
    }
    void ITEMS:: displayItems(void)
    {
        cout <<"\n code price\n";
        for (int i = 0; i < count; i++)
        {
            cout<<"\n"<<itemcode[i];
            cout<<" "<<itemsprice[i];
        }
        cout<<"\n";
    }
    //===================================
    int main(){
        ITEMS order;
        order.CNT();
        int x;
        do{
            cout<<"\nyoy can do the following: "<<"enter appropriate number \n";
            cout<<"\n1 :Add an item ";
            cout<<"\n2 :display total value";
            cout<<"\n3 :delete an item";
            cout<<"\n4 :display all items";
            cout<<"\n5 :quoit";
            cout<<"\n\nwhat is your option?";
            cint>>x;
            switch(x);
            {
                case 1: order.getitem();break;
                case 2:order.displaysum();break;
                case 3:order.remove();break;
                case 4:order.displayitems();break;
                case 5:break;
                default:cout<<"error in input;try again\n";
            }
        } while (x!=5);
    }
        return 0;
    }