#include<bits/stdc++.h>
using namespace std;
double exp()
{
   char a[20];
   scanf("%s",a);//ע��scanfȡ���ַ���������\0��ֹͣ 
   switch(a[0]){
   case '+':return exp()+exp();
   case '-':return exp()-exp();
   case '*':return exp()*exp();
   case '/':return exp()/exp();
   default:return atof(a);
   
   }
 
}
int main()
{
    double ans;
	ans=exp();
	printf("%.1lf",ans);
	return 0;
}

