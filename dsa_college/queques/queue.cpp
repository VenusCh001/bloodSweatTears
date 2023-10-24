#include <iostream>
using namespace std;
#define n 10
class myqueue{
    int *ar;
    int front , back ;
    public:
    myqueue(){
        ar=new int[n];
        front = - 1;
        back = - 1;
    }
void enqueue(int item) {
    if (back == n-1){
        cout<<"Overflow!"<<endl;
        return;
    }
    if (front==-1 && back==-1){
        front =0;
    }
        back++;
        ar[back] = item;
        cout<<"Element inserted"<<endl;
}
void dequeue() {
    if (front == - 1 || front > back) {
        cout<<"Underflow!";
        return ;
    }
    int item=ar[front];
    cout<<"Element deleted from queue is : "<< item <<endl;
    front++;
}
void display() {
    if (front == - 1 ){
        cout<<"Queue is empty"<<endl;
        return;
    }
    cout<<"Elements are : ";
        for (int i = front; i <= back; i++)
            cout<<ar[i]<<" ";
        cout<<endl;
}
void fronte() {
    if (front == - 1){
        cout<<"Queue is empty"<<endl;
        return;
    }
        cout<<"Front Element is :"<<ar[front]<<endl;
}
};
int main() {
    int choice;
    myqueue q;
    cout<<"1: Inserting element to queue(enqueue)"<<endl;
    cout<<"2: Deleting element from queue(dequeue)"<<endl;
    cout<<"3: Display all element of queue"<<endl;
    cout<<"4: Display front element of queue"<<endl;
    cout<<"5: Exit"<<endl;
    do {
        cout<<endl<<"Enter your choice : ";
        cin>>choice;
        switch (choice) {
            case 1: {
                cout<<"enter element to be inserted:";
                int item;
                cin>>item;
                q.enqueue(item);
                break;}
            case 2: q.dequeue();
                break;
            case 3: q.display();
                break;
            case 4: q.fronte();
                break;
            case 5: cout<<"Exit"<<endl;
                break;
            default: cout<<"Invalid choice"<<endl;}
    } while(choice!=5);
    cout<<endl<<"name-venus chaudhary";
    cout<<endl<<"roll no- 22201012022";
    return 0;
}
