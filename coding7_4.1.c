#include <stdio.h>
int main() {
    int Level;                                                               // ประกาศตัวแปร Level เป็นประเภทจำนวนเต็ม
    printf("Enter membership level(1-4): ");                                 // แสดงข้อความให้ผู้ใช้ป้อนระดับสมาชิก
    scanf("%d", &Level);                                                     // รับค่าระดับสมาชิกจากผู้ใช้และเก็บไว้ในตัวแปร Level

    if (Level == 1) {                                                        // ถ้าระดับสมาชิกเท่ากับ 1
        printf("Silver Member :You get 5%% discount\n");                     // แสดงข้อความว่าเป็นสมาชิกระดับ Silver ได้รับส่วนลด 5%

    } else if (Level == 2) {                                                 // ถ้าระดับสมาชิกเท่ากับ 2
        printf("Gold Member :You get 10%% discount+Reward points\n");       // แสดงข้อความว่าเป็นสมาชิกระดับ Gold ได้รับส่วนลด 10% และคะแนนสะสม

    } else if (Level == 3) {                                                 // ถ้าระดับสมาชิกเท่ากับ 3
        printf("Platinum Member :You get 15%% discount + Reward points + Birthday gift\n"); // แสดงข้อความว่าเป็นสมาชิกระดับ Platinum ได้รับส่วนลด 15%, คะแนนสะสม และของขวัญวันเกิด

    } else if (Level == 4) {                                                 // ถ้าระดับสมาชิกเท่ากับ 4
        printf("Diamond Member : You get all prerogative + VIP events\n");  // แสดงข้อความว่าเป็นสมาชิกระดับ Diamond ได้รับสิทธิพิเศษทั้งหมดและร่วมงาน VIP

    } else {                                                                 // ถ้าค่าระดับสมาชิกไม่อยู่ในช่วง 1-4
        printf("Invalid membership level\n");                                // แสดงข้อความว่าใส่ระดับสมาชิกไม่ถูกต้อง

    }
    return 0;                                                                // จบการทำงานของโปรแกรมและคืนค่า 0
}
//โปรแกรมรับระดับสมาชิก (1-4) แล้วแสดงสิทธิพิเศษ
// 1 silver:ส่วนลด 5%
// 2 gold:ส่วนลด 10% + คะแนนสะสม
// 3 platinum:ส่วนลด 15% + คะแนนสะสม + ของขวัญวันเกิด
// 4 diamond:สิทธิพิเศษทั้งหมด + งาน vip ถ้าไม่ใช่ 1-4 แจ้งว่าไม่ถูกต้อง