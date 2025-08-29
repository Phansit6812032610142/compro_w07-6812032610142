#include <stdio.h>
int main() {
    int Level ;                                                              // ประกาศตัวแปร Level เป็นจำนวนเต็ม
    printf("Enter membership level(1-4): ");                                 // รับค่าระดับสมาชิก
    scanf("%d", &Level);                                                    // เก็บค่าที่รับมาในตัวแปร Level       
    switch (Level) {
        case 1:                                                             // ถ้าระดับสมาชิกเท่ากับ 1
            printf("Silver Member :You get 5%% discount\n");                // แสดงผล Silver Member :You get 5% discount 
            break;                                                           // ออกจากเงื่อนไข                            
        case 2:                                                             // ถ้าระดับสมาชิกเท่ากับ 2
            printf("Gold Member :You get 10%% discount+Reward points\n");   // แสดงผล Gold Member :You get 10% discount+Reward points 
            break;                                                          // ออกจากเงื่อนไข 
        case 3:                                                             // ถ้าระดับสมาชิกเท่ากับ 3
            printf("Platinum Member :You get 15%% discount + Reward points + Birthday gift\n"); // แสดงผล Platinum Member :You get 15% discount + Reward points + Birthday gift
            break;                                                           // ออกจากเงื่อนไข
        case 4:                                                              // ถ้าระดับสมาชิกเท่ากับ 4
            printf("Diamond Member : You get all prerogative + VIP events\n");// แสดงผล Diamond Member : You get all prerogative + VIP events
            break;                                                          // ออกจากเงื่อนไข                                               
        default:                                                            // ถ้าระดับสมาชิกไม่เท่ากับ 1,2,3,4  หรือค่าอื่นๆ             
         printf("Invalid membership level\n");                              // แสดงผล Invalid membership level
    }

    return 0;
}
/*ทำไมถึงใช้ swith-case
ภาพที่คุณส่งมาเป็นโค้ดโปรแกรมภาษา C ที่ใช้คำสั่ง if-else if และ switch-case เพื่อตรวจสอบระดับสมาชิก จากการวิเคราะห์โค้ด สามารถอภิปรายผลการทำงานได้ดังนี้ครับ
การทำงานของโค้ด
โปรแกรมนี้เริ่มต้นด้วยการรับค่าระดับสมาชิก (level) จากผู้ใช้ และทำการตรวจสอบเงื่อนไขตามลำดับ:
* การตรวจสอบช่วงค่าด้วย if-else if:
* บรรทัดที่ 8: if (level < 0): ถ้าค่าที่ผู้ใช้ป้อนน้อยกว่า 0 โปรแกรมจะแสดงข้อความ "The level below 1 is not allowed" และจบการทำงาน
* บรรทัดที่ 11: else if (level > 4): ถ้าเงื่อนไขแรกเป็นเท็จ และค่าที่ผู้ใช้ป้อนมากกว่า 4 โปรแกรมจะแสดงข้อความ "The level above 4 is not allowed" และจบการทำงาน
* การตรวจสอบระดับที่ถูกต้องด้วย switch-case:
* บรรทัดที่ 14: else: ถ้าค่า level อยู่ในช่วง 0 ถึง 4 (ซึ่งเป็นช่วงที่ผ่านการตรวจสอบจาก if-else if ด้านบน) โปรแกรมจะเข้าสู่บล็อก else และทำงานในคำสั่ง switch
* switch (level): โปรแกรมจะตรวจสอบค่าของ level และตรงกับ case ใดก็จะแสดงผลตามที่กำหนด
* case 1: แสดง "Beginner"
* case 2: แสดง "Intermediate"
* case 3: แสดง "Advanced"
* case 4: แสดง "Expert"
* ข้อควรระวัง: โค้ดนี้ไม่มีคำสั่ง default ใน switch ซึ่งหมายความว่าถ้าผู้ใช้ป้อนค่า level ที่ผ่านการตรวจสอบช่วงค่าแล้ว แต่ไม่ตรงกับ case ใด ๆ (เช่น level = 0) โปรแกรมจะไม่มีการแสดงผลใด ๆ
อภิปรายผลลัพธ์จากการป้อนค่าต่างๆ
* ป้อนค่าติดลบ เช่น -5: โปรแกรมจะเข้าเงื่อนไข if (level < 0) และแสดงผล "The level below 1 is not allowed"
* ป้อนค่าที่มากกว่า 4 เช่น 7: โปรแกรมจะเข้าเงื่อนไข else if (level > 4) และแสดงผล "The level above 4 is not allowed"
* ป้อนค่าที่ตรงกับ case เช่น 1, 2, 3, 4:
* level = 1 จะแสดงผล "Beginner"
* level = 2 จะแสดงผล "Intermediate"
* level = 3 จะแสดงผล "Advanced"
* level = 4 จะแสดงผล "Expert"
* ป้อนค่า 0: โปรแกรมจะผ่านเงื่อนไข if-else if และเข้าสู่ switch แต่เนื่องจากไม่มี case 0 และไม่มี default ทำให้โปรแกรม ไม่มีการแสดงผลใด ๆ
ข้อสรุป
โค้ดนี้ถูกออกแบบมาอย่างถูกต้องตามหลักการ โดยใช้ if-else if สำหรับการคัดกรองเงื่อนไขที่ไม่ถูกต้อง (ค่าที่อยู่นอกช่วง 1-4) ก่อน และใช้ switch-case สำหรับการจัดการเงื่อนไขที่ถูกต้องอย่างเป็นระบบและอ่านง่าย อย่างไรก็ตาม จุดที่ต้องปรับปรุงคือการเพิ่ม default ใน switch เพื่อรองรับค่าที่อยู่ระหว่าง 0 ถึง 4 (ในกรณีนี้คือ 0) ซึ่งจะทำให้โปรแกรมสมบูรณ์ยิ่งขึ้นครับ
*/