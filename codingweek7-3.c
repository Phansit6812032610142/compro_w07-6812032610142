#include <stdio.h>
int main()
{
    int level;                                 // ประกาศตัวแปร level เป็นจำนวนเต็ม  
    printf("Enter level (1-4): ");          // รับค่าระดับสมาชิก
    scanf("%d", &level);               // เก็บค่าที่รับมาในตัวแปร level   

    if (level <= 0) {                               // ถ้าระดับสมาชิกน้อยกว่าหรือเท่ากับ 0
    printf("The level below 1 is not allowed\n");   // แสดงผล The level below 1 is not allowed
}
    else if (level > 4) {                // ถ้าระดับสมาชิกมากกว่่า 4 
    printf("The level above 4 is not allowed\n");           // แสดงผล The level above 4 is not allowed
}
    else {
        switch (level)                          //  ถ้าระดับสมาชิกเท่ากับ 1,2,3,4
        {
        case 1: printf("Beginner\n"); break;        // ถ้าระดับสมาชิกเท่ากับ 1
        case 2: printf("Intermediate\n"); break;        // ถ้าระดับสมาชิกเท่ากับ 2
        case 3: printf("Advanced\n"); break;            // ถ้าระดับสมาชิกเท่ากับ 3
        case 4: printf("Expert\n"); break;          // ถ้าระดับสมาชิกเท่ากับ 4
    }
}
return 0;                                       
}
//โปรแกรมนี้รับเลขระดับสมาชิก (1-4)
//ถ้าน้อยกว่า 1 เเจ้ง "ไม่อนุญาต"
//ถ้ามากกว่า 4 แจ้ง "ไม่อนุญาต"
//ถ้าอยู่ใน 1-4 แสดงข้อความตามระดับ (1 =beginner ,2 =lntermediate ,3 =advanced ,4 =expert )