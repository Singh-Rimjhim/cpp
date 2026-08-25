// Doping is an important process of IC fabrication used to control the electrical properties of semiconductor.

// there are two types of doping:
// n-type and p-type , in n-type phosporus are added to increases electrons and on other hand in p-type silicon are added to increases holes

// this process is essential for electronic components like transistor diodes and resistor

//           ----------------------------------------------------------

// Deposition is the process of adding thin layer of material onto slilicon wafer.

// these layers can be conductive insulating or semiconducting depending on the circuit requirement

// this process plays a key role in forming structure and connection of ICs  




// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string N;
//     int K;
//     cin >> N;
//     cin >> K;

//     int sum = 0;

//     for (char ch : N) {
//         sum += ch - '0';
//     }

//     sum = sum * K;

//     while (sum > 9) {
//         int temp = 0;
//         while (sum > 0) {
//             temp += sum % 10;
//             sum /= 10;
//         }
//         sum = temp;
//     }

//     cout << sum;
//     return 0;
// }


// #include <iostream>
// #include <cmath>
// #include <string>
// using namespace std;

// int main() {
//     int lower, upper;
//     cin >> lower >> upper;

//     bool found = false;

//     for (int num = lower; num <= upper; num++) {
//         string s = to_string(num);   
//         int n = s.length();          
//         int sum = 0;

//         for (int i = 0; i < n; i++) {
//             int digit = s[i] - '0';  
//             sum += pow(digit, n);
//         }

//         if (sum == num) {
//             cout << num << " ";
//             found = true;
//         }
//     }

//     if (!found)
//         cout << -1;

//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     string word;
//     cout<<"Enter a word: ";
//     cin>>word;
//     string result = word+ "a student";
//     cout<<"result: "<< result<<endl;
//     return 0;

// }



// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//         string name;
//         int age ;
//         int rollnumber ;
//         cout<<"Enter Name: ";
//         getline(cin, name);
//         cout<<"Enter age: ";
//         cin>>age;
//         cout<<"Enter Roll number: ";
//         cin>>rollnumber;
//         cout<<name<<" "<<age<<" "<<rollnumber;
//         return 0;
// }



// #include <iostream>
// using namespace std;

// int main() {
//     int n = 5;
//     for (int i = 1; i <= n; i++) {
//         for (int star = 1; star <= i; star++) {
//             cout << "*   ";
//         }
//         cout << endl;
//     }
//     for (int i = n - 1; i >= 1; i--) {
       
//         for (int star = 1; star <= i; star++) {
//             cout << "*   ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n, count = 0;
    
//     cout << "Enter number of elements: ";
//     cin >> n;

//     int arr[n];

//     cout << "Enter elements of array:"<<endl;
//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//         if(arr[i] % 2 == 0) {
//             count++;
//         }
//     }

//     cout << "Total even numbers = " << count;
//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string str;
//     int count = 0;

//     cout << "Enter a string: ";
//     getline(cin, str);

//     for(int i = 0; i < str.length(); i++) {
//         char ch = tolower(str[i]);

//         if(ch == 'a' || ch == 'e' || ch == 'i' || 
//            ch == 'o' || ch == 'u') {
//             count++;
//         }
//     }

//     cout << "Number of vowels = " << count;
//     return 0;
// }

#include <iostream>
#include <string>
using namespace std;

void reverseString(string str) {
    if (str.length() == 0)
        return;

    reverseString(str.substr(1)); 
    cout << str[0];                
}

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Reversed string: ";
    reverseString(str);

    return 0;
}