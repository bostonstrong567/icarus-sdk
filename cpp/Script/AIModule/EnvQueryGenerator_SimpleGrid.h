// /Script/AIModule.EnvQueryGenerator_SimpleGrid
// Derives from: UEnvQueryGenerator_ProjectedPoints > UEnvQueryGenerator > UEnvQueryNode > UObject
// size 0xF8, declared in Engine/Source/Runtime/AIModule/Classes/EnvironmentQuery/Generators/EnvQueryGenerator_SimpleGrid.h

UCLASS(EditInlineNew)
class UEnvQueryGenerator_SimpleGrid : public UEnvQueryGenerator_ProjectedPoints
{
public:
    UPROPERTY(EditAnywhere) FAIDataProviderFloatValue GridSize;  // 0x0080, size 0x38
    UPROPERTY(EditAnywhere) FAIDataProviderFloatValue SpaceBetween;  // 0x00B8, size 0x38
    UPROPERTY(EditAnywhere) TSubclassOf<UEnvQueryContext> GenerateAround;  // 0x00F0, size 0x8
};
