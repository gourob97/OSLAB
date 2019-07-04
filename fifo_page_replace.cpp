#include<bits/stdc++.h>

using namespace std;

int main()
{
    int frame,process,fault=0, hit=0,miss=0;
   queue <int> q;


    cout<<"Frame Size ?"<<endl;
    cin>>frame;

     cout<<"Pages ?"<<endl;
     cin>>process;
     int p[process];

     bool visited[process]= {false};


for(int i=0; i<process; i++)
{
      cin>>p[i];
}

for(int i=0; i<process; i++)
{

    if(visited[p[i]]==false && q.size()< frame)
        {
            q.push(p[i]);
            visited[p[i]]=true;
            miss++;
        }

     else if(visited[p[i]]==true)
            hit++;

    else
        {
            visited[q.front()==false];
            q.front()=p[i];
            visited[p[i]]=true;
            fault++;
            miss++;
        }
}

    float hr=float(hit)/process;

    cout<<"fault = "<<fault<<endl;
    cout<<"hit = "<<hit<<endl;
    cout<<"miss = "<<miss<<endl;
    cout<<"hit ratio= "<<setprecision(2)<<hr<<endl;


     return 0;

}
