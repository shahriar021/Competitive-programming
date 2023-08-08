/*#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main()
{
   long long int number,vSize;
   cin>>vSize;
   vector<long long int> numberHolder;
    while(cin>>number){
        numberHolder.push_back(number);
    }
    sort(numberHolder.begin(),numberHolder.end());
    
     vSize=numberHolder.size();
    
    if(vSize==0){
        cout<<"empty"<<endl;
        return 1;
    }

    int numcount=1;
    number=numberHolder[0];

    for(long long int i=1;i<vSize;i++){
        if(number!=numberHolder[i]){
            cout<<number<<" aparece "<<numcount<<" vez(es) "<<endl;
            numcount=0;
            number=numberHolder[i];
        }
        numcount++;
    }


return 0;
}
*/
#include<iostream>
#include <stdio.h>
int main()
{
    int first[2010] = {0};
    int i, n, m;
    scanf(" %d", &n);
    for (i = 0; i < n; i++)
    {
        scanf(" %d", &m);
        first[m]++;
    }
    for (i = 1; i <= 2000; i++)
    {
        if (first[i] > 0)
            printf("%d apparece %d vez (es)\n", i, first[i]);
    }
    return 0;
}
