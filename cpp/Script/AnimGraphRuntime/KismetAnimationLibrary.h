// /Script/AnimGraphRuntime.KismetAnimationLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/KismetAnimationLibrary.h

UCLASS()
class UKismetAnimationLibrary : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable) static float K2_CalculateVelocityFromPositionHistory(float DeltaSeconds, FVector Position, FPositionHistory& History, int32 NumberOfSamples, float VelocityMin, float VelocityMax);  // parameters 0x50
    UFUNCTION(BlueprintCallable) static float K2_CalculateVelocityFromSockets(float DeltaSeconds, USkeletalMeshComponent* Component, FName SocketOrBoneName, FName ReferenceSocketOrBone, TEnumAsByte<ERelativeTransformSpace> SocketSpace, FVector OffsetInBoneSpace, FPositionHistory& History, int32 NumberOfSamples, float VelocityMin, float VelocityMax, EEasingFuncType EasingType, const FRuntimeFloatCurve& CustomCurve);  // parameters 0xFC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector K2_DirectionBetweenSockets(USkeletalMeshComponent* Component, FName SocketOrBoneNameFrom, FName SocketOrBoneNameTo);  // parameters 0x24
    UFUNCTION(BlueprintCallable, BlueprintPure) static float K2_DistanceBetweenTwoSocketsAndMapRange(USkeletalMeshComponent* Component, FName SocketOrBoneNameA, TEnumAsByte<ERelativeTransformSpace> SocketSpaceA, FName SocketOrBoneNameB, TEnumAsByte<ERelativeTransformSpace> SocketSpaceB, bool bRemapRange, float InRangeMin, float InRangeMax, float OutRangeMin, float OutRangeMax);  // parameters 0x34
    UFUNCTION(BlueprintCallable) static float K2_EndProfilingTimer(bool bLog, FString LogPrefix);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTransform K2_LookAt(const FTransform& CurrentTransform, const FVector& TargetPosition, FVector LookAtVector, bool bUseUpVector, FVector UpVector, float ClampConeInDegree);  // parameters 0x90
    UFUNCTION(BlueprintCallable, BlueprintPure) static float K2_MakePerlinNoiseAndRemap(float Value, float RangeOutMin, float RangeOutMax);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector K2_MakePerlinNoiseVectorAndRemap(float X, float Y, float Z, float RangeOutMinX, float RangeOutMaxX, float RangeOutMinY, float RangeOutMaxY, float RangeOutMinZ, float RangeOutMaxZ);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static void K2_StartProfilingTimer();
    UFUNCTION(BlueprintCallable, BlueprintPure) static void K2_TwoBoneIK(const FVector& RootPos, const FVector& JointPos, const FVector& EndPos, const FVector& JointTarget, const FVector& Effector, FVector& OutJointPos, FVector& OutEndPos, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale);  // parameters 0x60
};
