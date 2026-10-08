// /Script/AIModule.EnvQueryGenerator
// Derives from: UEnvQueryNode > UObject
// size 0x50, declared in Engine/Source/Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryGenerator.h

UCLASS(Abstract, EditInlineNew)
class UEnvQueryGenerator : public UEnvQueryNode
{
public:
    UPROPERTY(EditAnywhere) FString OptionName;  // 0x0030, size 0x10
    UPROPERTY() TSubclassOf<UEnvQueryItemType> ItemType;  // 0x0040, size 0x8
    UPROPERTY(EditAnywhere) uint8 bAutoSortTests : 1;  // 0x0048, mask 0x01

    // Virtual functions that start here:
    //   GenerateItems, IsValidGenerator
};
