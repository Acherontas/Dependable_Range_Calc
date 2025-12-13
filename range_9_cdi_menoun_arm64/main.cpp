#include <iostream>
#include "leght_and_vec.h"
#include "sum_cdi.h"

using namespace std;

int main(int argc,char** argv)
{
    long double mn;
    cout<<"enter main number only \n";
    mn=stoll(argv[1]);

    leght_and_vec *lavc=new leght_and_vec();
    lavc->find_remain(mn);


    cout<<"\n";
    cout<<"Reporting In main fuction\n";
    sum_cdi *smcd=new sum_cdi();
    cout<<"Main number : " <<  mn <<"\n";
    smcd->cdis(mn,1);
    cout<<"\n";
    cout<<"Secondary : "  << lavc->da_remains <<"\n";
    smcd->cdis(lavc->da_remains,1);

    return 0;
}
