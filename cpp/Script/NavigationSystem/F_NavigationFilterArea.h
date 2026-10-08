// /Script/NavigationSystem.NavigationFilterArea
// size 0x18, declared in Engine/Source/Runtime/NavigationSystem/Public/NavFilters/NavigationQueryFilter.h

USTRUCT()
struct FNavigationFilterArea
{
    UPROPERTY(EditAnywhere) TSubclassOf<UNavArea> AreaClass;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) float TravelCostOverride;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere) float EnteringCostOverride;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere) uint8 bIsExcluded : 1;  // 0x0010, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bOverrideTravelCost : 1;  // 0x0010, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bOverrideEnteringCost : 1;  // 0x0010, mask 0x04
};
