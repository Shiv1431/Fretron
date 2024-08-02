#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int>vc;
    int wg=0,sum=0;
    while(true){
        cout<<"Enter apple weight in grams (-1 to stop): ";
        cin>>wg;
        if(wg== -1)break;
        vc.push_back(wg);
        sum +=wg;
    }
    sort(vc.begin(),vc.end(),greater<int>());
    float rm=0.5, sm=0.3, sh=0.2;
    int Ram =rm * sum;
    int Shyam =sm * sum;
    int Rahim =sh * sum;
    vector<int>vc1,vc2,vc3;
    for (int weight:vc) {
        if(Ram >= weight) {
            vc1.push_back(weight);
            Ram -= weight;
        } 
		else if(Shyam >= weight) {
            vc2.push_back(weight);
            Shyam -= weight;
        } 
		else{
            vc3.push_back(weight);
            Rahim -= weight;
        }
    }
    cout<<"Distribution Result:"<<endl;
    cout<<"Ram: ";
    for(int i=0;i<vc1.size();++i) {
        if(i > 0) cout<<", ";
        cout<<vc1[i];
    }
    cout<<endl;
    cout<<"Shyam: ";
    for(int i=0; i<vc2.size();++i) {
        if(i > 0) cout<<", ";
        cout<<vc2[i];
    }
    cout<<endl;
    cout<<"Rahim: ";
    for(int i=0; i<vc3.size();++i) {
        if(i > 0) cout<<", ";
        cout<<vc3[i];
    }
    cout<<endl;
    return 0;
}
