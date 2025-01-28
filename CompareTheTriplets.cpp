vector<int> compareTriplets(vector<int> a, vector<int> b) {

int alicePoint=0, bobPoint=0;
cin>>a[0]>>a[1]>>a[2]>>b[0]>>b[1]>>b[2];
for(int i=0; i<3; i++){
    if( a[i]>b[i])
    alicePoint++;
    else if (b[i]>a[i])
    bobPoint++;
    } 
    return {alicePoint,bobPoint};
}
