#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Tinhsofibo(int a1, int b1){
	printf("Nhap vao 2 so nguyen can kiem tra:");
	scanf("%d %d", &a1,&b1);
	int danhsachFibo[30], a2, b2, i;
	danhsachFibo[0]=1;
	danhsachFibo[1]=1;
	for(i=2; i<30; i++){
		danhsachFibo[i]=danhsachFibo[i-1]+danhsachFibo[i-2];
	}
	//tao mang gom cac phan tu la cac so Fibonacci 
	for(i=0; i<30; i++){
	    if(a1<=danhsachFibo[i]){
		    a2=i;
	        break;
	    }
	}
	//tim so Fibonacci dau tien trong khoang 2 so nguyen nhap vao
	for(i=0; i<30; i++){
	    if(b1<=danhsachFibo[i]){
		    b2=i-1;
		    break;
	    }
	}
	//tim so Fibonacci cuoi cung trong khoang 2 so nguyen nhap vao
	printf("Cac so fibonacci trong khoang la:");
	for(i=a2; i<=b2; i++){
	    printf("  %d", danhsachFibo[i]);
	}
	//in ra cac so Fibonacci trong khoang nhap vao 			
}
void Dangnhap(char tendn[], char mk[]){
	printf("\nMenu:");
	printf("\n1. Tinh so fibonacci giua 2 khoang\n2. Game doan chu\n3. Game giai do");
	printf("\n4. Tro giup\n5. Dang xuat\nChon mot chuong trinh de tiep tuc:");
	int m;
	scanf("%d", &m);
	switch(m) {
		case 1: {
			int a,b,g;
			Tinhsofibo(a,b);
			printf("\nChon [1] de quay ve menu, [2] de dang xuat :");
			fflush(stdin);
			scanf("%d", &g);
			if(g==1) {
			    Dangnhap(tendn,mk);
			}
			if(g==2) {
			    break;
			}
		}
		case 2: {
			int cauhoi,g;
			char Hint[6][100], Word[5][100], cautraloi[20];
			strcpy(Hint[1],"A large CPU maker in the US");
			strcpy(Hint[2],"The best university about science and technology in VN");
			strcpy(Hint[3],"characters in LOL whose names start with the letter Y");
			strcpy(Hint[4],"the province where President Ho Chi Minh was born");
			strcpy(Hint[5],"The current President of the National Assembly of Vietnam");
			strcpy(Word[1],"Intel");
			strcpy(Word[2],"Hust");
			strcpy(Word[3],"Yasuo");
			strcpy(Word[4],"Nghe An");
			strcpy(Word[5],"Vuong Dinh Hue");
			//khoi tao gia tri cua goi y va tu can tim
			printf("Chon de bai(so tu 1 den 5):");
			scanf("%d", &cauhoi);
			printf("Hint: %s\n", Hint[cauhoi]);
			C: printf("Answer:");
			fflush(stdin);
			gets(cautraloi);
			if(strcmp(cautraloi,Word[cauhoi])==0){
				printf("Dap an chinh xac!");
				printf("\nChon [1] de quay ve menu, [2] de dang xuat :");
				fflush(stdin);
			    scanf("%d", &g);
			    if(g==1) {
			        Dangnhap(tendn,mk);
			    }
			    if(g==2) {
			        break;
			    }
			}
			else{
				printf("Cau tra loi sai!\n");
				goto C;
			}
		}
		case 3: {
			int so1,so2,i,g,dem=0,mang1[25],mang2[25];
			printf("Moi ban nhap vao 2 so de bai toan lay so ngau nhien trong ");
			printf("\nkhoang do de thuc hien chuong trinh.\n");
			printf("Min-max:");
			scanf("%d %d", &so1, &so2);
			for(i=0; i<25; i++){
				fflush(stdin);
				mang1[i]=so1+rand()%(so2+1-so1);
				fflush(stdin);
				mang2[i]=so1+rand()%(so2+1-so1);
			}
			//tao 2 mang co cac phan tu ngau nhien de tinh toan
			for(i=0; i<25; i++){
				fflush(stdin);
				int check=rand()%3;
				//chon random phep tinh
				if(check==0){
					int ketqua;
					printf("Cau %d:%d+%d=",i+1,mang1[i],mang2[i]);
					scanf("%d", &ketqua);
					if(ketqua==mang1[i]+mang2[i]){
						printf("Ket qua: Dung\n");
						dem++;
					}
					else{
					    printf("Ket qua: Sai\n");
					}
				}
				//thuc hien phep tinh cong giua 2 phan tu cua 2 mang da tao ben tren
				if(check==1){
					int ketqua;
					printf("Cau %d:%d-%d=",i+1,mang1[i],mang2[i]);
					scanf("%d", &ketqua);
					if(ketqua==mang1[i]-mang2[i]){
						printf("Ket qua: Dung\n");
						dem++;
					}
					else{
					    printf("Ket qua: Sai\n");
					}
				}
				//thuc hien phep tinh tru giua 2 phan tu cua 2 mang da tao ben tren
				if(check==2){
					int ketqua;
					printf("Cau %d:%d*%d=",i+1,mang1[i],mang2[i]);
					scanf("%d", &ketqua);
					if(ketqua==mang1[i]*mang2[i]){
						printf("Ket qua: Dung\n");
						dem++;
					}
					else{
					    printf("Ket qua: Sai\n");
					}
				}
				//thuc hien phep tinh nhan giua 2 phan tu cua 2 mang da tao ben tren
			}
			printf("So cau tra loi dung cua ban la: %d/25", dem);
			printf("\nChon [1] de quay ve menu, [2] de dang xuat :");
			fflush(stdin);
			scanf("%d", &g);
			if(g==1) {
			    Dangnhap(tendn,mk);
			}
			if(g==2) {
			    break;
			}
		}
		case 4: {
			int g;
			printf("Chuong trinh 1: Nhap vao 2 so nguyen va dua ra cac so Fibonacci trong khoang do.");
			printf("\nChuong trinh 2: Dua ra goi y va nguoi dung nhap den khi dung tu ngu.\n");
			printf("Chuong trinh 3: Dua ra phep tinh ngau nhien giua 2 so va yeu cau nguoi dung ");
			printf("\nnhap gia tri phep tinh, sau do thong bao ket qua cho nguoi dung.\n");
			printf("\nChon [1] de quay ve menu, [2] de dang xuat :");
			fflush(stdin);
			scanf("%d", &g);
			if(g==1) {
			    Dangnhap(tendn,mk);
			}
			if(g==2) {
			    break;
			}
		}
		case 5: {
			break;
		} 
	}
}	
int main(int argc, char *argv[]) {
	char name[20][20]={{"quanganh"},{"codientu"},{"khoahocC"}};
	char matkhau[20][20]={{"30122002"},{"20200031"},{"clbsrc"}};
	//khoi tao du lieu goc
	int n,k=3;
	Start: printf("Chao mung den voi chuong trinh cua toi:\n1.Dang nhap\n2.Dang ky\n3.Thoat");
	printf("\nChon mot de tiep tuc:");
	scanf("%d", &n);
	//chon chuong trinh de thuc hien
	switch(n) {
		case 1:{
			char tendn[20], mk[20];
			int check1=0, stt, i;
			printf("Moi ban nhap ten dang nhap:");
			scanf("%s", &tendn);
			for(i=0; i<20; i++) {		
				if(strcmp(tendn, name[i])==0) {
					stt=i;
					check1=1;
					break;
				}
			}
			//kiem tra xem ten dang nhap co ton tai khong
			if(check1==0) {
				printf("Ten dang nhap khong ton tai!");
			}
			if(check1==1) {
			    A: printf("Nhap mat khau:");
			    scanf("%s", &mk);
			    if(strcmp(mk, matkhau[stt])==0) {
				    printf("Xin chao %s", tendn);
				    Dangnhap(tendn,mk);
			    }
			    //kiem tra xem mat khau co dung khong va chuyen vao man hinh dang nhap
			    else {	
			        printf("Sai mat khau, vui long nhap lai.\n");
				    goto A;
			    }
			}
			goto Start;
			//quay lai man hinh dang nhap sau khi chon Dang xuat trong Menu
			break;
		}
		case 2:{
			char taotendn[20], taomk[20];
			int check2=0,j;
			printf("Moi ban tao ten dang nhap(Luu y ten dang nhap khong chua khoang trang)\n");
			B: printf("Ten dang nhap:");
			scanf("%s", &taotendn);
			for(j=0; j<=20; j++){
				if(strcmp(taotendn, name[j])==0){
					check2=0;
					break;
				}
				//kiemtra ten dang nhap vua tao co trung ten dang nhap co san khong
				else check2=1;
			}
			if(check2==0){
				printf("Ten dang nhap da ton tai, vui long chon lai!\n");
				goto B;
			}
			strcpy(name[k], taotendn);
			printf("Mat khau:");
			scanf("%s", &taomk);
			strcpy(matkhau[k],taomk);
			k++;
			goto Start;
			//quay tro lai man hinh dang nhap sau khi dang ky
			break;
	        }
	        case 3:{
	    	    printf("Hen gap lai ^^");
		        break;
		}
	}					
}
