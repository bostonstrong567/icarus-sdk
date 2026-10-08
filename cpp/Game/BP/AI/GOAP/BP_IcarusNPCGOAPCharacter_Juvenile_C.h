// /Game/BP/AI/GOAP/BP_IcarusNPCGOAPCharacter_Juvenile.BP_IcarusNPCGOAPCharacter_Juvenile_C
// Derives from: ABP_IcarusNPCGOAPCharacter_C > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xCE0, a blueprint class, blueprint

UCLASS(Abstract, Config=Game)
class ABP_IcarusNPCGOAPCharacter_Juvenile_C : public ABP_IcarusNPCGOAPCharacter_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0CB8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UGeneticsComponent* Genetics;  // 0x0CC0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionComponent_MountTooltip_C* BP_UIProjectionComponent_TamingTooltip;  // 0x0CC8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInteractableComponent* Interactable;  // 0x0CD0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* ViewTargetActor;  // 0x0CD8, size 0x8

    UFUNCTION(BlueprintCallable) bool CanKillcam();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BP_IcarusNPCGOAPCharacter_Juvenile(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FindNewViewTarget();
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) AActor* GetCurrentAnimationTarget() const;  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsPointWithinFOV(FVector TargetLocation, float DotLimit) const;  // parameters 0x11
    UFUNCTION(BlueprintImplementableEvent) void OnActorDeath(UActorState* ActorStateIn);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateTalentHighlight();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
    UFUNCTION(BlueprintCallable) void ValidateGenetics();
};
