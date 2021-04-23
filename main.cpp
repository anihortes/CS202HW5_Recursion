#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;

int fib(int n){
    if(n==0 || n==1) return n;
    else{
        return(fib(n-1) + fib(n-2));
    }
};


int fibLoop(int n){
    if(n==0 || n==1) return n;
    else{
        int fibNum = 0;
        int fib0 = 0;
        int fib1 = 1;
        for(auto i = 1; i < n; ++i){
            fibNum = fib1+fib0;
            fib0 = fib1;
            fib1 = fibNum;
        }
        return fibNum;
    }
};

void fibStringText(int fibNum){
    cout << "The " << fibNum;
    if(fibNum%10 == 1) cout << "st";
    else if(fibNum%10 == 2) cout << "nd";
    else if(fibNum%10 == 3) cout << "rd";
    else cout << "th";
}


int ack(int m, int n){
    if(m < 0 || n < 0) return 0;
    else if(m==0) return (n+1);
    else if(m > 0 && n == 0) return ack(m-1, 1);
    else{
        return ack(m-1, ack(m, n-1));
    }

}

int main() {
    cout << "NOTE: This Fibonacci Sequence includes the 0th case.\n";
    cout << "F(9) = 34 and 34 is the 10th number in the Fibonacci Sequence.\n";
    cout << "Enter a number:";
    string getFibInt;
    getline(cin,getFibInt);
    int fibInt = std::stoi(getFibInt);
    //1st, 2nd, 3rd, 4th, 5th, 6th, 7th, 88th, 9th, 10th
    fibStringText(fibInt);
    cout << " number in the Fibonacci sequence is " << fib(fibInt) << endl;

    cout << "Enter a number:";
    string getFibIntLoop;
    getline(cin,getFibIntLoop);
    int fibIntLoop = std::stoi(getFibIntLoop);
    fibStringText(fibIntLoop);
    cout << " number in the Fibonacci sequence is " << fibLoop(fibIntLoop) << endl;
    int i = 0;
    int fibTest = 0;
    //feel free to run this loop but it might take a while
/*    while(i<INT_MAX && fibTest >-1){
        if (fibTest < 0) break;
        fibTest = fib(i);
        fibStringText(i);
        cout << " number in the Fibonacci sequence is " << fibTest << endl;
        i++;
    }*/
    cout << "The largest nth number this machine can run "
            << "for the Fibonacci Sequence is 47.\n";

    cout << "Ackermann Function A(m,n):\n";
    cout << "Enter m:";
    string stringAckM;
    getline(cin,stringAckM);
    int ackM = std::stoi(stringAckM);
    cout << "Enter n:";
    string stringAckN;
    getline(cin,stringAckN);
    int ackN = std::stoi(stringAckN);
    cout << "A(" << ackM << "," << ackN << ") = " << ack(ackM,ackN) << endl;
    return 0;
}
