#include<iostream>
#include <string>
#include <sstream>
using namespace std;


	string a[1000][1000];
class Table{
	protected:
		int line;
		int col;
	public:
		Table(){
			line=1;
			col=1;
		}
		Table(int x,int y){
			line=x;
			col=y;
		}
		
		void addLine(){
			line=line+1;
		}
		void delLine(int i){ 
			 for(int j=i;j<line-1;j++){
			 	string *p=a[j];
			 	*a[j]=*a[j+1];
				*a[j+1]=*p;
			 }
			 line--;
		} 
		
		void addCol(){
			col=col++;
		}
		void delCol(int i){
			for(int j=i;j<col-1;j++){
				for(int k=0;k<line-1;k++){
					string p=a[j][k];
					a[j][k]=a[j][k+1];
					a[j][k+1]=p;
				}
			}
			col--;
		}
		
		void show(){
			for(int i=0;i<line;i++){
				for(int j=0;j<col;j++){
					cout<<a[i][j]<<" ";
				}cout<<"\n";
			}
		cout<<"\n";	
		}
		void set(int x,int y,int z){
			stringstream ss;
			string u;
			ss<<z;
			ss>>u;
			a[x][y]=u;
		}
		void set(int x,int y,string z){
			a[x][y]=z;
		}		
};

int main() {

  Table tb;
  
  tb.show();

  tb.addLine();

  tb.show();

  tb.addCol();

  tb.show();

  Table tb1(5,5);

  tb1.show();

  tb1.set(1,1,30);

  tb1.set(2,2,"hello");

  tb1.show();

  tb1.delLine(1);

  tb1.show();

  tb1.delCol(1);

  tb1.show();

  return 0;
  } 

