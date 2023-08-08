#include<iostream>
#include<map>


using namespace std;
int main()
{
    map <string, int> m;
    map <string, int>::iterator it;

    /*m["dipto"]=43;
    m["arnob"] = 42;
    m["nabil"] = 40;
    m["ali"] = 35;*/
    for(int i=0;i<5;i++){
        cin>>m[i];
    }
    it=m.begin();
    for(it=m.begin();it!=m.end();it++){
    cout<<it->first<<endl;
    }
    return 0;

}