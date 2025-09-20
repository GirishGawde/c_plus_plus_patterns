#include <iostream>
using namespace std;

void pattern1(int n)  //triangle
{
    for (int i = 0; i <n; i++)
    {
        // print space
        for (int j = 0; j <n- i; j++){
            cout << " ";
        }

        // print stars
        for (int j= 0; j<2*i+1; j++){
            cout << "*";
        }
        //print spaces
        for (int j = 0; j <n- i; j++){
            cout << " ";
        }
        cout << "\n";
    }
}
void pattern2(int n)  //square of stars
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0;j<n ; j++){
            cout << "*";
        }
        cout << "\n";
    }
    
}
void pattern3(int n)  //diamond
{
    for (int i = 0; i <n; i++)
    {
        // print space
        for (int j = 0; j <n- i; j++){
            cout << " ";
        }

        // print stars
        for (int j= 0; j<2*i+1; j++){
            cout << "*";
        }
        //print spaces
        for (int j = 0; j <n- i; j++){
            cout << " ";
        }
        cout << "\n";
    }
    for (int i = 0; i <n; i++)
    {
        // print space
        for (int j = 0; j <i; j++){
            cout << " ";
        }

        // print stars
        for (int j= 0; j<2*n-2*i-1; j++){
            cout << "*";
        }
        //print spaces
        for (int j = 0; j <i; j++){
            cout << " ";
        }
        cout << "\n";
    }  
}
void pattern4(int n)  //number pyramid
{
    for (int i =1; i<=n; i++){
        for(int j =1; j<=i; j++){
            cout << i;
        }
        cout << "\n";
    }
}
void pattern5(int n)  //rotated number pyramid
{
    for(int i=1; i<=n ; i++){
        // print spaces
        for(int j=1; j<=n-i; j++){
            cout << " ";
        }
        // print numbers
        for (int j=1; j<=i; j++){
            cout << j;
        }
        cout << "\n";
    }
}
int main()
{
    int n;
    cout << "enter number of rows for pattern: ";
    cin >> n;
    pattern1(n);
    cout << endl;
    pattern2(n);
    cout << endl;
    pattern3(n);
    cout << endl;
    pattern4(n);
    cout << endl;
    pattern5(n);
}