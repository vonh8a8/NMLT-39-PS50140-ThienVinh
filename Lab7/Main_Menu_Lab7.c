#include <stdio.h>
#include <string.h>
#include <ctype.h>
void demNguyenAmPhuAm();
void kiemTraDangNhap();
void sapXepChuoi();
int main()
{
    int chon;
    do
    {
        printf("+---------------------------------------------------+\n");
        printf("|             MENU CHUONG TRINH LAB 7               |\n");
        printf("+---------------------------------------------------+\n");
        printf("| 1. Dem Nguyen am va Phu am trong chuoi            |\n");
        printf("| 2. Dang nhap he thong (User & Password)           |\n");
        printf("| 3. Sap xep chuoi theo thu tu Alphabet             |\n");
        printf("| 4. Chuyen doi so Thap phan sang Nhi phan (Chuoi)  |\n");
        printf("| 5. Thoat chuong trinh                             |\n");
        printf("+---------------------------------------------------+\n");
        printf(">> Xin moi chon chuc nang (1-5): ");
        scanf("%d", &chon);
        getchar(); // Đọc ký tự newline còn lại trong bộ đệm sau khi nhập số
        switch (chon)
        {
        case 1:
            printf("Ban chon chuc nang 1: Dem Nguyen am va Phu am trong chuoi\n");
            demNguyenAmPhuAm();
            break;
        case 2:
            printf("Ban chon chuc nang 2: Dang nhap he thong (User & Password)\n");
            kiemTraDangNhap();
            break;
        case 3:
            printf("Ban chon chuc nang 3: Sap xep chuoi theo thu tu Alphabet\n");
            sapXepChuoi();
            break;
        case 4:
            printf("Ban chon chuc nang 4: Chuyen doi so Thap phan sang Nhi phan (Chuoi)\n");
            break;
        case 5:
            printf("Ban chon chuc nang 5: Thoat chuong trinh\n");
            break;
        default:
            printf("Ban phai chon chuc nang 1 - 5!\n");
            break;
        }
    } while (chon != 5);
    return 0;
}
void demNguyenAmPhuAm()
{
    char chuoi[100];
    int demNguyenAm = 0, demPhuAm = 0;
    printf("Nhap vao mot chuoi: ");
    fgets(chuoi, sizeof(chuoi), stdin);
    for (int i = 0; chuoi[i] != '\0'; i++)
    {
        char c = tolower(chuoi[i]); // Chuyển ký tự sang chữ thường để so sánh
        if (isalpha(c))
        {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            {
                demNguyenAm++;
            }
            else
            {
                demPhuAm++;
            }
        }
    }
    printf("\nSo luong nguyen am trong chuoi la: %d\n", demNguyenAm);
    printf("\nSo luong phu am trong chuoi la: %d\n", demPhuAm);
}
void kiemTraDangNhap()
{
    char username[50];
    char password[50];
    char userSys[] = "admin"; // gia tri cua admin trong ascii = 97 100 32 109 105 110
    char passSys[] = "123456";
    printf("Nhap username: ");
    scanf("%s", username);
    printf("Nhap password: ");
    scanf("%s", password);
    // Kiểm tra thông tin đăng nhập (ví dụ: username = "admin", password = "123456")
    if (strcmp(username, userSys) == 0 && strcmp(password, passSys) == 0)
    {
        printf("Dang nhap thanh cong!\n");
    }
    else
    {
        printf("Dang nhap that bai! Sai username hoac password.\n");
    }
}

void sapXepChuoi()
{
    char s[5][50];
    printf("Nhap vao 5 chuoi:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Chuoi %d: ", i + 1);
        fgets(s[i], sizeof(s[i]), stdin);
        s[i][strcspn(s[i], "\n")] = '\0'; // Loại bỏ ký tự newline
        // s[i][j];
    }
    // Sắp xếp chuỗi theo thứ tự bảng chữ cái
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (strcmp(s[i], s[j]) > 0)
            {
                char temp[50];
                strcpy(temp, s[i]);
                strcpy(s[i], s[j]);
                strcpy(s[j], temp);
            }
        }
    }
    printf("Cac chuoi sau khi sap xep:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%s\n", s[i]);
    }
}
