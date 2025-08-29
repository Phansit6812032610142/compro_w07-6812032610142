#include <stdio.h>              

int main() {                           // ฟังก์ชันหลักของโปรแกรม
    int age;                                     // ประกาศตัวแปร age เพื่อเก็บอายุ (ชนิดจำนวนเต็ม)
    int VIP_level;                               // ประกาศตัวแปร VIP_level เพื่อเก็บระดับสมาชิก VIP (ชนิดจำนวนเต็ม)
    float purchase_amount;                       // ประกาศตัวแปร purchase_amount เพื่อเก็บยอดซื้อสินค้า (ชนิดทศนิยม)

    printf("Enter age: ");                             // แสดงข้อความให้ผู้ใช้ป้อนอายุ
    scanf("%d", &age);                                  // รับค่าอายุจากผู้ใช้
    printf("Enter your VIP level (1-5): ");             // แสดงข้อความให้ผู้ใช้ป้อนระดับ VIP (1-5)
    scanf("%d", &VIP_level);                            // รับค่าระดับ VIP จากผู้ใช้
    printf("Enter your purchase amount: \n");           // แสดงข้อความให้ผู้ใช้ป้อนยอดซื้อ
    scanf("%f", &purchase_amount);                      // รับค่ายอดซื้อจากผู้ใช้

    printf("--- Customer Info ---\n");                                          // แสดงหัวข้อข้อมูลลูกค้า
    printf("Age: %d | VIP level: %d | Amount: %.2f\n", age, VIP_level, purchase_amount);  // แสดงข้อมูลลูกค้า: อายุ ระดับ VIP และยอดซื้อ

    // ตรวจสอบส่วนลดตามเงื่อนไขอายุ ระดับ VIP และยอดซื้อ

    if ((age >= 60) || ((VIP_level == 3) || (VIP_level == 4))) {                     // ถ้าอายุมากกว่าหรือเท่ากับ 60 หรือระดับ VIP เท่ากับ 3 หรือ 4
        printf("Discount received: 20%%!\n");                                         // แสดงข้อความว่าได้รับส่วนลด 20%
    } 
    else if (((age >= 30) && (age <= 40)) && (purchase_amount > 2000)) {             // ถ้าอายุระหว่าง 30 ถึง 40 และยอดซื้อมากกว่า 2000
        printf("Discount received: 15%%!\n");                                         // แสดงข้อความว่าได้รับส่วนลด 15%
    } 
    else if (((age >= 18) && (age <= 25)) && (purchase_amount > 1000)) {             // ถ้าอายุระหว่าง 18 ถึง 25 และยอดซื้อมากกว่า 1000
        printf("Discount received: 10%%!\n");                                         // แสดงข้อความว่าได้รับส่วนลด 10%
    } 
    else if ((VIP_level == 5) || (purchase_amount > 50000)) {                        // ถ้าระดับ VIP เท่ากับ 5 หรือยอดซื้อมากกว่า 50000
        printf("Discount received: 25%%!\n");                                         // แสดงข้อความว่าได้รับส่วนลด 25%
    } 
    else {                                                                            // หากไม่เข้าเงื่อนไขใด ๆ เลย
        printf("No Discount applied.\n");                                             // แสดงข้อความว่าไม่ได้รับส่วนลด
    } 

    printf("Thank you for shopping with us!\n");                                     // แสดงข้อความขอบคุณที่ใช้บริการ
    return 0;                                                                         // ส่งค่ากลับ 0 เพื่อแสดงว่าโปรแกรมทำงานเสร็จสมบูรณ์
}