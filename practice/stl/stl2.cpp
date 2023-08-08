/*#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main()
{
    vector<int> vec(10,0);
    for(int i=0l;i<vec.size();i++){
        cin>>vec[i];
    }
    for(int i=0;i<vec.size();i++){
     cout<<vec[i]<<endl;
    }
    return 0;

}
/*
#include <iostream>
#include <vector>
#include <iterator>
#include<algorithm>
bool myfun(int a,int b){
    return (a>b);
}
using namespace std;
int main()
{
    vector<int> vec;
    vector<int> ::iterator it;
   
    
        vec.push_back(65);
        vec.push_back(5);
        vec.push_back(985);
        vec.push_back(6);
        vec.push_back(85);

        /*for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<"\t";
    }*/
        /* puts("");
    it=vec.begin();
    it;
    cout<<*it<<endl;*/
        /*for(int x: vec){
        cout<<vec[x]<<endl;
    }*/
        /*sort(vec.begin(), vec.begin()+3);
        for (it = vec.begin(); it != vec.end(); it++)
        {
            cout << *it << endl;
    }
    
    return 0;
}*/
/*
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include<list>
using namespace std;
int main()
{ 
   list<float> mylist; 
   list<float> ::iterator it;
   mylist.push_back(10);
   mylist.push_back(56.3);
   mylist.push_front(2);
   mylist.reverse();
   mylist.clear();
   for(it= mylist.begin();it!=mylist.end();it++){
       cout<<*it<<"\t";
   }
   return 0;
}*/
/*#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <list>
using namespace std;
int main()
{   
    int ar[5]={9,8,12,6,3};
    list<int> mylist(ar,ar+5);
    list<int>::iterator it;
   
    it=find(mylist.begin(),mylist.end(),12);
    cout<<*it<<endl;
    mylist.insert(it,11);
    for(it=mylist.begin();it!=mylist.end();it++){
        cout<<*it<<"\t";
    }

    return 0;
}
*/
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <list>
using namespace std;
int main()
{
    int arr[5]={90,45,65,21,3};
    int n;
    list<int> mylist(arr,arr+5);
    list<int> ::iterator it;
    mylist.push_front(90);
    cin>>n;
    it=find(mylist.begin(),mylist.end(),n);
    if(it==mylist.end()){
        cout<<"not fond"<<endl;
    }
    else{
        cout<<"found"<<endl;
        mylist.pop_front();
    }
    

    

    return 0;
}
