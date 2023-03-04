#include<iostream>
using namespace std;
int main(){
	int nm,ns,flag=0;
	int m[nm],s[ns];
	cout<<"Enter the number of students who likes Maths::";	
	cin>>nm;
	cout<<endl<<"Enter the roll number of students who likes Maths::"<<endl;
	for(int i=0;i<nm;i++)
	cin>>m[i];
	
	cout<<"Enter the number of student who likes Science::"<<endl;;	
	cin>>ns;
	cout<<endl<<"Enter the roll number of students who likes Science::"<<endl;
	for(int i=0;i<ns;i++)
	cin>>s[i];
	

	
	
	cout<<"Students who like only maths::"<<endl;	
	for(int i=0;i<nm;i++){
		for(int  j=0;j<ns;j++){
			if(m[i]==s[j]){
					flag=1;
				    break;
			}
		}		
		if(flag==0)
		cout<<m[i]<<" ";
			
	}

	cout<<endl<<"Students who like only maths and science::"<<endl; 
   	for(int i=0;i<nm;i++){
		for( int j=0;j<ns;j++){
			if(m[i]==s[j]){
					cout<<m[i]<<" ";
			}
		}					
	}
	
    int f=0;
    cout<<"Students who likes only science::"<<endl;
    for(int ii=0;ii<ns;ii++){
    	for(int jj=0;jj<nm;jj++){
    		if(s[ii]==m[jj]){
    			f=1;
    			break;
			}
		}
		if(f==0)
		cout<<s[ii]<<" ";
	}
	return 0;
}
