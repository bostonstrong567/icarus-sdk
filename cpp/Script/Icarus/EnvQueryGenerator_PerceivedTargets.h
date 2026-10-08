// /Script/Icarus.EnvQueryGenerator_PerceivedTargets
// Derives from: UEnvQueryGenerator > UEnvQueryNode > UObject
// size 0x70, declared in Icarus/Source/Icarus/AI/EQS/EnvQueryGenerator_PerceivedTargets.h

UCLASS(EditInlineNew)
class UEnvQueryGenerator_PerceivedTargets : public UEnvQueryGenerator
{
public:
    UPROPERTY(EditAnywhere) TSubclassOf<UEnvQueryContext> Context;  // 0x0050, size 0x8
    UPROPERTY(EditAnywhere) TSubclassOf<UAISense> SenseToUse;  // 0x0058, size 0x8
    UPROPERTY(EditAnywhere) bool bOnlyAliveActors;  // 0x0060, size 0x1
    UPROPERTY(EditAnywhere) bool bFilterByRelationship;  // 0x0061, size 0x1
    UPROPERTY(EditAnywhere) ERelationshipType RelationshipToQuerier;  // 0x0062, size 0x1
    UPROPERTY(EditAnywhere) TSubclassOf<UEnvQueryContext> SearchCenter;  // 0x0068, size 0x8
};
