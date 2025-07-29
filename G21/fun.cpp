// #include<iostream>
// using namespace std;
// int add(int a,int b){
//     int sum=a+b;
//     return sum;
// }
// float sum(int a,int b){
//     int add=a+b;
//     return add;
// }
// int main(){
    // int a,b;
    // cin>>a>>b;
    // cout<<add(a,b)<<endl;
    // float a,b;
    // cin>>a>>b;
    // cout<<sum(a,b)<<endl;
// }




// #include<iostream>
// using namespace std;
// int sq(int n){
//     return n*n;

// }
// int main(){
//     int n;
//     cout<<"Enter a number:";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         cout<<sq(i)<<"\n";
//     }
// }




// #include<iostream>
// using namespace std;
// double circumference(int r){
//     return 2*3.14*r;

// }
// double area(int r){
//     return 3.14*r*r;
// }
// int sq(int r){
//     return r*r;
// }

// int main(){
//     int r;
//     cout<<"Enter a number:";
//     cin>>r;
//     cout<<circumference(r)<<endl;
//     cout<<area(r)<<endl;
//     cout<<sq(r);

// }




// #include<iostream>
// using namespace std;
// bool person(int age){
//     if(age>=18){
//         cout<<"Eligible for vote"<<endl;
//         return true;
//     }
//     else{
//     cout<<"Not Eligible for vote";
//     return false;
//     } 
// }
// int main(){
//     int age;
//     cin>>age;
//     cout<<person(age);

// }




// #include<iostream>
// using namespace std;
// bool isodd(int n){
//     if(n%2!=0){
//         return true;
//     }
//     else{
//         return false;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     for (int  i = 1; i <=n; i++){
//     if(isodd(i)){
//         cout<<i<<" ";
//     }
//     }
// }



// #include<iostream>
// using namespace std;
// int iseven(int n){
//     if(n%2==0){
//         return true;
//     }
//     else{
//         return false;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         if(iseven(i)){
//             cout<<i<<" ";
//         }
//     }
// }





// #include<iostream>
// using namespace std;
// bool isprime(int n){
//     for(int i=2;i<=(n-1);i++){
//         if(n%i==0){
//             return false;
//         }
//     }
//     return true;
// }
// bool isprime(int n){
//     for(int i=2;i*i<=n;i++){
//         if(n%i==0){
//             return false;
//         }
        
//     }
//     return true;
// }
// int main(){
//     int n;
//     cin>>n;
//      for(int i=2;i<=n;i++){
//         if(isprime(i)){
//             cout<<i<<" ";
//         }
//      }
// }




// #include<iostream>
// using namespace std;
// int main(){
//     int r=3,c=3;
//     int matrix[r][c]={{10,9,7},{9,8,4},{6,9,3}};
//     cout<<"Printing the matrix elements:"<<endl;
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int r=3,c=3;
//     int matrix[r][c]={{10,9,7},{9,8,4},{6,9,3}};
//     cout<<"Printing the matrix elements:"<<endl;
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }




// #include<iostream>
// using namespace std;
// int main(){
//    int r;
//    cin>>r;
//    int c;
//    cin>>c;
//    int matrix[r][c];
// for(int i=0;i<r;i++){
//     for(int j=0;j<c;j++){
//         cin>>matrix[i][j];
//     }
// }
//      cout<<"Printing the matrix elements:"<<endl;
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }






// #include<iostream>
// using namespace std;
// int main() {
//     int rows, cols;
//     cout << "Enter number of rows: ";
//     cin >> rows;
//     cout << "Enter number of columns: ";
//     cin >> cols;
//     int matrix[rows][cols]; 
//     cout << "Enter elements of the matrix:";
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             cin >> matrix[i][j];
//         }
//     }
//     cout << "Sum of each row:";
//     for (int i = 0; i < rows; i++) {
//         int rowSum = 0;
//         for (int j = 0; j < cols; j++) {
//          rowSum=matrix[i][j];
//         }
//         cout << "Row " << i + 1 << ": " << rowSum << endl;
//     }
//     cout << "Sum of each column:";
//     for (int j = 0; j < cols; j++) {
//         int colSum = 0;
//         for (int i = 0; i < rows; i++) {
//             colSum += matrix[i][j];
//         }
//         cout << "Column " << j + 1 << ": " << colSum << endl;
//     }

//     return 0;
// }




#include <iostream>
#include <cmath>
using namespace std;
//Fibonacci Series
// void fibo(int n){
//     int a=0,b=1;
//     for(int i=0; i<n;i++){
//         cout<<a<<" ";
//         int c=a+b;
//         a=b;
//         b=c;
//     }
// }

//Prime or not
// int prime(int n){
//     if(n<=1) {
//         return 0;
//     }
//     for(int i=2;i<=n/2;i++){
//         if(n % i==0){
//             return 0;
//         }
//     }
//     return 1;
// }

//Sum of digits
// int sof(int n){
//     int sum=0;
// while(n != 0){
//     int digit = n % 10;
//     sum += digit;
//     n /= 10;
// }
// return sum;
// }


//Count digits
// int count(int n){
//     int count=0;
// while(n != 0){
//     int digit = n % 10;
//     n /= 10;
//     count++;
// }
// return count;
// }

//Calculator
// int calc(int n,int m, char op){
//     switch(op){
//         case '+': return n+m;
//         case '-': return n-m;
//         case '*': return n*m;
//         case '/': if(m !=0) return n/m; else return 0;
//         default: return 0;
//     }
    
// }

//Factorial
// int fact(int n){
//     int factorial=1;
//     if(n==0 || n== 1){
//       return 1;
//     }
//     else{
//         for(int i=1; i<=n;i++){
//             factorial *= i;
//         }
//         return factorial;
//     }
// }

//compoundInterest
// int compoundInterest(double P, double R, double T){
//     return P* pow(1+R/100, T) - P;
// }

//Swap 
// void swap(int &a, int &b){
//     int c=a;
//     a=b;
//     b=c;
// }

//greatest among three
// int greatest_among_three(int a, int b, int c){
//     if(a > b && a > c) {
//         return a;
//     }
//     else if(b >a && b > c){
//         return b;
//     }
//     else {
//         return c;
//     }
    
// }

#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
int matrix[n][m];
for(int i=0; i<n;i++){
    for(int j=0; j<m;j++){
    cin>>matrix[i][j];
}
}

for(int i=0; i<n;i++){
    int sum=0;
    for(int j=0; j<m;j++){
    // cout<<matrix[i][j]<<" ";
    sum += matrix[i][j];
}
cout<<sum<<endl;

}


for(int j=0; j<m;j++){
    int sumCol=0;
    for(int i=0; i<n;i++){
    sumCol += matrix[i][j];
}
cout<<sumCol<<endl;

}
    return 0;
}