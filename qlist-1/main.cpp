#include <iostream>
#include <QList>

int main() {
    QList<int> list;
    list.append(1);
    list.append(2);
    list.append(3);

    for (int i = 0; i < list.size(); i++) {
        std::cout << list.at(i) << std::endl;
    }

    return 0;
}
