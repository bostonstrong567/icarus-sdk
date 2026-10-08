// /Script/AIModule.EnvQueryGenerator_PathingGrid
// Derives from: UEnvQueryGenerator_SimpleGrid > UEnvQueryGenerator_ProjectedPoints > UEnvQueryGenerator > UEnvQueryNode > UObject
// size 0x170, declared in Engine/Source/Runtime/AIModule/Classes/EnvironmentQuery/Generators/EnvQueryGenerator_PathingGrid.h

UCLASS(EditInlineNew)
class UEnvQueryGenerator_PathingGrid : public UEnvQueryGenerator_SimpleGrid
{
public:
    UPROPERTY(EditAnywhere) FAIDataProviderBoolValue PathToItem;  // 0x00F8, size 0x38
    UPROPERTY(EditAnywhere) TSubclassOf<UNavigationQueryFilter> NavigationFilter;  // 0x0130, size 0x8
    UPROPERTY(EditAnywhere) FAIDataProviderFloatValue ScanRangeMultiplier;  // 0x0138, size 0x38
};
