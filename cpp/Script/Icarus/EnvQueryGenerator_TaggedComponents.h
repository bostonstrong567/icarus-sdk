// /Script/Icarus.EnvQueryGenerator_TaggedComponents
// Derives from: UEnvQueryGenerator > UEnvQueryNode > UObject
// size 0xE8, declared in Icarus/Source/Icarus/AI/EQS/EnvQueryGenerator_TaggedComponents.h

UCLASS(EditInlineNew)
class UEnvQueryGenerator_TaggedComponents : public UEnvQueryGenerator
{
public:
    UPROPERTY(EditAnywhere) TSubclassOf<AActor> SearchedActorClass;  // 0x0050, size 0x8
    UPROPERTY(EditAnywhere) TArray<FName> TagsToMatch;  // 0x0058, size 0x10
    UPROPERTY(EditAnywhere) bool bMatchActorTags;  // 0x0068, size 0x1
    UPROPERTY(EditAnywhere) bool bMatchComponentTags;  // 0x0069, size 0x1
    UPROPERTY(EditAnywhere) FAIDataProviderBoolValue GenerateOnlyActorsInRadius;  // 0x0070, size 0x38
    UPROPERTY(EditAnywhere) FAIDataProviderFloatValue SearchRadius;  // 0x00A8, size 0x38
    UPROPERTY(EditAnywhere) TSubclassOf<UEnvQueryContext> SearchCenter;  // 0x00E0, size 0x8
};
