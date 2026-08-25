// #include<iostream>
// using namespace std;
// int main(){
    // int n;
    // cout << "Enter the number of elements: ";
    // cin >> n;
    // int arr[n]; 
    // cout << "Enter " << n << " elements: ";
    // for (int i = 0; i < n; i++) {
    //     cin >> arr[i];
    // }
    // cout << "The array elements are: ";
    // for (int i = 0; i < n; i++) {
    //     cout << arr[i] << " ";
    // }

//     int m, n;
//     cout << "Enter number of rows: ";
//     cin >> m;
//     cout << "Enter number of columns: ";
//     cin >> n;
//     int arr[m][n];
//     cout << "Enter elements of the array:"<<endl;
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) {
//             cin >> arr[i][j];
//         }
//     } 
//     cout << "The 2D array is:"<<endl;
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;  
//     }
// }


// #include<iostream>
// using namespace std;
// void linearsearch(int a[ ],int n)
// {
//     int temp= -1;
//     for(int i=0;i<5;i++)
//     {
//         if(a[i]==n)
//         {
//             cout<<"Elements found in Locations:"<<i<<endl;
//             temp=0;
//         }
//         if(temp==-1){
//             cout<<"No elements in location"<<endl;
//         }
//     }
// }
// int main(){
//     int num;
//     int arr[5]={1, 22, 24, 5, 7};
//     cout<<"Enter the elements to search: "<<endl;
//     cin>>num;
//     linearsearch(arr, num);
//     return 0;
// }


#include <iostream>
using namespace std;

int main()
{
    int arr[8], k, i;
    
    cout << "Enter 8 elements:"<<endl;
    for(i = 0; i < 8; i++)
    {
        cin >> arr[i];
    }
    
    cout << "Enter element to search: ";
    cin >> k;
    
    for(i = 0; i < 8; i++)
    {
        if(arr[i] == k)
        {
            cout << "Element found at position " << i + 1;
            return 0;
        }
    }
    
    cout << "Element not found";
    
    return 0;
}