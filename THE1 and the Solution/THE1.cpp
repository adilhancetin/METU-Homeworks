#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

void kural0(int& i,bool& control){
	control = 0;
}


void kural1(int& i,int& r1,vector<int>& dizi){
    r1 = dizi.at(i+1);
    i=i+2;
	
}

void kural2(int& i,int& r2,vector<int>& dizi){
	r2 = dizi.at(i+1);
    i=i+2;
}

void kural3(int& i,int& r1,vector<int>& dizi){
	r1 = dizi.at(dizi.at(i+1));
	i = i+2;
}

void kural4(int& i,int& r2,vector<int>& dizi){
	r2 = dizi.at(dizi.at(i+1));
	i = i+2;
	
}
void kural5(int& i,int& r1,int& r2){
	r1 = r2;
	i++;
	
}
void kural6(int& i,int& r1,int& r2,vector<int>& dizi){
	r1 = dizi.at(r2);
	i++;
}
void kural7(int& i,int& r1,int& r2,vector<int>& dizi){
	dizi.at(r1) = r2;
	i++; 
}
void kural8(int& i,int& r1,vector<int>& dizi){
	dizi.at(dizi.at(i+1)) = r1;
	i = i+2;
}
void kural9(int& i,vector<int>& dizi){
	i = dizi.at(i+1);
}
void kural10(int& i,int& r1,vector<int>& dizi) {
	if(r1==0){
		i = i+2;
	}
	else{
		i = dizi.at(i+1);
	}
}
void kural11(int& i,int& r1,int& r2){
	r1 = r1+r2;
	i++;
}
void kural12(int& i,int& r1,int& r2){
	r1 = r1-r2;
	i++;
}
void kural13(int& i,int& r1,int& r2){
	r1 = r1*r2;
	i++;
}
void kural14(int& i,int& r1,int& r2){
	r1 = r1/r2;
	i++;
}
void kural15(int& i,int& r1){
	r1 = -r1;
	i++;
}
void kural16(int& i,int& r1,int& r2){
	if(r1==r2){
		r1=0;
	}
	else if(r1>r2){
		r1 = 1;
	}
	else{
		r1 = -1;
	}
	i++;
}



int main(){
	int i =0;
	bool control = 1;
	vector<int> dizi= {1,4,10,5,0,2,1,12,8,1,10,17,1,3,8,38,0,3,13,9,23,3,38,4,13,13,8,38,3,1,2,1,12,8,1,10,21,0,1};
	dizi.resize(1000);
	
	int r1=0;
	int r2=0;
	//int add;
	
	//for(int z=0;z<=25;z++){
	//	cin>>add;
	//	dizi.push_back(add);
	//}
	
	
	cout<<i<<endl;
	
	while(control ==1){
		if(dizi.at(i)==1){
			kural1(i,r1,dizi);
		}
		else if(dizi.at(i)==2){
			kural2(i,r2,dizi);
		}
		else if(dizi.at(i)==3){
			kural3(i,r1,dizi);
		}
		else if(dizi.at(i)==4){
			kural4(i,r2,dizi);
		}
		else if(dizi.at(i)==5){
			kural5(i,r1,r2);
		}
		else if(dizi.at(i)==6){
			kural6(i,r1,r2,dizi);
		}
		else if(dizi.at(i)==7){
			kural7(i,r1,r2,dizi);
		}
		else if(dizi.at(i)==8){
			kural8(i,r1,dizi);
		}
		else if(dizi.at(i)==9){
			kural9(i,dizi);
		}
		else if(dizi.at(i)==10){
			kural10(i,r1,dizi);
		}
		else if(dizi.at(i)==11){
			kural11(i,r1,r2);
		}
		else if(dizi.at(i)==12){
			kural12(i,r1,r2);
		}
		else if(dizi.at(i)==13){
			kural13(i,r1,r2);
		}
		else if(dizi.at(i)==14){
			kural14(i,r1,r2);
		}
		else if(dizi.at(i)==15){
			kural15(i,r1);
		}
		else if(dizi.at(i)==16){
			kural16(i,r1,r2);
		}
		else{
			control = 0;
		}
		cout<<i<<endl;
	}
	cout<<r1<<" "<<r2<<" "<<i;
	
	
	return 0;
}
