#include <iostream>
#include "cake.h"

int main(void)
{
    Cake *cake = new SpicyCake();

    /* 辣的煎饼果子加两个鸡蛋 */
    cake = new EggCake(cake);
    cake = new EggCake(cake);
    /* 输出价格和描述 */
    std::cout << "口味：" << cake->get_description() << std::endl;
    std::cout << "价格：" << cake->get_price() << std::endl;

    cake = new NoSpicyCake();
    /* 不辣的煎饼果子加肠加鸡蛋 */
    cake = new HotdogCake(cake);
    cake = new EggCake(cake);
    std::cout << std::endl;
    std::cout << "口味：" << cake->get_description() << std::endl;
    std::cout << "价格：" << cake->get_price() << std::endl;

    return 0;
}
