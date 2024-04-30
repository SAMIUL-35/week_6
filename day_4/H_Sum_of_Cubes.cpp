#include <bits/stdc++.h>
#define ll   long long



using namespace std;
bool check_perfect_cube(ll x){
	ll tmp = cbrt(x);
	while(tmp * tmp * tmp > x){
		tmp--;
	}
	while(tmp * tmp * tmp < x){
		tmp++;
	}
	if(tmp * tmp * tmp == x){
		return true;
	}
	return false;
}

void sm()
{
	ll x,z;
	cin >> x;

	for(ll a=1;a<10001;a++) {
        z = x - (a*a*a);
		if(z<= 0){
			break;
		}

		if(check_perfect_cube(z)){
			cout<< "YES"<<endl;
			return;
		}

	}
	cout<<"NO"<<endl;
}

int main()
{
    long long t;
    cin>>t;

    while(t--)
    {

        sm();


    }
















    return 0;
}
