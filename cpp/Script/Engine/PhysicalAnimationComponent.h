// /Script/Engine.PhysicalAnimationComponent
// Derives from: UActorComponent > UObject
// size 0xF0, declared in Engine/Source/Runtime/Engine/Classes/PhysicsEngine/PhysicalAnimationComponent.h

UCLASS(Config=Engine)
class UPhysicalAnimationComponent : public UActorComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float StrengthMultiplyer;  // 0x00B0, size 0x4
    UPROPERTY(Instanced) USkeletalMeshComponent* SkeletalMeshComponent;  // 0x00B8, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    TArray<UPhysicalAnimationComponent::FPhysicalAnimationInstanceData,TSizedDefaultAllocator<32> > RuntimeInstanceData;  // 0x00C0, private
    TArray<FPhysicalAnimationData,TSizedDefaultAllocator<32> > DriveData;  // 0x00D0, private
    FDelegateHandle OnTeleportDelegateHandle;  // 0x00E0, private
    bool bPhysicsEngineNeedsUpdating;  // 0x00E8, private

    UFUNCTION(BlueprintCallable) void ApplyPhysicalAnimationProfileBelow(FName BodyName, FName ProfileName, bool bIncludeSelf, bool bClearNotFound);  // parameters 0x12
    UFUNCTION(BlueprintCallable) void ApplyPhysicalAnimationSettings(FName BodyName, const FPhysicalAnimationData& PhysicalAnimationData);  // parameters 0x2C
    UFUNCTION(BlueprintCallable) void ApplyPhysicalAnimationSettingsBelow(FName BodyName, const FPhysicalAnimationData& PhysicalAnimationData, bool bIncludeSelf);  // parameters 0x2D
    UFUNCTION(BlueprintCallable, BlueprintPure) FTransform GetBodyTargetTransform(FName BodyName) const;  // parameters 0x40
    UFUNCTION(BlueprintCallable) void SetSkeletalMeshComponent(USkeletalMeshComponent* InSkeletalMeshComponent);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetStrengthMultiplyer(float InStrengthMultiplyer);  // parameters 0x4
};
