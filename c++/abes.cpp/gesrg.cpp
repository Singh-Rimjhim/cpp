// #include<iostream>
// using namespace std;
// int main(){
//     int i;
//     cout<<"Enter number of hours : ";
//     cin>>i;
//     int units [i];
//     int j=0;
//     while(j<i)
//     {
//         int n;
//         cout<<"hours"<<(cout+1)<<":";
//         cin>> reading;
//         total
//     }

// }
// #include <iostream>
// using namespace std;

// int main() {
//     int N;

//     cout << "Enter the number of cars entering the parking system: ";
//     cin >> N;

//     cout << "\nCar Count:\n";
//     cout << "----------\n";

//     for (int i = 1; i <= N; i++) {
//         cout << "Car " << i << " entered" << endl;
//     }

//     cout << "----------\n";
//     cout << "Total cars in parking: " << N << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int num, originalNum, reversedNum = 0, digit;

//     cout << "Enter a number: ";
//     cin >> num;

//     originalNum = num; 

//     while (num > 0) {
//         digit = num % 10;          
//         reversedNum = reversedNum * 10 + digit; 
//         num = num / 10;             
//     }

//     if (originalNum == reversedNum) {
//         cout << originalNum << " is a palindrome.";
//     } else {
//         cout << originalNum << " is not a palindrome.";
//     }

//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main () {
//     int n, num, sum = 0;
//     cin >> n;

//     int i=0;
//     while (i<n)
//     {
//         cin >> num;
//         sum = sum + num;
//         i++;
//     }

//     cout << sum <<endl;
//     return 0;
    
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter number : ";
//     cin>>n;
//     for(int i=1; i<=n; i++)
//     cout<<i<<" ";
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int i=1;
//     do{
//         cout<<2*i<<" ";
//         i++;
//     }while(i<=5);
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int i=2;
//     do{
//         cout<<i<<" ";
//         i=i+2;
//     }while(i<=10);
// } 
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter number of late days : ";
//     cin>>n;
//     for(int i=1; i<=n; i=i+2;)
//     { cout<<2*n;}
// }


// #include<iostream>
// #include<cmath>
// using namespace std;
// int main(){
//     //QUADRATIC EQUATION=
//     int a;
//     cout<<"Enter first coefficient : ";
//     cin>>a;
//     int b;
//     cout<<"Enter second coefficient : ";
//     cin>>b;
//     int c;
//     cout<<"Enter third coefficient : ";
//     cin>>c;
//     int D=(b*b)-(4*a*c);
//     if (D==0){
//         cout<<"real and equal roots"<<endl;
//     }
//     else if (D > 0)
//     {
//         cout<<"real roots"<<endl;
//     }
//     else{
//         cout<<"imaginary roots"<<endl;
//     }
// }



// #include <iostream>
// using namespace std;

// int main() {
//     float units;
//     cin >> units;
//     if (units <= 100) {
//         bill = units * 1.50;
//     } else if (units <= 200) {
//         bill = 100 * 1.50 + (units - 100) * 2.00;
//     } else {
//         bill = 100 * 1.50 + 100 * 2.00 + (units - 200) * 3.00;
//     }

//     bill += 0.20 * bill; 
//     if (bill == bill) cout <<bill;
//     else cout << bill;

//     return 0;
// }

// #include<iostream>
// #include<cmath>
// using namespace std;
// int main(){
//     //triangle 
//     int a;
//     cout<<"Enter first side : ";
//     cin>>a;
//     int b;
//     cout<<"Enter second side : ";
//     cin>>b;
//     int c;
//     cout<<"Enter third side : ";
//     cin>>c;
    
//     if (a!=b!=c){
//         cout<<"scalene"<<endl;
//     }
//     else if (a=b=c)
//     {
//         cout<<"equilateral"<<endl;
//     }
//     else{
//         cout<<"isosceles"<<endl;
//     }
// }
//  #include<iostream>
//  using namespace std;
//  int main(){
//     int n;
//     cout<<"Enter a number : ";
//     cin>>n;
//     for(int i=1; i<n; i++)
//     {
//         if(i%5==0||i%7==0)
//         {
//             continue;
//         }
//         cout<<i<<" ";
//     }
//  }


// #include<iostream>
// using namespace std;
// int main(){
//     int i;
//     cout<<"Enter i : ";
//     cin>>i;
//     int arr[] = {5, 15, 22, 1, 24};
//     {
//        cout<<arr[i];
//     }  
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//              int i;
//             int arr[5] = {10, 20, 30, 40, 50};
//             cout << "Array elements are: " << endl;
//             for (i = 0; i < 5; i++) {
//                 cout << arr[i] << endl;
//             } 
//         }
// #include<iostream>
// using namespace std;
// int main(){

//              int arr[5] = {10, 20, 30, 40, 50};
//             int new_arr;
            
//             arr[4] = 100; // Modifying the fourth element (index 3)


//             cout << "Modified array elements are: " << arr[4] << endl;
//             cout << "All array elements are: " << endl;

//             for (int i = 0; i < 5; i++) {
//                 cout << arr[i] << endl;
//             } 
//         }

// #include<iostream>
// using namespace std;
// int main(){
//             int i;

//             int arr[5] = {10, 20, 30, 40, 50};
//             int sum = 0;
//             for (i = 0; i < 5; i++) {
//                 sum += arr[i];
//             }
//             cout << "Sum of array elements: " << sum << endl; 
//         }


//         #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int nums[] = {5, 15, 22, 1, -15, 24};
//     int size = 6;

//     int largest = INT_MIN;

//     for(int i=0; i<size; i++){
//         largest = max(nums[i], largest);
//         //if(nums[i] > largest){
//             //largest = nums[i];
//         //}
//     }
//     cout<<"largest = "<<largest<<endl;
//     return 0;
// }



// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int arr[] = {5, 15, 22, 1, -15, 24};
//     int size = 6;

//     int smallest = INT_MAX;

//     for(int i=0; i<size; i++){
//         smallest = min(arr[i], smallest);
//     }
//     cout<<"smallest = "<<smallest<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int arr[3][3]={
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}
//     };
//     for(int i=0; i<3; i++)
//     {
//         for(int j=0; j<3; j++){
//             cout<<" "<<arr[i][j];
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int arr[2][2];
//     for(int i=0; i<2; i++)
//     {
//         for(int j=0; j<2; j++)
//         {
//             cin>>arr[i][j];
//         }
//     }
//     cout<<"the array elements are : ";
//    for(int a=0; a<2; a++)
//     {
//         for(int b=0; b<2; b++)
//         {
//             cout<<" "<<arr[a][b];
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={12, 45, 23, 51, 19, 8}
//     int n = 6;
//     for(int i=0; i<n-1; i++)
//     {
//         int minindex = i;
//         for(int j=i+1; j<n;j++)
//         {
//             if(arr[j]<arr[minindex])
//            {
//              minindex = j;
//            }
        
//             int temp = arr[i];
//         arr[i] = arr[minindex];
//         arr[minindex] = temp;
//         }
//         }
//          cout << "Sorted array: ";
//     for (int i = 0; i < n; i++)
//      {
//         cout << arr[i] << " ";

//     }
//     return 0;
// }





// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {12, 45, 23, 51, 19, 8};
//     int n = 5;

//     for (int i = 0; i < n - 1; i++) {
//         int minIndex = i;

//         for (int j = i + 1; j < n; j++) {
//             if (arr[j] < arr[minIndex]) {
//                 minIndex = j;
//             }
//         int temp = arr[i];
//         arr[i] = arr[minIndex];
//         arr[minIndex] = temp;
//     }
//     }
//     cout << "Sorted array: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++)
//     {
//         cin>>arr[];
//     }
//     for(int i=0; i<n-1; i++)
//     {
//         for(int j=0;j<n; j++)
//         {
//             if(arr[j]>arr[i])
//             {
//                 int temp=arr[j];
//                 arr[i]=arr[j];
//                 arr[i]= temp;
//             }
//         }
//         for(int i=0; i<n; i++){
//             cout<<arr[i];
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
    // int a;
    // cout<<"enter a: ";
    // cin>>a;
    // int d;
    // cout<<"enter d: ";
    // cin>>d;
    // int n;
    // cout<<"enter n: ";
    // cin>>n;
    // for(int i=a; i<=(a+(n-1)*d); i+=d){
    //     cout<<i<<" ";
    // }
    // int i=65;
    // while(i<=90){
    //     cout<<char(i)<<" "<<i<<endl;
    //     i++;
    // }
//     for(int i=2; i<=(n/2); i++)
//     {
//         if(n%i==0)
//             cout<<"composite";
//         else cout<<"prime";
//     }
// }

// #include<iostream>
// using namesapce std;
// int main(){
//     int x, y;

//     cout << "Enter number of rows: ";
//     cin >> x;
//     cout << "Enter number of columns: ";
//     cin >> y;

//     int A[x][y], B[x][y], sum[x][y];
//     cout<<"Enter elements of Matrix A: "<<endl;
//     for (int i = 0; i < x; i++) {
//         for (int j = 0; j < y; j++) {
//             cin >> A[i][j];
//         }

//          }

//     cout <<"Enter elements of Matrix A: "<<endl;

//      for (int i = 0; i < x; i++) {
//         for (int j = 0; j < y; j++) {
//             cin >> B[i][j];
//         }
//     }

//     for (int i = 0; i < x; i++) {
//         for (int j = 0; j < y; j++) {
//             sum[i][j] = A[i][j] + B[i][j];
//         }
//     }

//      cout << "Sum of matrices: "<<endl;
//     for (int i = 0; i < x; i++) {
//         for (int j = 0; j < y; j++) {
//             cout << sum[i][j] << " ";
//         }
//          cout << endl;
//     }

//      return 0;
//  }




// #include <iostream>
// using namespace std;

// int main() {
//     int r, c;

//     cout << "Enter number of rows: ";
//     cin >> r;
//     cout << "Enter number of columns: ";
//     cin >> c;

//     int A[r][c], B[r][c], sum[r][c];

//     cout << "\nEnter elements of Matrix A:\n";
//     for (int i = 0; i < r; i++) {
//         for (int j = 0; j < c; j++) {
//             cin >> A[i][j];
//         }
//     }

//     cout << "\nEnter elements of Matrix B:\n";
//     for (int i = 0; i < r; i++) {
//         for (int j = 0; j < c; j++) {
//             cin >> B[i][j];
//         }
//     }

    
//     for (int i = 0; i < r; i++) {
//         for (int j = 0; j < c; j++) {
//             sum[i][j] = A[i][j] + B[i][j];
//         }
//     }

    
//     cout << "\nSum of matrices:\n";
//     for (int i = 0; i < r; i++) {
//         for (int j = 0; j < c; j++) {
//             cout << sum[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

//selection shorting
 
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = {12, 45, 23, 51, 19, 8};
//     int n;
//     cin>>n;
//     for(int i=0; i<n; i++){
//         cin>>[i];
//     }
//     for(int i=0;i<<n-1; i++)
//     {
//         for(j=i+1;j<n;j++)
//         {
//             if (arr[j]>arr[i])
//         {
//             int temp = arr[j];
//             arr[j] = arr[j];
//             arr[i] = temp;}}}


//         for(int i=0; i<n; i++)
//         {
//         cout<<arr[i]<<"  ";
//         }
// }



//bubble shorting

// #include <iostream>
// using namespace std;

// void bubbleSort(int arr[], int n) {
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 // Swap arr[j] and arr[j+1]
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }

// int main() {
//     int arr[] = {64, 34, 25, 12, 22, 11, 90};
//     int n = ;

//     bubbleSort(arr, n);

//     cout << "Sorted array: ";
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";

//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=0; i<n-1;i++){
//          for (int j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 // Swap without temp (using arithmetic trick)
//                 arr[j] = arr[j] + arr[j + 1];
//                 arr[j + 1] = arr[j] - arr[j + 1];
//                 arr[j] = arr[j] - arr[j + 1];
//       }
//    }
//  }
// }


// Sorting of an array in C++ implementing Bubble Sort

// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[] = {64, 34, 25, 12, 22, 11, 90};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     bool swapped;

//     // Bubble Sort Algorithm
//     for (int i = 0; i < n-1; i++)
//     {
//         for (int j = 0; j < n-i-1; j++)
//         {
//             if (arr[j] > arr[j+1])
//             {
//                 // swap arr[j] and arr[j+1]
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//                 swapped = true;
//             }
//         }
//         if (!swapped)
//             break;
//     }

//     cout << "Sorted array: \n";
//     for (int i = 0; i < n; i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// //Defining function that prints given number
// void printNum(int n){
//     cout<<n<<endl;
// }
// int main(){
//    int num1=10;
//    int num2=99;
//    //Calling printNum and passing both
//    //num1 and num2 to it one by one
//    printNum(num1);
//    printNum(num2);
//    return 0;
// }

// #include <iostream>
// using namespace std;

// void fibonacci(int n) {
//     int a = 0, b = 1, c;
    
//     cout << a << " " << b << " ";
    
//     for(int i = 2; i < n; i++) {
//         c = a + b;
//         cout << c << " ";
//         a = b;
//         b = c;
//     }
// }

// int main() {
//     int n;
//     cout << "Enter how many terms: ";
//     cin >> n;

//     fibonacci(n);
//     return 0;
// }



// #include <iostream>
// using namespace std;
// int factorial(int n) {
//     int fact = 1;
//     for(int i = 1; i <= n; i++) {
//         fact = fact * i;
//     }
//     return fact;
// }

// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;

//     cout << "Factorial of " << num << " is " << factorial(num);
//     return 0;
// }
 
// #include<iostream>
// using namespace std;
// void inputMatrix(int mat[2][2], int r, int c){
//     cout<<"Enter elements :"<<endl;
//     for(int i = 0; i<r; i++){
//         for(int j = 0; j<c; j++){
//             cin>>mat[i][j];
//         }
//     }
// }
// void addMatrix(int A[2][2], int B[2][2], int C[2][2], int r, int c) {
//     for (int i = 0; i < r; i++) {
//         for (int j = 0; j < c; j++) {
//             C[i][j] = A[i][j] + B[i][j];
//         }
//     }
// }
// void displayMatrix(int mat[2][2], int r, int c) {
//     cout << "Result Matrix: "<<endl;
//     for (int i = 0; i < r; i++) {
//         for (int j = 0; j < c; j++) {
//             cout << mat[i][j] << " ";
//         }
//         cout << endl;
//     }
// }
// int main() {
//     int r, c;
//     int A[2][2], B[2][2], C[2][2];

//     cout << "Enter rows and columns: "<<endl;
//     cin >> r >> c;

//     cout << "Enter Matrix A:"<<endl;
//     inputMatrix(A, r, c);

//     cout << "Enter Matrix B:"<<endl;
//     inputMatrix(B, r, c);

//     addMatrix(A, B, C, r, c);

//     displayMatrix(C, r, c);

//     return 0;
// }



// #include <iostream>
// using namespace std;


// void inputMatrix(int m[2][2], int r, int c) {
//     cout << "Enter elements:"<<endl;
//     for (int i = 0; i < r; i++) {
//         for (int j = 0; j < c; j++) {
//             cin >> m[i][j];
//         }
//     }
// }


// void multiplyMatrix(int A[2][2], int B[2][2], int C[2][2],
//                     int r1, int c1, int c2) {
//     for (int i = 0; i < r1; i++) {
//         for (int j = 0; j < c2; j++) {
//             C[i][j] = 0; 
//             for (int k = 0; k < c1; k++) {
//                 C[i][j] += A[i][k] * B[k][j];
//             }
//         }
//     }
// }


// void displayMatrix(int m[2][2], int r, int c) {
//     cout << "Product Matrix:"<<endl;
//     for (int i = 0; i < r; i++) {
//         for (int j = 0; j < c; j++) {
//             cout << m[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// int main() {
//     int r1, c1, r2, c2;
//     int A[2][2], B[2][2], C[2][2];

//     cout << "Enter rows and columns of Matrix A: ";
//     cin >> r1 >> c1;

//     cout << "Enter rows and columns of Matrix B: "<<endl;
//     cin >> r2 >> c2;

//     if (c1 != r2) {
//         cout << "Matrix multiplication NOT possible!"<<endl;
//         return 0;
//     }

//     cout << "Enter Matrix A:"<<endl;
//     inputMatrix(A, r1, c1);

//     cout << "Enter Matrix B:"<<endl;
//     inputMatrix(B, r2, c2);

//     multiplyMatrix(A, B, C, r1, c1, c2);

//     displayMatrix(C, r1, c2);

//     return 0;
// }


// #include <iostream>
// using namespace std;
// voidswap(int x ,int y){
//     int t = x;
//     x = y;
//     y = t;
//     cout<<"After Swapping in function x: "<< x <<",y: "<< y <<endl;
// }

// int main(){
//     int x = 1, y = 2;

//     cout<<"Before Swapping: ";
//     cout<<"x : "<< x <<",y: "<<y<<endl;
//     swap(x, y);
//      cout<<"After Swapping: ";
//     cout<<"x : "<< x <<",y: "<<y<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// voidinterest(int p, int r, int t){
//     double interest = (p*r*t)/100;
//     cout<<"Calculated Interest: "<< interest<<endl;
// }
// int main(){
//     int p, r, t;
//     cout<<"enter p, r, t :"<<endl;
//     cin>>p >> r >> t;
//     interest (p, r, t);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// void largest(int a, int b, int c){
//     int x = (a>b) ? a : b;
//     int y = (x>c) ? x : c;
//     cout<"Largest number is : "<< y;

// }
// int main(){
//     int a, b, c;
//     cout<<"enter a, b, c :"<<endl;
//    cin>>a >> b >> c;
//    largest(a, b, c);
//    return 0;
// }



// #include<iostream>
// using namespace std;
// void func(int& x){
//     x--;
// }
// int main(){
//     int a = 5;
//     cout<< a <<endl;
//     func(a);
//     cout<<a;
// }

                  //------------------RECURSION-------------------//

// #include<iostream>
// using namespace std;
// void printHello (int n)
// {
//     //Base Case
// if (n==0) return;
// cout<<"Hello"<<endl;
// printHello(n-1);

// }
// int main()
// {
//     printHello(5);
// return 0;
// }

// #include<iostream>
// using namespace std;
// int factorial(int n){
//    if(n == 0)
//    {
//     return 1;
//    }
   
//    return n * factorial(n-1);
// }
// int main(){
//     int num = 5;
//     cout<<"The factorial of "<< num <<" is: "<<factorial(num) <<endl;
//     return 0;
// } 

    //........................STRING...............................//

// #include<iostream>
// using namespace std;
// int main(){
//     char greeting[6] = { 'H', 'e', 'l', 'l', 'o', '\0'};
//     cout<<"Welcome message: ";
//     cout<< greeting <<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//         char str[100];
//         cout<<"Enter a string: ";
//         cin.getline(str, 100);
//         cout<<"you entered: "<<str <<endl;
//         return 0;
// }

// #include<iostream>
// #include<cstring>
// using namespace std;
// int main(){
//     char f_name[20];
//     char l_name[20];
//     char full_name[50];
//     cout<<"Enter your first name: ";
//     cin>> f_name;
//     cout<<"Enter your last name: ";
//     cin>> l_name;
//     cout<<"Hi "<<f_name<<"!Your first name has"<< strlen(f_name)<<"characters."<<endl<<"And your last name has "<<strlen(l_name)<<"characters. "<<endl;
//     strcpy(full_name,f_name);
//     strcat(full_name, " ");
//     strcat(full_name,l_name);
//     cout<<"Your Full name is: "<<full_name<<endl;
//     if((strcmp(f_name,l_name))==0)
//     cout<<"Both strings are equal."<<endl;
//     else
//     cout<<"Strings are not equal."<<endl;
//     return 0;
// }

// #include<iostream>
// #include<cstring>
//  using namespace std;
//  int main(){
//     char string[100];
//     cout << "Enter a string: ";
//     cin.getline(string, 100);
//     cout << "You entered: " << string << endl; 

//     char f_name[50], l_name[50] , full_name[100];
//     cout << "Enter your first name: ";
//     cin.getline(f_name, 50);
//     cout << "Enter your last name: ";
//     cin.getline(l_name, 50);
//     cout << "Full Name: " << f_name << " " << l_name << endl;
//     cout << "Hi " << f_name << "! Your first name has " << strlen(f_name) << " characters." << endl << "And your last name has " << strlen(l_name) << " characters." << endl;
//     strcpy(full_name, f_name);

//     strcat(full_name, " ");
//     strcat(full_name, l_name);
//     cout << "Full Name using strcat: " << full_name << endl;

//     if ((strcmp(f_name,l_name)) == 0)
//     {
//         cout << "Both the strings are the same." << endl;
//     }
//     else
//     {
//         cout << "Strings are not the same." << endl;
//     }
    
    
//     return 0;
// }

// #include<iostream>
// #include<sting>
// using namespace std;
// int main(){
//     string str1 = "thakur ";
//     string str2 = "jhalak";
//     if ((str1.compare(str2))==0)
//     cout<<"Concatenated String: " << str are equal << endl;
//     else
//     cout<< "not";
//     return 0;

// }


// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str1 = {"hello"};
//     string str2 {"Joy"};
//     string str3 (str2); 
//     string str4(5,'a');
//     cout<<str1<<endl<<str2<<endl<<str3<<endl<<str4;
//     return 0;

// }

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string str = "Hello World";
//     cout << "Length of string: " << str.length() << endl;
//     return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str1 = "Welcome";
//     string str2 = "Home";
//     if((str1.compare(str2)) == 0)
//     cout<<"String Matched"<<endl;
//     else
//     cout<<"String Not Matched"<<endl;
//     return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str = "H1! Welcome Home";
//     string str1 = "i am Nik";
//     cout<<str.insert(4, "Joy, ")<<endl;
//     cout<<str.insert(4, str1)<<endl;
//     cout<<str.insert(21, ". What will you have?",4,5);
//     return 0;
// }

// #include <iostream>
// #include <string>
// #include <cctype>   // for isalnum, islower
// using namespace std;

// int main() {
//     string str;
//     cout << "Enter a string: ";
//     getline(cin, str);

//     string result = "";
//     for (char c : str) {
//         if (isalnum(c) && !islower(c)) {  
//             result += c;
//         }
//     }

//     cout << "After removing lowercase: " << result << endl;
//     return 0;
// }
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s, n;
// cout << "Enter a string: ";
// getline(cin, s);

// int begin = 0;
// int end = s.length() -1;

// while (begin < end) {

//    while (begin < end && !isalnum(s[begin])){
//     begin++;
//    }
//    while (begin < end && !isalnum(s[end])){
//     end--;
//    }
//    if(tolower(s[begin]) != tolower(s[end])){
//     cout<<"Not a palindrome";
//     return 0;
//    }
//    begin++;
//    end--;
// }
// return 0;
// } 


// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str;
//     cout<<"Enter a string: ";
//     getline(cin,str);
//     string vowels=" ";
//     string consonants=" ";
//     for(char c: str){
//         char ch = tolower(c);
//         if (ch>='a'&& ch<='z'){
//              if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'
//                 //||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'
//                 )
//             vowels +=c;
//             else
//             consonants +=c;
//         }
//     }
//     cout<<"Vowels: "<<vowels<<endl;
//     cout<<"Consonants: "<<consonants<<endl;
//     return 0;
// }


// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str;
//     cout<<"Enter a string: ";
//     int n = str.length();
//     getline(cin , str);
//     for (int i=0; i<n; i++)
//     {
//             if(str.length()>0){
//             str[0] = toupper(str[0]);
//         }
//         if(isspace(str[i-1]) && isalpha(str[i]))
//             {
//                 str[i] = toupper(str[i]);
//             }
//         else
//         {
//             str[i] = tolower(str);
//         }
//     }
    
//     cout<<"After capitalizing: "<<str;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int sum(int n){
//     if(n==0)
//     return 0;
//     return n + sum(n-1);
// }
// int main(){
//     int n;
//     cout<<"Enter number: ";
//     cin>>n;
//     cout<<"Sum = "<<sum(n);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int count(int n){
//     if(n==0)
//     return 0;
//     return 1 + count(n/10);
// }
// int main(){
//     int n;
//     cout<<"Enter number: ";
//     cin>>n;
//     if (n==0)
//     cout<<"count= 1";
//     else cout<<"count = "<<count(n);
//     return 0;
// }