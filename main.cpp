#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	double horsepower, watts;
    cout << "請輸入馬力數：";
    cin >> horsepower;
    watts = horsepower * 746;
    cout << horsepower << " 馬力 = " << watts << " 瓦特" << endl;
    
    double  circle,area ;
    cout << "請輸入圓半徑：";
    cin >> circle;
    area = circle * circle * 3.14159;
    cout << circle << " 半徑 = " << area << " 面積" << endl;
    
    double  aldult, child ,all;
    cout << "請輸入成人票數：";
    cin >> aldult;
    cout << "請輸入兒童票數：";
    cin >> child;
    all = aldult*499 + child*199;
    cout << "應付金額 = " << all   << endl;
    
    double a,b,c,d,e,total,average;
    
    cout << "請輸入國文成績：";
    cin >> a;
    cout << "請輸入英文成績：";
    cin >> b;
    cout << "請輸入數學成績：";
    cin >> c;
    cout << "請輸入社會成績：";
    cin >> d;
    cout << "請輸入自然成績：";
    cin >> e;
    
    total = a+b+c+d+e;
    average = total/5;
    
    cout << "總分 = " << total << "平均= " << average << endl;
	return 0;
}
