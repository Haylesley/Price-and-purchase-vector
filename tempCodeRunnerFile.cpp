#include <iostream>
#include <vector>

int main() {
    std::vector<float> prices {2.5, 4.25, 3.0, 10.0};
    
    std::vector<int> items {1, 1, 0, 3};

    float totalCost = 0.0;

    // Вычисляем суммарную стоимость покупок
    for (int index : items) {
        if (index >= 0 && index < prices.size()) { // Проверка на корректность индекса
            totalCost += prices[index];
        } else {
            std::cout << "Error: Item index " << index << " is out of range!" << std::endl;
        }
    }

    std::cout << "Total cost of purchases: " << totalCost << std::endl;

    return 0;
}
