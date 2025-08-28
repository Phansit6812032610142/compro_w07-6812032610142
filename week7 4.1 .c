#include <stdio.h>
int main() {
    int Level ;                                                              // ประกาศตัวแปร Level เป็นจำนวนเต็ม
    printf("Enter membership level(1-4): ");                                 // รับค่าระดับสมาชิก
    scanf("%d", &Level);                                                    // เก็บค่าที่รับมาในตัวแปร Level
    if (Level == 1) {                                                        // ถ้าระดับสมาชิกเท่ากับ 1
        printf("Silver Member :You get 5%% discount\n");                    // แสดงผล Silver Member :You get 5% discount

    } else if (Level == 2) {                                                 // ถ้าระดับสมาชิกเท่ากับ 2
        printf("Gold Member :You get 10%% discount+Reward points\n");       // แสดงผล Gold Member :You get 10% discount+Reward points

    } else if (Level == 3) {                                                 // ถ้าระดับสมาชิกเท่ากับ 3
        printf("Platinum Member :You get 15%% discount + Reward points + Birthday gift\n"); // แสดงผล Platinum Member :You get 15% discount + Reward points + Birthday gift

    } else if (Level == 4) {                                                 // ถ้าระดับสมาชิกเท่ากับ 4
        printf("Diamond Member : You get all prerogative + VIP events\n");   // แสดงผล Diamond Member : You get all prerogative + VIP events

    } else {                                                                // ถ้าระดับสมาชิกไม่เท่ากับ 1,2,3,4  หรือค่าอื่นๆ
        printf("Invalid membership level\n");                               // แสดงผล Invalid membership level

    }
    return 0;
    
}
//โปรแกรมรับระดับสมาชิก (1-4) แล้วแสดงสิทธิพิเศษ
// 1 silver:ส่วนลด 5%
// 2 gold:ส่วนลด 10% + คะแนนสะสม
// 3 platinum:ส่วนลด 15% + คะแนนสะสม + ของขวัญวันเกิด
// 4 diamond:สิทธิพิเศษทั้งหมด + งาน vip ถ้าไม่ใช่ 1-4 แจ้งว่าไม่ถูกต้อง