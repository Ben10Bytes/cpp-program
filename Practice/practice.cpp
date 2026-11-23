// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;

//     int i = 1;
//     while(i<=n){
//         int j = 1;
//         while(j<=n){
//             cout<<j;
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;

//     int i = 1;
//     while(i <= n){
//         int j = 1;
//         while(j <= n){
//             cout << n - j + 1;
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
    
//     int i = 1;
//     int count = 1;
//     while(i <= n){
//         int j = 1;
//         while(j <= n){
//             cout <<count<<"   ";
//             count = count + 1;
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;

//     int i = 1;
//     while(i <= n){
//         int j = 1;
//         while (j<=i){
//             cout << " * ";
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;

//     int i = 1;
//     while( i <= n){
//         int j = 1;
//         while(j <= i){
//             cout <<i;
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;

//     int i = 1;
//     int count = 1;
//     while(i <= n){
//         int j = 1;
//         while(j <= i){
//             cout <<count;
//             count = count + 1;
//             j = j + 1;
//         }
//         cout<<endl;
//         i = i + 1;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;

//     int i = 1;
//     while(i <= n){
//         int j = 1;
//         int value = i;
//         while(j <= i){
//             cout<< value;
//             value = value + 1;
//             j = j +1;
//         }
//         cout<<endl;
//         i = i + 1;
//     }
//     return 0;
// }

// 1 
// 2  1
// 3  2  1
// 4  3  2  1


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;

//     int i = 1;
//     while(i <= n){
//         int j = 1;
//         int value = i;
//         while(j <= i){
//             cout << value;
//             value = value - 1;
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
//     return 0;
// }



// A A A A 
// B B B B 
// C C C C 
// D D D D


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;

//     int i = 1;
//     while(i <= n){
//         int j = 1;
//         char ch = 'A' + i -1;
//         while(j <= n){
//             cout<<ch<<"  ";
//             j = j + 1;


//         }
//         cout<<endl;
//         i = i + 1;
//     }
//     return 0;
// }



// A  B  C  D 
// A  B  C  D 
// A  B  C  D 
// A  B  C  D 


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;

//     int i = 1;
//     while(i <= n){
//         int j = 1;
        
//         while(j <= n){
//             char ch = 'A' + j - 1;
//             cout << ch;
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
//     return 0;
// }



// A  B  C  D 
// E  F  G  H 
// I  J  K  L  
// M  N  O  P


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;

//     int i = 1;
//     char ch = 'A';
//     while(i <= n){
//         int j = 1;
//         while(j <= n){
//             cout<<ch<<"  ";
//             ch = ch + 1;
//             j = j + 1;
//         }
//         cout<<endl;
//         i = i + 1;
//     }
//     return 0;
// }



// A B C D 
// B C D E 
// C D E F 
// G H I J 

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;

//     int i = 1;
//     while(i <= n){
//         int j = 1;
//         while(j <= n){
//             char ch = 'A' + i + j - 2;
//             cout << ch << "  ";
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
//     return 0;
// }



// A 
// B  B 
// C  C  C  
// D  D  D  D 


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;

//     int i = 1;
//     while(i <= n){
//         int j = 1;
//         char ch = 'A' + i - j;
//         while(j <= i){   
//             cout << ch << "  ";
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
// }




// A 
// B  C  
// D  E  F 
// G  H  I  J 



// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;

//     int i = 1;
//     char value = 'A';

//     while(i <= n){
//         int j = 1;
//         while(j <= i){
//             cout <<value << "  ";
//             value = value + 1;
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
// }


// D 
// C  D  
// B  C  D 
// A  B  C  D 


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;

//     int i = 1;
    

//     while(i <= n){
//         int j = 1;
//         char value = 'D' + j - i; // 'A' + n - i;
//         while(j <= i){
//             cout << value << "  ";
//             value = value + 1;

//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;

//     int i = 1;
//     while(i <= n){
//         int space = n - i;
//         while(space){
//             cout << " ";
//             space = space - 1;
//         }

//         int j = 1;
//         while(j <= i){
//             cout << "*";
//             j = j + 1;
//         }
//         cout <<endl;
//         i = i + 1;

//     }
//     return 0;

// }



// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
    
//     int i = 1;
//     while(i <= n){
//         int space = n - i;
//         while(space){
//             cout<<" ";
//             space = space - 1;
//         }
//         int j = 1;
//         while(j <= i){
//             cout << "*";
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
//     return 0;
// }    


// #include<iostream>
// using namespace std;
// int main(){
//     int i = 9;
//     int a = --i;
//     int b = i--;
//     cout << a + b + i;

//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int a , b = 1;
//     a = 10;

//     if(++a){
//         cout << b;
//     }
//     else{
//         cout << ++b;
//     }

// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter the no. : ";
//     cin >> n;
//     int i = 1;

//     while(i<=n){
//         cout << i << endl;
//         i += 2;
//     }
//     cout << i;
// }


// Fibonacci 

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout <<"Enter the number of terms : ";
//     cin >> n;

//     int a = 0, b = 1, next;
//     for(int i = 1; i<=n; i++){
//         cout << a << " " << endl;
//         next = a + b;
//         a = b;
//         b = next;
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout <<"Enter the no.: ";
//     cin >> n;

//     for(int i = 1; i<=n; i++){
//         if(i%2!=0){
//             cout <<i<<" ";
//         }
//     }
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout <<"Enter the no.: ";
//     cin >> n;


//     if(n%2!=0){
//         cout <<"Odd no";
//     }
//     else{
//         cout <<"Even no";
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout <<"Enter the no.: ";
//     cin >> n;
//     int i = 2;

//     while(i<=n){
//         if(i%2==0){
//             cout <<i<<" ";
//         }
//         i+=2;
//     }
    

// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter the no. : ";
//     cin >> n;

//     int i = 2;
//     int sum = 0;

//     while(i<=n){
//         if(i%2==0){
//             cout <<i<<" ";
//             sum = sum + i;
//             i+=2;
//         }
        
//     }
//     cout <<"Sum of even no is: " <<sum<<endl;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout <<"Enter the number: ";
//     cin >> n;
    

//     int i = 2;
//     while(i<=n){
//         cout <<i<<" ";
//         i+=2;
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the no. : ";
//     cin >> n;

//     int i = 1;
//     while(i<=n){
//         cout << i<<" ";
//         i++;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout <<"Enter the no. : ";
//     cin >> n;

//     int i = 1;
//     int sum = 0;

//     while(i<=n){
//         cout <<i<<" ";
//         sum = sum + i;
//         i++;
//     }
//     cout << endl;
//     cout << "Sum of natural no. : "<<sum;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout <<"Enter the no. : ";
//     cin>>n;

//     int sum = 0;

//     for(int i = 1; i<=n; i++){
//         cout<<i<<" ";
//         sum = sum + i;

//     }
//     cout << endl;
//     cout <<"sum of natural no. : "<< sum;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter the no. : ";
//     cin >> n;

//     for(int i = 2; i<=n; i+=2){
//         cout << i <<" ";
//     }
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Ener the no. : ";
//     cin >> n;

//     int sum = 0;

//     for(int i = 2; i<=n; i+=2){
//         cout <<i<<" ";
//         sum = sum + i;
//     }
//     cout << endl;
//     cout << "Sum of even no. is : "<<sum;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter the no. : ";
//     cin >> n;

    
//     for(int i = 1; i<=n; i+=2){
//         cout<<i<<" ";
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter the number : ";
//     cin >> n;

//     int i;
    

//     for(i=2; i<n; i++){
//         if(n%i==0){
//             break;
//         }
//     }
//     if(i == n){
//         cout <<"Prime";

//     }
//     else{
//         cout <<"Not Prime";
//     }
// }



// #include<iostream>
// using namespace std;
// int main(){

//     int n;
//     cout<<"Enter the no. of terms: ";
//     cin >> n;
    
//     int a = 0, b = 1, next;
    
//     for(int i = 1; i<=n; i++){
//         cout <<a<<" ";
//         next = a + b;
//         a = b;
//         b = next;
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n; 
//     cout << "Enter the user input: ";
//     cin >> n;

//     int i;
    
//     for(i = 2; i<n; i++){
//         if(n%i==0){
//             break;
//         }
//     }
//     if(i == n){
//         cout <<"Prime no.";
//     }
//     else{
//         cout << "Not Prime";
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the input : ";
//     cin >> n;

//     int i;

//     for(i = 2; i<n; i++){
//         if(n%i==0){
//             break;
//         }
//     }
//     if(i == n){
//         cout <<"Prime no.";
//     }
//     else{
//         cout <<"Not Prime";
//     }

// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout <<"Enter the input: ";
//     cin >> n;

//     int i;

//     for(i = 2; i<n; i++){
//         if(n%i==0){
//             break;
//         }
//     }
//     if(i==n){
//         cout <<"Prime number";
//     }
//     else{
//         cout<<"Not Prime";
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout <<"Enter the input: ";
//     cin >>n;

//     int count = 0;

//     for(int i=2; i<=n; i++){

//         int j;
//         for(j=2; j<i; j++){
//             if(i%j==0){
//                 break;
//             }
//         }
//         if(j==i){
//             cout<<j<<" ";
//             count = count + 1;
//         }
//     }
//     cout<<endl;
//     cout <<"Prime number count is "<<count;
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout <<"Enter the input : ";
//     cin >> n;

//     int a = 0;
//     int b = 1;
//     int next;

//     for(int i=1; i<=n; i++){
//         cout<<a<<" ";
//         next = a + b;
//         a = b;
//         b = next;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the input : ";
//     cin >>n;

//     int i;
//     for(i = 2; i<n; i++){
//         if(n%i==0){
//             break;
//         }
//     }
//     if(i == n){
//         cout<<"Prime";
//     }
//     else{
//         cout<<"Not Prime";
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout <<"Enter the input : ";
//     cin >> n;

//     int count = 0;
//     int sum = 0;

//     for(int i = 2; i <=n; i++){

//         int j;
//         for(j = 2; j < i; j++){
//             if(i%j==0){
//                 break;
//             }
//         }
//         if(j==i){
//             cout<<j<<" ";
//             count = count + 1;
//             sum = sum + j;
//         }
//     }
//     cout<<endl;
//     cout<<"Count : "<<count<<endl;
//     cout<<"sum is : "<<sum;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     for(int i = 0; i<5; i++){
//         for(int j = i; j<=5; j++){
//             if(i+j==10){
//                 break;
//             }
//             cout<<i<<" "<<j<<endl;
//         }
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n = 13;
//     int binary = 0;
//     int place = 1;

//     while(n!=0){
//         int rem = n & 1;
//         binary = rem * place + binary;
//         n = n >> 1;
//         place = place * 10;
//     }
//     cout <<"Bianry : " << binary;
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter the Input : ";
//     cin >> n;

//     int binary = 0;
//     int place = 1;

//     for()
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the input : ";
//     cin>>n;

//     int decimal = 0;
//     int place = 1;

//     while(n!=0){

//         int rem = n % 10;
//         decimal = rem * place + decimal;
//         place = place * 2;
//         n = n / 10;
//     }
//     cout<<decimal;

// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the input: ";
//     cin>>n;

//     int binary = 0;
//     int place = 1;

//     while(n!=0){
//         int rem = n&1;
//         binary = rem * place + binary;
//         place = place * 10;
//         n = n >> 1;

//     }
//     cout <<binary;
// }


// #include<iostream>
// using namespace std;
// int main(){

//     int n;
//     cout <<"Enter the Input : ";
//     cin >> n;

//     int decimal = 0;
//     int place = 1;

//     while(n!=0){
//         int rem = n % 10;
//         decimal = rem * place + decimal;
//         place = place * 2;
//         n = n/10;
//     }
//     cout<<decimal;
// }


// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter the Input : ";
//     cin >> n;

//     int reverseNum = 0;
//     while(n!=0){
//         int placeDigit = n % 10;
//         if((reverseNum > INT_MAX / 10) ||(reverseNum < INT_MIN / 10)){
//             return 0;
//         }
//         reverseNum = reverseNum * 10 + placeDigit;
//         n = n/10;
//     }
//     cout <<"Reverse Number is : " <<reverseNum;

// }

// 101 to 010
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the Input : ";
//     cin >> n;

//     int temp = n;
//     int mask = 0;

//     while(temp!=0){
//         mask = (mask << 1) | 1;
//         temp = temp >> 1;
//     }
//     int ans = (~n) & mask;
//     cout <<"The Compliment of Input is : "<<ans;
// }


// 123 to 321 - reverse number

// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int n;
//     cout <<"Enter the Input : ";
//     cin >> n;

//     int revDigit = 0;

//     while(n!=0){
//         int placeDigit = n % 10;

//          if((revDigit > INT_MAX / 10)||(revDigit < INT_MIN / 10)){
//         cout<<"The Reverse Number is : 0 ";
//         return 0;
//         }
//         revDigit = revDigit * 10 + placeDigit;
//         n = n/10;
//     }

//     cout<<"The Reverse Number is : "<<revDigit;

// }


// The integer 5 is '101' in binary & its complement is '010' which is the interger 2.
// Input : n = 5
// Output : 2

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the Input : ";
//     cin >> n;

//     int mask = 0;
//     int temp = n;

//     while(temp!=0){
//         mask = (mask << 1) | 1;
//         temp = temp >> 1;
//     }
//     int ans = (~n) & mask;
//     cout <<"The complement is : "<<ans;
// }

// Given a positive integer n, find the sum of all integers in the range [1, n] inclusive that are divisible by 3, 5, or 7.
// Example 1:

// Input: n = 7
// Output: 21
// Explanation: Numbers in the range [1, 7] that are divisible by 3, 5, or 7 are 3, 5, 6, 7. The sum of these numbers is 21.

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout <<"Enter the input : ";
//     cin>>n;

//     int sum =0;
//     int i;

//     for(i = 1; i<=n; i++){
//         if(i%3==0 || i%5==0 || i%7==0){
//             sum+=i;
//         }
//     }
//     cout <<"The sum input is : "<<sum;

    
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the Input : ";
//     cin n;

//     if(n<=0){
//         return false;
//     }
//     while(n%2==0){
//         n = n/2;
//     }
//     return n == 1;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     char ch;
//     cout<<"Enter the Charcter : ";
//     cin>>ch;

//     if(ch>='A' && ch<='Z'){
//         cout<<"Capital letter ";
//     }
//     else if(ch>='a' && ch<='z'){
//         cout<<"Small letter";
//     }
//     else if(ch>='0' && ch<='9'){
//         cout<<"Numeric";
//     }
//     else{
//         cout<<"Special Charcter";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout <<"Enter the Input : ";
//     cin >> n;

//     for(int i = 1; i<=n; i++){
//         cout<<i<<" ";
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the Input : ";
//     cin >> n;

//     int sum = 0;
//     for(int i=1; i<=n; i++){
//         sum+=i;
//     }
//     cout<<sum;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the User Input : ";
//     cin >> n;

//     for(int i = 2; i<=n; i+=2){
//         cout<<i<<" ";
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the Input : ";
//     cin >> n;

//     int sum = 0;

//     for(int i = 2; i<=n; i+=2){
//         sum+=i;
//     }
//     cout<<sum;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout <<"Enter the Input : ";
//     cin >>n;

//     int i;
//     for(i = 2; i<=n; i++){
//         if(n % i == 0){
//             break;
//         }
//     }
//     if(i == n){
//         cout<<"Prime no.";
//     }
//     else{
//         cout<<"Not Prime";
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the input : ";
//     cin>> n;

//     int sum = 0;
//     int i;

//     for(i = 2; i<=n; i++){
//         int j;
//         for(j = 2; j < i; j++){
//             if(i % j == 0){
//                 break;
//             }
//         }
//         if(j == i){
//             cout<<j<<" ";
//             sum = sum +j;
//         }
//     }
//     cout<<endl;
//     cout<<sum;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the Input : ";
//     cin >> n;

//     int sum = 0;
//     int i;

//     for(i = 2; i<=n; i++){
//         int j;
//         for(j = 2; j < i; j++){
//             if(i % j == 0){
//                 break;
//             }
//         }
//         if(j == i){
//             sum+=j;
//         }
//     }
//     cout<<sum;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the Input : ";
//     cin >> n;

//     for(int i = 1; i<=n; i++){
//         for(int j= 1; j<=n; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
    
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the Input : ";
//     cin >> n;

//     for(int i = 1; i<=n; i++){
//         for(int j = 1; j<=n; j++){
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the Input : ";
//     cin >> n;

//     for(int i = 1; i<=n; i++){
//         for(int j = 1; j<=n; j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the Input : ";
//     cin>>n;

//     for(int i = 1; i<=n; i++){
//         for(int j = 1; j<=n; j++){
//             cout<<n-j+1<<" ";
//         }
//         cout<<endl;
//     }
// }


// #include<iostream>
// #include<iomanip>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the Input : ";
//     cin>>n;

//     int count = 1;
//     for(int i = 1; i<=n; i++){
//         for(int j = 1; j<=n; j++){
//             cout<<setw(6)<<count;
//             count = count + 1;
//         }
//         cout<<endl;
        
//     }
    
    
    
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the Input : ";
//     cin>>n;

//     for(int i = 1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the Input : ";
//     cin>>n;

//     for(int i = 1; i<=n; i++){
//         for(int j = 1; j<=i; j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the Input : ";
//     cin >> n;

//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the Input : ";
//     cin >> n;

//     int count = 1;

//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout<<count<<"  ";
//             count++;
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the Input : ";
//     cin>>n;
//     int i;

//     for(i =1; i<=n; i++){
//         int value = i;
//         for(int j=1; j<=i; j++){
//             cout<<value<<" ";
//             value = value + 1;
            
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the Input : ";
//     cin>>n;

//     for(int i=1; i<=n; i++){
//         int value = i;
//         for(int j = 1; j<=i; j++){
//             cout<<value<<" ";
//             value= value - 1;
//         }
//         cout<<endl;
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the Input : ";
//     cin >> n;

//     for(int i = 1; i<=n; i++){
//         char ch = 'A' + i - 1;
//         for(int j = 1; j<=n; j++){
//             cout<<ch<<" ";
//         }
//         cout<<endl;
//     }
// }


// #include<iostream>




