#include<bits/stdc++.h>

using namespace std;

void maxMeeting(int *,int *,int);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int start[n],end[n];
        cout<<"start time:"<<endl;
        for(int i=0;i<n;i++)
        {
            cin>> start[i];
        }
        cout<<"end time:"<<endl;
        for(int i=0;i<n;i++)
        { cin>>end[i];}
        maxMeeting(start,end,n);
        cout<<endl;
    }
    return 0;

}
struct meet
{
    int start;
    int end;
    int no;
};

bool strisort(meet a,meet b)
{
    if(a.end!=b.end) return (a.end<=b.end);
    return a.no<b.no;
}


void maxMeeting(int start[],int end[],int n)
{
    meet m[n];
    
    for(int i=0;i<n;i++)
    {
        m[i].end=end[i];
        m[i].start=start[i];
        m[i].no=i+1;
    }
    sort(m,m+n,strisort);

    for(auto x:m)
    {
        cout<<x.end<<" "<<x.start<<" "<<x.no<<endl;
    }

    int prev;
    cout<<m[0].no<<" ";
    prev=m[0].end;

    for(int i=1;i<n;i++)
    {
        if(m[i].start>prev)
        {
            cout<<m[i].no<<" ";
            prev=m[i].end;
        }
    }
    
}