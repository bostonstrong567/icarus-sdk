// /Game/BP/AI/Bosses/BT/BTD_ArePawnsNearby.BTD_ArePawnsNearby_C
// Derives from: UBTDecorator_BlueprintBase > UBTDecorator > UBTAuxiliaryNode > UBTNode > UObject
// size 0xF0, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTD_ArePawnsNearby_C : public UBTDecorator_BlueprintBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float NearbyDistance;  // 0x00A0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool FilterByRelationship;  // 0x00A4, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ERelationshipType RelationshipFilter;  // 0x00A5, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector DebugKey;  // 0x00A8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 RequiredNumberNearby;  // 0x00D0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool AlivePawnsOnly;  // 0x00D4, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FStatsEnum NearbyDistanceStatOverride;  // 0x00D8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName CharacterLocationSourceBone;  // 0x00E8, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool PerformConditionCheckAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x11
};
