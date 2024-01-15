;
/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main(){
	int x=1;
	int toplam=1;
	while(x>0 &&x<=44){
		toplam = toplam * x ; // 0+0=0 toplam=0 0+1=1 toplam=1 1+2=3 toplam=3 3+3=6 toplam=6 6+4=10 toplam=10
		x++;//0->1->2->3->4->5
		cout<<"Toplam degeriniz:"<<toplam<<endl;//0->1->3->6->10
		
	}
	
}