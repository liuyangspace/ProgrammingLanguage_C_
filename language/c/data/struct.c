/*
struct
结构体: 多种类型组合形成的变量
定义:
    struct structName {
        int x;
        int y;
    };
声明:
    struct structName a,b;  //
    struct { ... } a,b;     // 定义并声明
    struct structName *p;   // 结构体指针
初始化:
    struct structName a = {1,2};
    struct structName *p = &a;
使用:
    a.x;             // 结构体.成员
    (*p).x;          // . 运算 优先于 * 运算
    p->x;            // -> 可用于机构指针取成员
位字段:
    struct {
        unsigned int is_keyword : 1;    // 冒号后的子符表示字段宽度（二进制表示）
        unsigned int is_extern  : 1;
        unsigned int is_static  : 1;
    } flags;

*/

struct point {
    int x;
    int y;
};