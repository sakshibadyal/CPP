// #include<iostream>
// using namespace std;
// void pass_by_value(int a,int b){
//     a=20;
//     b=10;
// }

// int main(){
//     int a=10,b=20;
//     cout<<"Before paass by value:"<<a<<" "<<b<<endl;
//     pass_by_value(a,b);
//     cout<<"After apss  by value:"<<a<<" "<<b<<endl;
// }




// #include<iostream>
// using namespace std;
// void pass_by_ref(int & a,int & b){
//     a=20;
//     b=10;
// }

// int main(){
//     int a=10,b=20;
//     cout<<"Before paass by ref:"<<a<<" "<<b<<endl;
//     pass_by_ref(a,b);
//     cout<<"After apss  by ref:"<<a<<" "<<b<<endl;
// }






// #include<iostream>
// using namespace std;
// void changeString(string *str) {
//     *str = "Modified";
// }
// int main() {
//     string s = "Original";
//     changeString(&s);
//     cout << "After function: " << s << endl; 
// }


// #include<iostream>
// using namespace std;

// void country(string &name ){
//     name="India";
// }
// int main(){
   
//     string na ="In";
//     cout<<"country name is "<<na<<endl;
//     country(na);
//     cout<<"country name is "<<na<<endl;
// }





// #include<iostream>
// using namespace std;
// int sum1(int a,int b){
//     return a+b;
// }
// int sum2(int a,int b,int c){
//     return a+b+c;
// }
// int main(){
//     cout<<"Sum1="<<sum1(10,20)<<endl;
//         cout<<"Sum2="<<sum2(10,20,30)<<endl;
// }





// #include<iostream>
// using namespace std;
// float area(float radius) {
//     return 3.14 * radius * radius;
// }
// int area(int length, int breadth) {
//     return length * breadth;
// }
// int main() {
//     cout << "Area of circle " << area(5) << endl;
//     cout << "Area of rectangle " << area(4, 6) << endl;
// }






// #include <iostream>
// using namespace std;
// void print(int n){
//     if(n>5){
//         return ;
//     }
//     cout<<n<<endl;
//     print(n+1);
// }
// int main(){
// print(1);
// }






// #include <iostream>
// using namespace std;
// void print(int n){
//     if(n>5){
//         return ;
//     }
//     print(n+1);
//     cout<<n<<endl;
// }
// int main(){
// print(1);
// }


// #include <iostream>
// using namespace std;
// void print(int n){
//     if(n>5){
//         return ;
//     }
//     print(n+1);
//     cout<<n<<endl;
// }
// int main(){
// print(1);
// }


// #include <iostream>
// using namespace std;
// int fibo(int n){
//     if(n<=1)
//     return n;
// return fibo(n-1)+fibo(n-2);
// }
// int main(){
//      cout<<fibo(3);
// }



// #include <iostream>
// using namespace std;
// int main(){
//     int marks[3]={10,20,30};
//     cout<<marks[0]<<endl;
//     cout<<marks[1]<<endl;
// }






// #include <iostream>
// using namespace std;
// int main(){
//     int marks[5]={10,20,30,40,50};
//     for(int i=0;i<5;i++){
//         cout<<marks[i]<<endl;
//     }   
// }




