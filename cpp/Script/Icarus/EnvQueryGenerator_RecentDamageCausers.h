// /Script/Icarus.EnvQueryGenerator_RecentDamageCausers
// Derives from: UEnvQueryGenerator > UEnvQueryNode > UObject
// size 0xF8, declared in Icarus/Source/Icarus/AI/EQS/EnvQueryGenerator_RecentDamageCausers.h

UCLASS(EditInlineNew)
class UEnvQueryGenerator_RecentDamageCausers : public UEnvQueryGenerator
{
public:
    UPROPERTY(EditAnywhere) TSubclassOf<UEnvQueryContext> DamagedActorContext;  // 0x0050, size 0x8
    UPROPERTY(EditAnywhere) FAIDataProviderFloatValue RecentDuration;  // 0x0058, size 0x38
    UPROPERTY(EditAnywhere) TSubclassOf<AActor> TargetClassFilter;  // 0x0090, size 0x8
    UPROPERTY(EditAnywhere) bool bOnlyAliveActors;  // 0x0098, size 0x1
    UPROPERTY(EditAnywhere) bool bFilterNearbyActors;  // 0x0099, size 0x1
    UPROPERTY(EditAnywhere) FAIDataProviderFloatValue NearbyRadius;  // 0x00A0, size 0x38
    UPROPERTY(EditAnywhere) TSubclassOf<UEnvQueryContext> NearbyRadiusCenter;  // 0x00D8, size 0x8
    UPROPERTY(EditAnywhere) bool bFilterByRelationship;  // 0x00E0, size 0x1
    UPROPERTY(EditAnywhere) TArray<ERelationshipType> RelationshipFilters;  // 0x00E8, size 0x10
};
