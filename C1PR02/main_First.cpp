#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main(){
    int n;
    vector <long long> x, y, z;
    vector <int> bestXIndex, bestYIndex, bestZIndex;
    long long maxX = LLONG_MIN, minY = LLONG_MAX, maxZ = LLONG_MIN;
    int x_buf, y_buf, z_buf;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> x_buf >> y_buf >> z_buf;
        x.push_back(x_buf);
        y.push_back(y_buf);
        z.push_back(z_buf);
        if (x_buf > maxX){
            maxX = x_buf;
        }

    }
    //หา index ที่ของ x ที่มีค่ามากสุด
    for (int i = 0; i < n; i++){
        if (x[i] == maxX){
            bestXIndex.push_back(i);
        }
    }

    //หา min y ใน bestXIndex
    for (int i = 0; i < bestXIndex.size(); i++){
        if (y[bestXIndex[i]] < minY){
            minY = y[bestXIndex[i]];
        }
    }
    //หา index ทีของ y ที่ค่าน้อยสุด
    for (int i = 0; i < bestXIndex.size(); i++){
        if (y[bestXIndex[i]] == minY){
            bestYIndex.push_back(bestXIndex[i]);
        }
    }

    //หา max z ใน bestYIndex
    for (int i = 0; i < bestYIndex.size(); i++){
        if (z[bestYIndex[i]] > maxZ){
            maxZ = z[bestYIndex[i]];
        }
    }
    //หา index ที่ของ z ที่มีค่ามากสุด
    for (int i = 0; i < bestYIndex.size(); i++){
        if (z[bestYIndex[i]] == maxZ){
            bestZIndex.push_back(bestYIndex[i]);
        }
    }

    cout << x[bestZIndex[0]] << " " << y[bestZIndex[0]] << " " << z[bestZIndex[0]] << endl;
    return 0;
}