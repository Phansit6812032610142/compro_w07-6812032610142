#include <stdio.h>
int main() {
    float  x , y;                                           // ประกาศตัวแปร x และ y เป็นจำนวนทศนิยม
    printf("Enter two numbers(Ex : 1 3): ");                 // รับค่าตัวเลข 2 ตัว
    scanf(" %.2f %.2f", &x , &y);                            // เก็บค่าที่รับมาในตัวแปร x และ y  
    if (x > y)                                              // เปรียบเทียบค่าของ x และ y    
    {
        printf("X is greater than Y\n");                    // ถ้า x มากกว่า y ให้แสดงผล X is greater than Y
    } else if (x < y)                                       // เปรับเทียบค่าของ x และ y
    {
        printf("X is less than Y\n");                       // ถ้า x เท่ากับ y ให้แสดงผล X is less to Y
    } else                                                  // เปรียบเทียบค่าของ x และ y ถ้าไม่เข้าเงื่อนไขข้างบน
    {
        printf("X is equal to Y\n");                         // ให้แสดงผล X is equal to Y    x=y
    }

}
//โปรเเกรมนี้รับตัวเลขทศนิยม 2 ตัว (x,y) แล้ว เปรียบเทียบว่า
//ถ้า x > y เเสดง "x is greater than y"
//ถ้า x < y เเสดง "x is less than y"
//ถ้า x = y เเสดง "x is equal to y"