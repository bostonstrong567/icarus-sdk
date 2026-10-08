// /Script/Icarus.IcarusCreatureAnimInstance
// Derives from: UIcarusAnimInstance > UAnimInstance > UObject
// size 0x3D0, declared in Icarus/Source/Icarus/Animation/IcarusCreatureAnimInstance.h

UCLASS(Transient)
class UIcarusCreatureAnimInstance : public UIcarusAnimInstance
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIsSwimming;  // 0x02D0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PawnVelocity;  // 0x02D4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PawnDirection;  // 0x02D8, size 0x4
    UPROPERTY(BlueprintReadOnly) FRotator PawnAngularVelocity;  // 0x02DC, size 0xC
    UPROPERTY(BlueprintReadOnly) float PawnTurnRate;  // 0x02E8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TurnRateNormalisationValue;  // 0x02EC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bUseMovementComponentVelocity;  // 0x02F0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float IKStrength;  // 0x02F4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIKEnabled;  // 0x02F8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName DisableIKCurveName;  // 0x02FC, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ELookAtType LookAtType;  // 0x0304, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LookYaw;  // 0x0308, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LookPitch;  // 0x030C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector LookLocation;  // 0x0310, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bWithinViewAngle;  // 0x031C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ViewAngleDotLimit;  // 0x0320, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ViewOriginForwardOffset;  // 0x0324, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ExistingTargetDotLimitBuffer;  // 0x0328, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName DisableLookAtCurveName;  // 0x032C, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LookAtStrength;  // 0x0334, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bShouldRagdoll;  // 0x0338, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPoseSnapshot RagdollPose;  // 0x0340, size 0x38
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EMovementState CurrentMovementState;  // 0x0378, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* CurrentTarget;  // 0x0380, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    FRotator LastRotation;  // 0x0388, private
    FPositionHistory PositionHistory;  // 0x0398, private

    UFUNCTION(BlueprintCallable) static float CalculateVelocityFromPositionHistory(float DeltaSeconds, FVector Position, FPositionHistory& History, int32 NumberOfSamples, float VelocityMin, float VelocityMax);  // parameters 0x50
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetLeanAmount() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent) FRotator GetOwnerLookAtRotation() const;  // parameters 0xC
    UFUNCTION() void OnIKSettingsUpdated(bool bNewIKEnabled);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) float UpdateIKStrength(float DeltaSeconds);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void UpdateLookAtValues(float DeltaSeconds);  // parameters 0x4

    // Virtual functions that start here:
    //   GetOwnerLookAtRotation_Implementation
};
