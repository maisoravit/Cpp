// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int r,c;
//     int num;
//     cin>>r>>c;
//     vector<vector<int>> data(r,vector<int>(c, 0));
//    for (int i = 0; i < r; ++i) {
//         for (int j = 0; j < c; ++j) {
//             cin >> data[i][j];
//         }
//     }
//     //call function calculate
//     stack<string> store;
//     store.push("DONE");
//     string path;
//     int temp_r = r-1;
//     int temp_c = c-1;
//     for (int row = 0; row<r; row++){
//         for (int col = 0; col<c; col++){
//             if (row == 0 && col == 0){
//                 path+="A";
//             }
//             else if (row == temp_r && col == temp_c){
//                 store.push(path);
//             }
//             else{
//                 if (col != c-1){
//                 path += "A";
//                 }
//                 else{
//                     path += "B";
//                 }
//             }
           
//         }
//     }
//     //print output result
//     while(!store.empty()){
//         cout<<store.top()<<endl;
//         store.pop();
//     }
// }



#include<bits/stdc++.h>

using namespace std ;

void walk(const int c , const int r , int row ,int  col ,vector<vector<int>> &data,string &sol)
{
    data[row][col] = 1 ;
    if(row == r-1 && col == c-1 )
    {
        cout << sol << "\n" ;
    }
    else
    {
        if(col + 1 < c && data[row][col +1 ] == 0)
        {
            sol += "A" ;
            walk(c ,  r , row , col + 1 , data , sol) ;
            sol.pop_back() ;
            data[row][col + 1 ] = 0 ;
        }
        if(row + 1 < r && data[row + 1][col] == 0)
        {
            sol += "B" ;
            walk(c ,  r , row+ 1  , col , data , sol) ;
            sol.pop_back() ;
            data[row+ 1][col ] = 0 ;
        }
        if(row - 1 >= 0 && data[row -1 ][col] == 0)
        {
            sol += "C" ;
            walk(c ,  r , row -1, col , data , sol) ;
            sol.pop_back() ;
            data[row -1][col] = 0 ;
        }

    }
        
}
    


int main()
{
    int  r, c ;
    cin >> r >> c ;
    vector<vector<int>> data(r , vector<int>(c)) ;
    set<string> ans ; 
    string sol = "";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> data[i][j] ;
        }
        
    }
    walk(c ,  r , 0 , 0 , data  , sol)  ;
    cout << "DONE" ;
    
}
