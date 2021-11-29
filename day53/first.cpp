// // // check arithmetic expression
// // #include <iostream>
// // #include <cstdio>
// // #include <cstring>

// // using namespace std;

// // int checkarithmetic(int a, int b, int c)
// // {
// //     int d=a+c-2*b   ;
// //     int e=d%3;
// //     if(e==0)
// //         return 0;
// //     else
// //         return 1;
    

// // }

// // int main()
// // {
// //     int a, b, c;
// //     cin >> a >> b >> c;
// //     int d=checkarithmetic(a, b, c);
// //     cout<<d<<endl;
// //     return 0;
// // }

// // Length of the substring is at least 2
// // 'a' occurs strictly more times in this substring than 'b'
// // 'a' occurs strictly more times in this substring than 'c'

// #include <iostream>
// #include <cstdio>
// #include <cstring>

// using namespace std;

// int findcount(string s){
//     int a=0,b=0,c=0;
//     int n=s.length();
//     if (n<2)
//         return 0;
//     for(int i=0; i<n; i++){
//         if(s[i]=='a')
//             a++;
//         else if(s[i]=='b')
//             b++;
//         else
//             c++;
//     }
//     if(b>=a or c>=a) return 0;
//     return n;
// }

// int strings(string s){
//     int n=s.length();
//     if (n<2)
//         return 0;
//     int pos[n]={0};
//     int j=0;
//     for(int i=0; i<n; i++){
//         if(s[i]=='a'){
//             pos[j]=i;
//         }
//         j++;
//     }
//     int k=0;
//     int final[n]={0};
//     int g=0;
//     while(pos[k]!=0){
//         string l="";
//         for(int i=pos[k]; i<pos[k+1]; i++){
//             l+=s[i];
//         }
//         final[g]=findcount(l);
//         g++;
//         k++;
//     }
//     int min=INT_MAX;
//     for(int i=0; i<g; i++){
//         if(final[i]>min)
//             min=final[i];
//     }
//     return min;
// }

// int main()
// {
//     string s;
//     cin >> s;
//     int d=strings(s);
//     cout<<d<<endl;
//     return 0;
// }

