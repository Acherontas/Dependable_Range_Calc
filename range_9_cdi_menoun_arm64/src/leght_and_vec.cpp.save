#include "leght_and_vec.h"
//ctor
leght_and_vec::leght_and_vec(){}
//dtor
leght_and_vec::~leght_and_vec(){}
//copy ctor
leght_and_vec::leght_and_vec(const leght_and_vec& other){}
// handle self assignment//assignment operator
leght_and_vec& leght_and_vec::operator=(const leght_and_vec& rhs){if (this == &rhs) return *this; return *this;}

int leght_and_vec::find_remain(long double xmn){
    for(int i=0;i<=10;i++){ar[i][0]=i;ar[i][1]=-1;ar[i][2]=-1;}
    //cout<<"Result Initiliazation----\n";
    //for(int i=0;i<=10;i++){cout<<ar[i][0] <<" " << ar[i][1] << " " << ar[i][2] <<"\n";ar[i][1]=-1;}
    //cout<<"\n";
    string smlk;
    smlk+=to_string(xmn);
    string xmlk;
    int xpos=0;
    char ck;
    int lk;
    for(int i=0;i<=smlk.size()-1;i++){
        if(smlk.at(i)=='.'){break;}
        if(smlk.at(i)!='.'){
                            xmlk+=smlk.at(i);
                            ck=smlk.at(i);
                            lk=stoi(&ck);
                            ar[lk][1]=lk;
                            ar[lk][2]=0;
                           }
    }
    // cout<<"Result add number----\n";
    //for(int i=0;i<=10;i++){cout<<ar[i][0] << " " << ar[i][1] <<"\n";}
    int ypos=0;
    string nlk;
    //cout<<"Last----\n";
    //for(int i=0;i<=10;i++){cout<<ar[i][0] << " " << ar[i][1] <<" " << ar[i][2] <<"\n";}
    //cout<<"Modify--\n";
    ypos=0;
    string strl;
    for(int i=0;i<=9;i++){

             if(ar[i][2]==-1){ar[i][2]=i;strl+=to_string(i);}

    }
    //for(int i=0;i<=10;i++){ cout<<ar[i][0] << " " << ar[i][1] <<" " << ar[i][2] <<"\n";}
    cout<<xmn << " " << strl <<"\n";
    long double xli;
    xli=stold(strl);
    da_remains=xli;
    cout<<"as number main " << xmn <<"\n";
    cout<<"as a number " << xli <<"\n";
    return 0;
}
