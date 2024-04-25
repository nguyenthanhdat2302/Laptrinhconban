#include <iostream>
using namespace std;


short thongBao(int tb)
{
    cout << " Chao mung den voi chuong trinh " << tb << endl;
    return tb;
}

int tichSONGUYEN(int inputt)
{
    int tich = 1;
    for (int i = 1; i <= inputt; ++i)
    {
        tich = tich * i;
    }
    return tich;
}
float tongS(int n)
{
    float sum = 0;
    for (float i = 1; i <= n; ++i)
    {
        sum += i / (i + 1);
    }
    return sum;
}
int tongCongTru(int N)
{
    int sum = 1;
    int bienDau = 1;
    for (int i = 2; i <= N; ++i)
    {
        sum += bienDau * i;
        bienDau = -bienDau;
    }
    return sum;
}
void inHinhCN(int chieuRong, int ChieuDai)
{
    for (int i = 0; i <= ChieuDai; ++i)
    {
        for (int j = 0; j <= chieuRong; ++j)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

double Epsilon(float n)
{
    float e = 1.0;
    float nGiaithua = 1.0;
    int i = 1;
    while (i <= n)
    {
        nGiaithua *= i;
        e += 1.0 / nGiaithua;
        ++i;
    }
    return e;
}

float tongSix2j(int n, int m)
{
    float Sum = 0;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            Sum += i + (2 * j);
        }
    }
    return Sum;
}

float trungBinhsothuc(float soThuc)
{
    float sumsothuc = 0;
    int count = 0;
    while(soThuc != 0)
    {   
        sumsothuc += soThuc;
        count ++;
        cout<<" Nhap so thuc tiep theo : ";
        cin>>soThuc;
        
    }
    float trungBinh = sumsothuc / count;
    cout<<" Gia tri trung binh : ";
    return trungBinh;
}

float Fibonacci(int n)
{
    if( n == 1 || n == 2)
    {
       return 1;
    }else
    {
    return   Fibonacci(n - 1) + Fibonacci( n -2);
    }
}
int main()
{
    int luaChon = 0;
    do
    {
        cout << endl;
        cout << "--------------------Menu-----------------" << endl;
        cout << " //1. Cau 7: Tich cac so nguyen duong N" << endl;
        cout << " //2. Cau 8: Tong (n/(n+1) nguyen duong N" << endl;
        cout << " //3. Cau 10: Tinh tong S = i + 2 *j" << endl;
        cout << " //4. Cau 12: In hinh chu nhat chieu dai chieu rong nhap tu ban phim" << endl;
        cout << " //5. Cau 14: Epsilon" << endl;
        cout << " //6. Cau 16: Trung binh cac so thuc da nhap !0" << endl;
        cout << " //7. Cau 18: In cac so nguyen to < input" << endl;
        cout << " //8. Cau 19: In uoc so le lon nhat cua input" << endl;
        cout << " //9. Cau 20: Fibonacci " << endl;
        cout << " //0. Cau 0: End" << endl;
        cout<<"------------------------------------------------"<<endl;
        cout << " Xin moi lua chon : ";
        cin >> luaChon;
        switch (luaChon)
        {
        case 1:
            int input;
            thongBao(luaChon);
            cout << " Nhap vao gia tri N : ";
            cin >> input;
            cout << " Tich cac so dau tien cua so nguyen duong : " << tichSONGUYEN(input) << endl;
            break;
        case 2:
            int inputt;
            thongBao(luaChon);
            cout << " Nhap vao gia tri N : ";
            cin >> inputt;
            cout << " Tong n/(n+1) voi input tu ban phim : " << tongS(inputt);
            break;
        case 3:
            // thongBao(luaChon);
            // int N;
            // cout<<" Nhap vao gia tri N : ";
            // cin >> N;
            // cout<<" Tong voi cong thuc + / - N : "<<tongCongTru(N);
            thongBao(luaChon);
            int n, m;
            cout << " Nhap vao gia tri n : ";
            cin >> n;
            cout << " Nhap vao gia tri m : ";
            cin >> m;
            cout << " Tong S : " << tongSix2j(n, m) << endl;
            break;
        case 4:
            thongBao(luaChon);
            int chieuDai, chieuRong;
            cout << " Nhap chieu dai : ";
            cin >> chieuDai;
            cout << " Nhap chieu rong : ";
            cin >> chieuRong;
            inHinhCN(chieuDai, chieuRong);
            break;
        case 5:
            thongBao(luaChon);
            float Nesilon;
            cout << " Nhap vao gia tri N : ";
            cin >> Nesilon;
            cout << "Gia tri E sau khi input N nhap tu ban phim :   " << Epsilon(Nesilon) << endl;
            break;
        case 6:
            thongBao(luaChon);
            float soThuc;
            cout<<" Nhap so thuc tinh trung binh( 0 = end ) : "; cin>>soThuc;
            cout<<trungBinhsothuc(soThuc)<<endl;
            break;
        case 7:
            thongBao(luaChon);
            break;
        case 8:
            thongBao(luaChon);
            break;
        case 9:
            thongBao(luaChon);
            int inFibo;
            cout<<" Nhap vao N de tinh Fibonacci : "; cin >> inFibo;
            cout<<" So hang thu "<<inFibo<<" = " << Fibonacci(inFibo);
            break;
        case 0:
            cout << " Hen gap lai ! ";
            return 0;

        default:
            cout << " Vui long lua chon lai chuc nang ! ";
            break;
        }

    } while (luaChon != 0);
}
