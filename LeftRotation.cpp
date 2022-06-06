vector<int> rotateLeft(int d, vector<int> arr) {
    vector<int>x,y;
    for(int i=0;i<d;i++){
        x.push_back(arr[i]);
    }
    for(int i=d;i<arr.size();i++){
        y.push_back(arr[i]);
    }
    y.insert(y.end(),x.begin(),x.end());
    return y;
}
