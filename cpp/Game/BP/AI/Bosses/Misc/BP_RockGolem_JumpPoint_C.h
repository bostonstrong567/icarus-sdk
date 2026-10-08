// /Game/BP/AI/Bosses/Misc/BP_RockGolem_JumpPoint.BP_RockGolem_JumpPoint_C
// Derives from: AActor > UObject
// size 0x248, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_RockGolem_JumpPoint_C : public AActor
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* StartPoints;  // 0x0220, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBillboardComponent* Billboard;  // 0x0228, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0230, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FVector> RelativeStartLocations;  // 0x0238, size 0x10

    UFUNCTION(BlueprintCallable) void AddJumpStartPoint();
    UFUNCTION(BlueprintCallable) void GetStartLocationsInWorldSpace(bool Shuffle, TArray<FVector>& Locations) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable) void ProjectJumpPointsToNavigation();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
