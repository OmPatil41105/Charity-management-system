//assignment 1 using class and object 
#include<iostream> 
using namespace std; 
class v{ 
    public: 
    int a[10],n,i,j,target,flag=0,temp; 
    void array() 
    { 
        cout<<"Enter the size of an array:"; 
        cin>>n; 
        cout<<"Enter the elements of an array:"; 
        for(i=0;i<n;i++) 
        { 
            cout<<"a["<<i<<"]"; 
            cin>>a[i]; 
        } 
    } 
    void sort() 
    { 
        for(i=0;i<n;i++) 
        { 
            for(j=0;j<n-1-i;j++) 
            { 
                if(a[j]>a[j+1]) 
                { 
                    temp=a[j]; 
                    a[j]=a[j+1]; 
                    a[j+1]=temp; 
                } 
            } 
        } 
        cout<<"Sorted array is:"; 
        for(i=0;i<n;i++) 
        { 
            cout<<a[i]<<"\t"; 
        } 
    } 
    void search() 
    { 
        cout<<"Enter target for search"; 
        cin>>target; 
        for(i=0;i<n;i++) 
        { 
            if(a[i]==target) 
            { 
                flag=1; 
                break; 
            } 
        } 
        if(flag==1) 
        { 
            cout<<"Target is present at a["<<i<<"]"; 
        } 
    } 
}; 
int main() 
{ 
    v b; 
    b.array(); 
    b.sort(); 
    b.search(); 
    return 0; 
} 
