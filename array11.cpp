#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
using namespace std;
bool inputnumber(const string& input){
    for (char c : input){
        if (isalnum(c)){
            return true;
        }

    }
    return false;
}
// string

//     int main(){
//         bool number[] = {"0","1","2","3","4","5","6","7","8","9"};
//         string input;
//         int i=0,j=0;
//         getline(cin,input);
        
//     }


#include <bits/stdc++.h>
using namespace std;
struct point{
    int x,y;
};
struct rect{
    point left,right;
};
bool doOverlap(rect rect1,rect rect2){
    // if rectangle has area 0, no overlap
    if (rect1.left.x == rect2.left.x || rect1.left.y == rect2.left.y || rect1.left.x == rect2.left.x || rect1.right.y == rect2.right.y)
        return false;
   
     // If one rectangle is on left side of other
    if (rect1.left.x > rect2.right.x || rect2.left.x > rect1.right.x)
        return false;
 
    // If one rectangle is above other
    if (rect1.right.y > rect2.left.y || rect2.left.y > rect1.left.y)
        return false;
 
    return true;
    
}
bool isRectangle(point l1,point r1 ){
    //check if it is not point
    if (l1.x==r1.x&&l1.y==r1.y){
        return false;
    }
    //check if it is not line
    if (l1.x==r1.x||l1.y==r1.y){
        return false;
    }
    //check if it is rectangle
    if (r1.x > l1.x && r1.y > l1.y){
        return true;
    }
    return false;
}
// Function to calculate the area of a rectangle
int calculateArea(const rect& rect1) {
    return (rect1.right.x - rect1.left.x) * (rect1.right.y - rect1.left.y);
}
int calOverlaparea(rect rect1,rect rect2){
    // Calculate the coordinates of the overlapping region
    int overlapX1 = max(rect1.left.x, rect2.left.x);
    int overlapY1 = max(rect1.left.y, rect2.left.y);
    int overlapX2 = min(rect1.right.x, rect2.right.x);
    int overlapY2 = min(rect1.right.y, rect2.right.y);

    // Check if there is an actual overlap
    // if (overlapX1 < overlapX2 && overlapY1 < overlapY2) {
    if (doOverlap(rect1,rect2)){
        // Calculate the area of the overlapping region
        rect overlapRect = {overlapX1, overlapY1, overlapX2, overlapY2};
        return calculateArea(overlapRect);
    } else {
        // No overlap
    return 0;
    }
}
int main(){
    int N,x1,y1,x2,y2;
    cin>>N;
    rect inputRect[N];
    for (int i= 0; i<N;i++){
        cin>>x1>>y1>>x2>>y2;
        inputRect[i].left.x = x1;
        inputRect[i].left.y = y1;
        inputRect[i].right.x = x2;
        inputRect[i].right.y = y2;
        if (!isRectangle(inputRect[i].left,inputRect[i].right)){
            cout<<"Not rectangle"<<endl;
        }
    }
    for (int j = 0; j < N ; j++ ){
        for (int k = j + 1 ; k < N ; k++){
            
        }
    }
    return 0;
}
    