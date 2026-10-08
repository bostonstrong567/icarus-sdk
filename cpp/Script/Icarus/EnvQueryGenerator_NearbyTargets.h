// /Script/Icarus.EnvQueryGenerator_NearbyTargets
// Derives from: UEnvQueryGenerator > UEnvQueryNode > UObject
// size 0xB0, declared in Icarus/Source/Icarus/AI/EQS/EnvQueryGenerator_NearbyTargets.h

UCLASS(EditInlineNew)
class UEnvQueryGenerator_NearbyTargets : public UEnvQueryGenerator
{
public:
    UPROPERTY(EditAnywhere) TSubclassOf<UEnvQueryContext> TargetableContext;  // 0x0050, size 0x8
    UPROPERTY(EditAnywhere) TSubclassOf<AActor> TargetClassFilter;  // 0x0058, size 0x8
    UPROPERTY(EditAnywhere) bool bOnlyAliveActors;  // 0x0060, size 0x1
    UPROPERTY(EditAnywhere) bool bFilterByRelationship;  // 0x0061, size 0x1
    UPROPERTY(EditAnywhere) ERelationshipType RelationshipToQuerier;  // 0x0062, size 0x1
    UPROPERTY(EditAnywhere) FAIDataProviderFloatValue NearbyRadius;  // 0x0068, size 0x38
    UPROPERTY(EditAnywhere) bool bIgnoreZHeight;  // 0x00A0, size 0x1
    UPROPERTY(EditAnywhere) TSubclassOf<UEnvQueryContext> SearchCenter;  // 0x00A8, size 0x8
};
