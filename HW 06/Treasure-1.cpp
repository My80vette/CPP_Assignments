#include "Treasure.h"
#include "Weight.h"
#include "Volume.h"

Treasure::Treasure() {
    treasureWeight.setInPounds(0.0);
    treasureVolume.setInGallons(0.0);
}
void Treasure::setWeight(double pounds) {
    treasureWeight.setInPounds(pounds);

}

void Treasure::setVolume(double gallons) {
    treasureVolume.setInGallons(gallons);
}


bool Treasure::isPure(double density, double ONE_PERCENT) {
    double upperBound = (GOLD + (GOLD * ONE_PERCENT));
    double lowerBound = (GOLD - (GOLD * ONE_PERCENT));
    if (density >= lowerBound && density <= upperBound)
        return true;
    else
        return false;
}
