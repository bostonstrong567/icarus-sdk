// /Game/Prototypes/WaterSystems/BP_SwimmingComponent.BP_SwimmingComponent_C
// Derives from: UFloatableComponent > UTraitComponent > UActorComponent > UObject
// size 0x16C, a blueprint class, blueprint

UCLASS(EditInlineNew, Config=Engine)
class UBP_SwimmingComponent_C : public UFloatableComponent
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00E8, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool IsOverlappingWater;  // 0x00F0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CharacterIsDead_;  // 0x00F1, size 0x1, named "CharacterIsDead?"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SurfacingVelocity;  // 0x00F4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool SwimUp;  // 0x00F8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool SlowImpact;  // 0x00F9, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 SwimmingModifierUID;  // 0x00FC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SwimHeight;  // 0x0100, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float WetHeight;  // 0x0104, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 WetModifierUID;  // 0x0108, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool WetActive;  // 0x010C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 LavaModifierUID;  // 0x0110, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FModifierStatesRowHandle, int32> WetModifiers;  // 0x0118, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ShallowModifierUID;  // 0x0168, size 0x4

    UFUNCTION(BlueprintCallable) void AddWetModifier(FModifierStatesRowHandle Modifier);  // parameters 0x18
    UFUNCTION() void ExecuteUbergraph_BP_SwimmingComponent(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetOverlapSetup(FWaterSetupRowHandle& Setup);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void MovementModeChanged(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode);  // parameters 0xA
    UFUNCTION(BlueprintCallable) void OnRep_IsOverlappingWater();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void StopSwimming();
    UFUNCTION(BlueprintCallable) void TryAddModifier(int32& UIDRef, FModifierStatesRowHandle Modifier);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void TryAddWetModifiers();
    UFUNCTION(BlueprintCallable) void TryRemoveModifier(int32& UIDRef);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void TryRemoveWetModifiers();
    UFUNCTION(BlueprintImplementableEvent) void UpdateOverlappedState();
    UFUNCTION(BlueprintCallable) void UpdateState();
    UFUNCTION(BlueprintCallable) void UpdateSwimmingState();
};
