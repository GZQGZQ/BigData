#include "BigData.h"

//void Test1()
//{
//	BigData b1("+0000123456");
//	cout<<b1<<endl;
//	//"123465"   ""  "0x132465" "123adf456" "asd123456"	
//	cout<<BigData("      132465")<<endl;
//	cout<<BigData("            ")<<endl;
//	cout<<BigData("+132546     ")<<endl;
//	cout<<BigData("-     123456")<<endl;
//	cout<<BigData("-00000123456")<<endl;
//	cout<<BigData("123456adf789")<<endl;
//	cout<<BigData("0x0123456789")<<endl;
//	cout<<BigData("000000123465")<<endl;
//	cout<<BigData("000000000000")<<endl;
//	cout<<BigData("-  123456adf")<<endl;
//}

void Test2()
{
	BigData b2("+999999999999999999999999999999999999999999");
	BigData b3("+12");
	cout<<b2<<endl;
	//cout<<b3<<endl;
	//cout<<b2+b3<<endl;
}


int main()
{
//	Test1();
	Test2();
	system("pause");
}
