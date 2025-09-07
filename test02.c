//การใช้ standard / built-in function ใน C ต้องรู้ว่าอยู่ใน library file (.h) อะไร ต้อง #include
//printf แสดงค่า ("???")
//scanf รับค่า ("???",&???)
//'?' ใน C คืออักษรตัวเดียว (ซิงเกิ้ลโขด)
//"??????" ใน C คือข้อความ (ตัวอักษรตั้งแต่ 0 ตัว ขึ้นไป ไม่มีก็ได้) (string/text)

int main (){

    printf("AAAAAAA\n");
    printf("%sBBBBBB%d", "CCCCCCC", 100); //integer (int)
    printf("XYZ %f ^_^ %1f" , 150.45,158.45687987) ; //float , double
    printf("รักนะ");
    printf("ABCD %c %s",'K', "") ;

    return 0;
}