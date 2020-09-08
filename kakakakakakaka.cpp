#include<iostream>

using namespace std;

int main() {
	double 速度 = 0;
	double 角度 = 0;
	double 半径 = 0;
	double 中心角 = 0;
	double π = 3.14;
	double 角速度 = 0;
	double 長さ = 73.5;
	double 移動距離 = 0;
	double 移動距離L = 0;
	double 移動距離R = 0;
	double 速度L = 0;
	double 速度R = 0;
	double 時間 = 0;
	cout << "速度を入力してください。（mm/s）";
	cin >> 速度;
	cout << "角度を入力してください（0＜ｘ＜90）";
	cin >> 角度;
	cout << "半径を入力してください(73.5<x)";
	cin >> 半径;

	if (半径 > 長さ) {

		if (0 <角度	&& 角度< 180) {
			中心角 = 180 - 2 * 角度;


			if (0<中心角&& 中心角<=90) {
				移動距離 = 半径 * 2 * π * 中心角 / 360;
				cout <<"移動距離" <<移動距離<<"mm"<<endl;
				時間 = 移動距離 / 速度;
				cout <<"時間"<< 時間 <<"秒"<< endl;
				移動距離L = (半径 + 長さ) * π * 中心角 / 360;
				cout <<"左"<< 移動距離L <<"mm"<< endl;
				速度L = 移動距離L / 時間;
				cout <<"左　速度"<< 速度L <<"mm/s"<< endl;
				移動距離R = (半径 - 長さ) * π * 中心角 / 360;
				cout <<"右"<< 移動距離R <<"mm"<< endl;
				速度R = 移動距離R / 時間;
				cout <<"右　速度"<< 速度R <<"mm"<< endl;





			}
			

		}
	}
	


