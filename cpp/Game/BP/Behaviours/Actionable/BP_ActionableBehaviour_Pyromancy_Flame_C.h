// /Game/BP/Behaviours/Actionable/BP_ActionableBehaviour_Pyromancy_Flame.BP_ActionableBehaviour_Pyromancy_Flame_C
// Derives from: UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x3DB, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_ActionableBehaviour_Pyromancy_Flame_C : public UBP_ActionableBehaviour_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0310, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_IcarusPlayerCharacterSurvival_C* OwningPlayer;  // 0x0318, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* OwningActor;  // 0x0320, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_InspectionToolSpawner_C* HeldActor;  // 0x0328, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UObject*> StoredMontages;  // 0x0330, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsChanneling;  // 0x0340, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FHitResult FlammableHit;  // 0x0344, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFlammableInstance* FlammableInstance;  // 0x03D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DebugInstance;  // 0x03D8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ChannelIgnite;  // 0x03D9, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CastIgnite;  // 0x03DA, size 0x1

    UFUNCTION() void ExecuteUbergraph_BP_ActionableBehaviour_Pyromancy_Flame(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnLoaded_2B8B2B624CE5F97DAE6892B7A4207761(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void PerformAction(AActor* InvokingActor, EActionableEventType OnActionType, EActionableTrigger ActionTrigger);  // parameters 0xA
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Setup(AActor* OwningActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void TryExtinguish();
    UFUNCTION(BlueprintCallable) void TryIgnite();
};
