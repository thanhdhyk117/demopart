#include<iostream>
#include<fstream>

using namespace std;

int main(){
	int a, b, c;
	float dtb;
	fstream fin("input.txt", ios::in);
	fstream fout("output.txt", ios::out);
	
	if(!fin.is_open())
	{
		fout<<"File input.txt khong kha dung";
	}
	else{
        //a là điểm chuyên cần, b là điểm giữa kỳ, c là điểm thi kết thúc
		fin >> a;
		fin >> b;
		fin >> c;
		
        if(a < 5)
            fout<<"Chúc mừng bạn quay vào ô học lại!";
        else{
            fout <<"Điểm chuyên cần = ";
            fout<<a;
            fout <<"\nĐiểm Thi giữa kỳ = " ;
            fout<<b;
            fout <<"\nĐiểm chuyên cần = ";
            fout<<c;
            
            dtb = (float) a * 0.1f + b * 0.2f + c * 0.7f;
            fout<<"\n Điểm trung bình = "<<dtb;

			if(dtb < 4)
				fout<<"\n Bạn không đủ điểm qua môn, Hẹn gặp bạn ở kỳ phụ!";
			else
				fout<<"\n Chúc mừng bạn đã qua môn!";
        }
	}
	
	fin.close();
	fout.close();	
}
