// /Game/BP/AI/BP_JumpLerpComponent.BP_JumpLerpComponent_C
// Derives from: UActorComponent > UObject
// size 0x150, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_JumpLerpComponent_C : public UActorComponent
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsJumpLerping;  // 0x00B8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector StartingLocation;  // 0x00BC, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LastAlpha;  // 0x00C8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LastXAlpha;  // 0x00CC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EVisibilityBasedAnimTickOption StartingTickType;  // 0x00D0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool UseMontageBlendAlpha;  // 0x00D1, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IgnoreCapsuleHeight;  // 0x00D2, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform Target;  // 0x00E0, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool BlendRotation;  // 0x0110, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform StartingTransform;  // 0x0120, size 0x30

    UFUNCTION() void ExecuteUbergraph_BP_JumpLerpComponent(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void FinishJumpLerp();
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetOwningCharacter(ACharacter*& Character) const;  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void StartJumpLerpTowardsTarget(FVector TargetLocation, const TArray<AActor*>& ActorsToMoveIgnore, bool UseMontageBlendOutAsAlpha, bool IgnoreCapsuleHeight);  // parameters 0x22
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void StartJumpLerpTowardsTransform(FTransform TargetTransform, const TArray<AActor*>& ActorsToMoveIgnore, bool UseMontageBlendOutAsAlpha, bool IgnoreCapsuleHeight);  // parameters 0x42
    UFUNCTION(BlueprintCallable) void TickJumpLerp();
};
