#include <iostream>
#include <cmath>


using namespace std;

int main()
{
    int wybor = 0;
    while(wybor!=1 && wybor!=2 && wybor!=3){
        cout <<"Napisz 1 jezeli chcesz przelicznik z mil na metry" << endl;
        cout<<"Napisz 2 jezeli chcesz przelicznik z lat na miesiace"<<endl;
        cout<<"Napisz 3 jezeli chcesz wskaznik BMI"<<endl;
    cin>>wybor;
    if(wybor!=1 && wybor!=2 && wybor!=3)
    {
        cout<<"NAPISZ IDIOTO 1, 2 LUB 3"<<endl;
    }
    }
        if(wybor==1)
        {
            float mile;
            cout<<"Napisz mile"<<endl;
            cin>>mile;
            cout<<"To "<< mile*1852 <<" metrow"<<endl;
        }
        if(wybor==2)
        {
            int lata;
            cout<<"Napisz lata"<<endl;
            cin>>lata;
            cout<<"To "<< lata*12 << " miesiecy"<<endl;
        }
        if(wybor==3)
        {
            float masa,wzrost;
            cout<<"Napisz ile wazysz"<<endl;
            cin>>masa;
            cout<<"Napisz ile masz wzrostu w metrach"<<endl;
            cin>>wzrost;
            cout<<"Twoje BMI to "<< masa/pow(wzrost,2)<<endl;
        }
    return 0;
}
