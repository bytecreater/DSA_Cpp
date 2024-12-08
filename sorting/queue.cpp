#include <iostream>
#include <string>
using namespace std;

#define n 5

class Queue{
    int* arr;
    int front;
    int back;

    public:
    Queue(){
        arr=new int[n];
        front=-1;
        back=-1;
    }

    void push(int x){
        if (back==n-1){
            cout<<"Queue overflow"<<endl;
            return;
        }
        back++;
        arr[back]=x;

        if (front==-1){
            front++;
        }
    }

    int pop(){
        if (front==-1 || front>back){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        front++;
    }

    void peek(){
        if (front==-1 || front>back){
            cout<<"Queue is empty"<<endl;
            return;
        }
        cout<<arr[front]<<endl;
    }

    void seequeue(){
        for (int i=front; i<=back; i++){
            cout<<arr[i]<<endl;
        }    
    }
};

int main(){
    Queue q1;
    q1.push(10);
    q1.push(20);
    q1.push(30);
    q1.push(40);
    q1.seequeue();
    q1.pop();
    cout<<"updated queue"<<endl;
    q1.seequeue();
    return 0;
}