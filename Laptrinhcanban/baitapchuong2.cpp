#include<iostream>
using namespace std;
short thongBao(int tb){
    cout<<" Chao mung den voi chuong trinh "<<tb<<endl;
    return tb;
}


int tichSONGUYEN(int inputt){
    int tich = 1;
    for(int i = 1 ; i <= inputt; ++i){
      tich = tich * i;
    }
    return tich;
}
float tongS(int n){
    float sum = 0;
    for(float i = 1; i<= n; ++i){
        sum += i/(i+1);
    }
    return sum;
}
int tongCongTru(int N){
    int sum = 1;
    int bienDau = 1;
    for(int i = 2; i <= N ; ++i){
        sum += bienDau * i;
        bienDau = -bienDau;
    }
    return sum;
}
void inHinhCN(int chieuRong, int ChieuDai){
    for(int i = 0; i<= ChieuDai; ++i){
        for(int j = 0;j <= chieuRong;++j){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main(){
    int luaChon = 0;
 do{
    cout<<endl;
    cout<<" //----------------Menu-----------------\\"<<endl;
    cout<<" //1. Cau 7: tich cac so nguyen duong N: \\"<<endl;
    cout<<" //2. Cau 8: Tong (n/(n+1) nguyen duong N: \\"<<endl;
    cout<<" //3. Cau 7: tich cac so nguyen duong N: \\"<<endl;
    cout<<" //4. Cau 7: tich cac so nguyen duong N: \\"<<endl;
    cout<<" //5. Cau 7: tich cac so nguyen duong N: \\"<<endl;
    cout<<" //6. Cau 7: tich cac so nguyen duong N: \\"<<endl;
    cout<<" //7. Cau 7: tich cac so nguyen duong N: \\"<<endl;
    cout<<" //8. Cau 7: tich cac so nguyen duong N: \\"<<endl;
    cout<<" //9. Cau 7: tich cac so nguyen duong N: \\"<<endl;
    cout<<" //0. Cau 7: tich cac so nguyen duong N: \\"<<endl;
    cout<<" Xin moi lua chon : ";
    cin>> luaChon;
    switch (luaChon)
    {
    case 1:
        int input;
        thongBao(luaChon);
        cout<<" Nhap vao gia tri N : ";
        cin >> input;
        cout<<" Tich cac so dau tien cua so nguyen duong : "<<tichSONGUYEN(input)<<endl;
        break;
    case 2:
        int  inputt;
        thongBao(luaChon); 
        cout<<" Nhap vao gia tri N : ";
        cin >> inputt;
        cout<<" Tong n/(n+1) voi input tu ban phim : "<<tongS(inputt);
        break;
    case 3:
        thongBao(luaChon);
        int N;
        cout<<" Nhap vao gia tri N : ";
        cin >> N;
        cout<<" Tong voi cong thuc + / - N : "<<tongCongTru(N);
        break;
    case 4:
        thongBao(luaChon);
        int chieuDai,chieuRong;
        cout<<" Nhap chieu dai : "; cin >> chieuDai;
        cout <<" Nhap chieu rong : "; cin >> chieuRong;
        inHinhCN(chieuDai, chieuRong);
        break;
    case 5:
        break;
    case 6:
        break;
    case 7:
        break;
    case 8:
        break;
    case 9:
        break;

    default: cout<<" Vui long lua chon lai chuc nang ! ";
        break;
    }

 }while(luaChon != 0);
}