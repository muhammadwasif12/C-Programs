#include<iostream>
using namespace std;

class Shop{
    int itemId[100];
    int itemprice[100];
    int counter;
    public:
    void initcounter(void){counter=0;}
    void setprice(void);
    void displayprice(void);
};
void Shop::setprice(){
    cout<<"Enter the Id of your item "<<counter+1<<endl;
    cin>>itemId[counter];
    cout<<"Enter the price of your item : "<<endl;
    cin>>itemprice[counter];
    counter ++;
}
void Shop::displayprice(){
    for (int i = 0; i < counter; i++)
    {
        cout<<"The price of the item with id is "<<itemId[i]<<" is "<<itemprice[i]<<endl;

    }
}

int main(){
Shop dukaan;
dukaan.initcounter();
dukaan.setprice();
dukaan.setprice();
dukaan.setprice();
dukaan.displayprice();

    return 0;
}