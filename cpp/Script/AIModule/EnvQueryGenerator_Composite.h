// /Script/AIModule.EnvQueryGenerator_Composite
// Derives from: UEnvQueryGenerator > UEnvQueryNode > UObject
// size 0x70, declared in Engine/Source/Runtime/AIModule/Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Composite.h

UCLASS(EditInlineNew)
class UEnvQueryGenerator_Composite : public UEnvQueryGenerator
{
public:
    UPROPERTY(EditAnywhere) TArray<UEnvQueryGenerator*> Generators;  // 0x0050, size 0x10
    UPROPERTY(EditAnywhere) uint8 bAllowDifferentItemTypes : 1;  // 0x0060, mask 0x01
    UPROPERTY() uint8 bHasMatchingItemType : 1;  // 0x0060, mask 0x02
    UPROPERTY(EditAnywhere) TSubclassOf<UEnvQueryItemType> ForcedItemType;  // 0x0068, size 0x8
};
