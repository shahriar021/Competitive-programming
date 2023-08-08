#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
using namespace std;
/*void vector()
{
    vector<int> A = {11, 5, 9, 14};
    sort(A.begin(), A.end()); //O(NlogN)
    bool present = binary_search(A.begin(), A.end(), 11);
    //present = binary_search(A.begin(), A.end(), 14);
    //A.push_back(99);
    //present=binary_search(A.begin(),A.end(),5);
    //cout<<present<<endl;
    A.push_back(99);
    A.push_back(10);
    A.push_back(98);
    A.push_back(85);
    A.push_back(78);
    A.push_back(123);

    vector<int>::iterator it = lower_bound(A.begin(),A.end(), 70);
    vector<int>::iterator it2 = upper_bound(A.begin(), A.end(), 14);

    //cout<< *it <<" "<< *it2 <<endl;
    //cout  << it2-it << endl;
    //vector<int>::iterator it3;
    for (int &x : A)
    {
        x++;
    }
    for (int x : A)
    {
        cout << x << " ";
    }
    cout << endl;
}*/
void setDemo()
{   
    int n,t,p;
    set<int> S;
    S.insert(1);
    S.insert(2);
    S.insert(-10);
    S.insert(-9);
    S.insert(56);

    for (int x : S)
        cout << x << " ";
    cout << endl;
    //-9,-10,1,2,56
    cin>>n;
    auto it =S.find(n);
    if(it==S.end())
    {
        cout<<" not present\n";
    }
    else{
        cout<<"present\n";
        cout<<*it<<endl;
    }
}
void mapDemo()
{
    map<int, int>A;
    A[1]=100;
    A[2]=-1;
    A[3]=200;
    A[10000232];
    map<char,int> cnt;
    string x="Shahriar chowdhury";
    for(char c: x){
        cnt[c]++;
    }
    cout<<cnt['a']<<" "<<cnt['y']<<endl;
}
void PowerofStl()
{

    //[x,y]
    
}
int main()
{
    //setDemo();
    mapDemo();
    return 0;
}