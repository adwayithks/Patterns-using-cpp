#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
    string s[5]={"Cauliflower","Carrot","Beetroot","Tomato","Cabbage"};
    double price[5]={35.0,70.0,45.0,90.0,28.0};
    double units[5];
    double total{};
    cout<<fixed<<setprecision(2);
    for(int i{};i<5;i++)
    {
        cout<<"No.of units of "<<s[i]<<" bought : ";
        cin>>units[i];
    }
    cout<<endl;
    cout<<"--------------------------------------------------------------------------"<<endl;
    cout<<setw(15)<<"Item Name"<<setw(3)<<"|"<<setw(15)<<"Price/unit"<<setw(3)<<"|"
    <<setw(15)<<"No.of units"<<setw(3)<<"|"<<setw(17)<<"Total price"<<setw(3)<<"|"<<endl;
    cout<<"--------------------------------------------------------------------------"<<endl;
    for(int i;i<5;i++)
    {
        cout<<setw(15)<<s[i]<<setw(3)<<"|"<<setw(15)<<price[i]<<setw(3)<<"|"
        <<setw(15)<<units[i]<<setw(3)<<"|"<<setw(9)<<"Rs. "<<setw(8)<<price[i]*units[i]<<setw(3)<<"|"<<endl;
        total=total+price[i]*units[i];
    }
    cout<<"--------------------------------------------------------------------------"<<endl;
    cout<<setw(51)<<"Grand Total"<<setw(3)<<"|"<<setw(9)<<"Rs. "<<setw(8)<<total<<setw(3)<<"|"<<endl;
    cout<<"--------------------------------------------------------------------------"<<endl;
    return 0;

}