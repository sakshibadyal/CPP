// #include<iostream>
// using namespace std;
// int sum(int a,int b){
//     return a+b;
// }
// int main(){
//     int a;
//     cout<<"Enter a num:";
//     cin>>a;
//     int b;
//     cout<<"Enter a num:";
//     cin>>b;
//     cout<<sum(a,b);
// }



// #include <iostream>
// #include <string>
// using namespace std;
// void printSum(const string& a, const string& b) {
//     cout << "string: "<<(a + b) << endl;
// }
// int main() {
//     string a, b;
//     cout << "Enter first string: ";
//    cin>>a;
//     cout << "Enter second string: ";
//     cin>>b;
//     printSum(a, b);
//     return 0;
// }



// #include <iostream>
// using namespace std;
// void print();
// int main() {
//     print();
//     return 0;
// }
// void print(){
//     cout<<"Hello this is me"<<endl;
// }


// #include <iostream>
// using namespace std;
// int sum(10,20){
//     return 10+20;
// }

// int print(){
//     int n=10;
//     return n;
// }
// void greet(){
//     cout<<"hello"<<endl;
// }
// void country(string india){
//     cout<<india;
// }
// int main() {
// greet();
// cout<<"value of  n="<<print()<<endl;
// cout<<"sum:"(10,20)<<endl;
// country("india");
// }




// #include <iostream>
// using namespace std;
// void print(string name="India"){
//     cout<<"Welcome to"<< name<<endl;
// }
// int main() {
// print("India");
// }



// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a=0,b=1;
//     for(int i=1;i<=n;i++){
//         cout<<a<<(i<n?" ":"");
//         int c=a+b;
//         a=b;
//         b=c;
//     }
//     return 0;
// }




// 







// #include <iostream>
// using namespace std;
// void fibo(int n){
//     int a=0,b=1;
//     for(int i=0; i<n;i++){
//         cout<<a<<" ";
//         int c=a+b;
//         a=b;
//         b=c;
//     }
// }

// void prime(int n){
//     if(n<=1) {
//         cout<<"Not Prime";
//         return;
//     }
//     for(int i=2;i<=n/2;i++){
//         if(n % i==0){
//             cout<<"Not Prime";
//             return;
//         }
//     }
//     cout<<"Prime";
// }
// int main(){
//     int n;
//     cin>>n;
//      cout<<"Fibonacci Series till "<< n << " is"<<" ";
//     fibo(n);
//     cout<<endl;
//     cout<<n << " is "<<" ";
//     prime(n);
//     return 0;
// }



// #include <iostream>
// using namespace std;
// int countDigits(int n) {
//     int count = 0;
//     if (n == 0) return 1;
//     if (n < 0) n = -n;
//     while (n > 0) {
//         n /= 10;
//         ++count;
//     }
//     return count;
// }

// int main() {
//     int n;
//     cin >> n;
//     cout << countDigits(n);
//     return 0;
// }



// #include <iostream>
// using namespace std;
// int factorial(int n) {
//     int res = 1;
//     for (int i = 2; i <= n; ++i)
//         res *= i;
//     return res;
// }
// int main() {
//     int n;
//     cin >> n;
//     cout << factorial(n);
//     return 0;
// }



// #include <iostream>
// #include <cmath>
// using namespace std;
// double compoundInterest(double p, double r, double t) {
//     return p * pow(1 + r / 100, t) - p;
// }
// int main() {
//     double p, r, t;
//     cin >> p >> r >> t;
//     cout << compoundInterest(p, r, t);

// }


