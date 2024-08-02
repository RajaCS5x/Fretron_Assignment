#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void shares(vector<int>& apples,vector<int>& ds,int share)
{
    int sum=0;
    for(int i=0;i<apples.size();i++)
    {
        if((sum+apples[i])<=share && apples[i]!=0)
        {
            ds.push_back(apples[i]);
            sum+=apples[i];
            apples[i]=0;
        }
        if(sum==share)break;
    }
    
}

int main() {
    // Write C++ code here
    vector<int> apples;
    int N;
    cout<<"enter number of apples bought : ";
    cin>>N;
    cout<<"Enter Weight of each apple"<<endl;
    double tot_sum=0;
    for(int l=0;l<N;l++)
    {
        int temp;
        cin>>temp;
        apples.push_back(temp);
        tot_sum+=temp;
    }
   
    double tot=100;
    double ram=50,sham=30,rahim=20;
    double s1=(ram/tot)*tot_sum;
    double s2=(sham/tot)*tot_sum;
    double s3=(rahim/tot)*tot_sum;
    
    vector<int> ds1;
    vector<int> ds2;
    vector<int> ds3;
    
    // for Ram
    shares(apples,ds1,s1);
    cout<<"Ram: ";
    for(int i=0;i<ds1.size();i++)cout<<ds1[i]<<" ";
    
    // for sham
    cout<<endl;
    shares(apples,ds2,s2);
    cout<<"Sham: ";
    for(int i=0;i<ds2.size();i++)cout<<ds2[i]<<" ";
    
    // for Rahim
    cout<<endl;
    shares(apples,ds3,s3);
    cout<<"Rahim: ";
    for(int i=0;i<ds3.size();i++)cout<<ds3[i]<<" ";
    
}