// /Game/BP/Behaviours/Actionable/BP_ActionableBehaviour_Transform_Tool.BP_ActionableBehaviour_Transform_Tool_C
// Derives from: UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x339, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_ActionableBehaviour_Transform_Tool_C : public UBP_ActionableBehaviour_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0310, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_IcarusPlayerCharacterSurvival_C* OwningPlayer;  // 0x0318, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* OwningActor;  // 0x0320, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_InspectionToolSpawner_C* HeldActor;  // 0x0328, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* TraceHitActor;  // 0x0330, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EComponentMobility> PreviousMobility;  // 0x0338, size 0x1

    UFUNCTION(BlueprintCallable) void DestroyAllSpawns();
    UFUNCTION() void ExecuteUbergraph_BP_ActionableBehaviour_Transform_Tool(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void Multi_UpdateActorTransform(AActor* Target, const FTransform& NewTransform);  // parameters 0x40
    UFUNCTION(BlueprintImplementableEvent) void PerformAction(AActor* InvokingActor, EActionableEventType OnActionType, EActionableTrigger ActionTrigger);  // parameters 0xA
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable, Server, Reliable) void RequestDynamicWidget(AIcarusPlayerControllerSurvival* Target, AActor* LinkedActor);  // parameters 0x10
    UFUNCTION(BlueprintCallable, Server, Reliable) void Server_UpdateActorTransform(AActor* TraceHitActor, FTransform NewTransform);  // parameters 0x40
    UFUNCTION(BlueprintCallable) void Setup(AActor* OwningActor);  // parameters 0x8
};
