// /Game/BP/AI/GOAP/Misc/BP_SquadManager.BP_SquadManager_C
// Derives from: AActor > UObject
// size 0x269, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SquadManager_C : public AActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0220, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0228, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* SquadLeader;  // 0x0230, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AActor*> SquadFollowers;  // 0x0238, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AAITargetNode_C*> TargetNodes;  // 0x0248, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 FollowDistance;  // 0x0258, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 FlankingAngle;  // 0x025C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* SquadTargetActor;  // 0x0260, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShouldSynchronisePerception;  // 0x0268, size 0x1

    UFUNCTION() void ExecuteUbergraph_BP_SquadManager(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetTargetLocationForFollower(int32 FollowerIndex, FVector& TargetLocation);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnFollowerEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x9
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void RequestFollowTarget(AActor* Follower, AActor*& TargetNode);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SynchroniseStimuli();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
