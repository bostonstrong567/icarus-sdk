// /Game/BP/Behaviours/Actionable/BP_ActionableBehaviour_Flying_Hammer.BP_ActionableBehaviour_Flying_Hammer_C
// Derives from: UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x338, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_ActionableBehaviour_Flying_Hammer_C : public UBP_ActionableBehaviour_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0310, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_IcarusPlayerCharacterSurvival_C* OwningPlayer;  // 0x0318, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ShootTime;  // 0x0320, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool Swinging;  // 0x0324, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SwingPower;  // 0x0328, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Power;  // 0x032C, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool Flying;  // 0x0330, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool FlyingForward;  // 0x0331, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Hovering;  // 0x0332, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 FallDamageModifierUID;  // 0x0334, size 0x4

    UFUNCTION(BlueprintCallable) void AppyModifierToArmour(bool On);  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BP_ActionableBehaviour_Flying_Hammer(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void PerformAction(AActor* InvokingActor, EActionableEventType OnActionType, EActionableTrigger ActionTrigger);  // parameters 0xA
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable, Server, Reliable) void Server_StartLightning();
    UFUNCTION(BlueprintCallable, Server, Reliable) void Server_StopLightning();
    UFUNCTION(BlueprintCallable, Server, Reliable) void Server_UpdateHover();
    UFUNCTION(BlueprintCallable, Server, Reliable) void Server_UpdateSwinging(bool Swinging);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Setup(AActor* OwningActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void UpdateFlying();
    UFUNCTION(BlueprintCallable) void UpdateFlyingForward();
    UFUNCTION(BlueprintCallable) void UpdateSwinging();
};
