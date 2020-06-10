#include <iostream>
#include<bits/stdc++.h>
using namespace std;

//Book Allocation Problem- Minimise the max num of pages that can be assigned to each student

bool isPossible(int book,int student,int a[],int mid){

    int studentNum=1;
    int pagesReading=0;

    for(int i=0;i<book;++i){
        if(pagesReading+a[i]>mid){
            studentNum++;

            pagesReading=a[i];
            if(studentNum>student){
                return false;
            }
        }else{
            pagesReading=pagesReading+a[i];
        }
    }
    return true;
}

int findPage(int book, int student, int a[]){

    int s=a[book-1];
    int sum=0;
    int ans=0;
    for(int i=0;i<book;++i){
        sum=sum+a[i];
    }
    int e=sum;
    while(s<=e){
        int  mid=(s+e)/2;
        if(isPossible(book,student,a,mid)){
            ans=mid;
            e=mid-1;
        }else{
            s=mid+1;
        }
    }
    return ans;
}

int main() {
    int t;
    cin>>t;

    while(t--){
    int books, students;
    cin>>books>>students;
    int a[books];
    for(int i=0;i<books;++i){
        cin>>a[i];
    }

    //Find the max num of pages to be assigned to each student 
    cout<<findPage(books,students,a)<<endl;
    }
    
}
