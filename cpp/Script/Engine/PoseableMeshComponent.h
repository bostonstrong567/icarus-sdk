// /Script/Engine.PoseableMeshComponent
// Derives from: USkinnedMeshComponent > UMeshComponent > UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x800, declared in Engine/Source/Runtime/Engine/Classes/Components/PoseableMeshComponent.h

UCLASS(EditInlineNew, Config=Engine)
class UPoseableMeshComponent : public USkinnedMeshComponent
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TArray<FTransform,TSizedDefaultAllocator<32> > BoneSpaceTransforms;  // 0x0698
    FBoneContainer RequiredBones;  // 0x06A8
    bool bNeedsRefreshTransform;  // 0x07F8, private

    UFUNCTION(BlueprintCallable) void CopyPoseFromSkeletalComponent(USkeletalMeshComponent* InComponentToCopy);  // parameters 0x8
    UFUNCTION(BlueprintCallable) FVector GetBoneLocationByName(FName BoneName, TEnumAsByte<EBoneSpaces> BoneSpace);  // parameters 0x18
    UFUNCTION(BlueprintCallable) FRotator GetBoneRotationByName(FName BoneName, TEnumAsByte<EBoneSpaces> BoneSpace);  // parameters 0x18
    UFUNCTION(BlueprintCallable) FVector GetBoneScaleByName(FName BoneName, TEnumAsByte<EBoneSpaces> BoneSpace);  // parameters 0x18
    UFUNCTION(BlueprintCallable) FTransform GetBoneTransformByName(FName BoneName, TEnumAsByte<EBoneSpaces> BoneSpace);  // parameters 0x40
    UFUNCTION(BlueprintCallable) void ResetBoneTransformByName(FName BoneName);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetBoneLocationByName(FName BoneName, FVector InLocation, TEnumAsByte<EBoneSpaces> BoneSpace);  // parameters 0x15
    UFUNCTION(BlueprintCallable) void SetBoneRotationByName(FName BoneName, FRotator InRotation, TEnumAsByte<EBoneSpaces> BoneSpace);  // parameters 0x15
    UFUNCTION(BlueprintCallable) void SetBoneScaleByName(FName BoneName, FVector InScale3D, TEnumAsByte<EBoneSpaces> BoneSpace);  // parameters 0x15
    UFUNCTION(BlueprintCallable) void SetBoneTransformByName(FName BoneName, const FTransform& InTransform, TEnumAsByte<EBoneSpaces> BoneSpace);  // parameters 0x41
};
