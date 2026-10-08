// /Script/MotionWarping.MotionWarpingComponent
// Derives from: UActorComponent > UObject
// size 0xF0, declared in Engine/Plugins/Animation/MotionWarping/Source/MotionWarping/Public/MotionWarpingComponent.h

UCLASS(Config=Engine)
class UMotionWarpingComponent : public UActorComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bSearchForWindowsInAnimsWithinMontages;  // 0x00B0, size 0x1
    UPROPERTY(BlueprintAssignable) FMotionWarpingPreUpdate OnPreUpdate;  // 0x00B8, size 0x10
    UPROPERTY(Transient) TWeakObjectPtr<ACharacter> CharacterOwner;  // 0x00C8, size 0x8
    UPROPERTY(Transient) TArray<URootMotionModifier*> Modifiers;  // 0x00D0, size 0x10
    UPROPERTY(Replicated, Transient) TArray<FMotionWarpingTarget> WarpTargets;  // 0x00E0, size 0x10

    UFUNCTION(BlueprintCallable) void AddOrUpdateWarpTarget(const FMotionWarpingTarget& WarpTarget);  // parameters 0x34
    UFUNCTION(BlueprintCallable) void AddOrUpdateWarpTargetFromComponent(FName WarpTargetName, USceneComponent* Component, FName BoneName, bool bFollowComponent);  // parameters 0x19
    UFUNCTION(BlueprintCallable) void AddOrUpdateWarpTargetFromLocation(FName WarpTargetName, FVector TargetLocation);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void AddOrUpdateWarpTargetFromLocationAndRotation(FName WarpTargetName, FVector TargetLocation, FRotator TargetRotation);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void AddOrUpdateWarpTargetFromTransform(FName WarpTargetName, FTransform TargetTransform);  // parameters 0x40
    UFUNCTION(BlueprintCallable) void DisableAllRootMotionModifiers();
    UFUNCTION(BlueprintCallable) int32 RemoveWarpTarget(FName WarpTargetName);  // parameters 0xC
};
