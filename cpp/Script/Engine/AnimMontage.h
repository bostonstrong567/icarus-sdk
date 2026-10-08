// /Script/Engine.AnimMontage
// Derives from: UAnimCompositeBase > UAnimSequenceBase > UAnimationAsset > UObject
// size 0x1D0, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimMontage.h

UCLASS(MinimalAPI, Config=Engine)
class UAnimMontage : public UAnimCompositeBase
{
public:
    UPROPERTY(EditAnywhere) FAlphaBlend BlendIn;  // 0x00A8, size 0x30
    UPROPERTY(Deprecated) float BlendInTime;  // 0x00D8, size 0x4
    UPROPERTY(EditAnywhere) FAlphaBlend BlendOut;  // 0x00E0, size 0x30
    UPROPERTY(Deprecated) float BlendOutTime;  // 0x0110, size 0x4
    UPROPERTY(EditAnywhere) float BlendOutTriggerTime;  // 0x0114, size 0x4
    UPROPERTY(EditAnywhere) FName SyncGroup;  // 0x0118, size 0x8
    UPROPERTY(EditAnywhere) int32 SyncSlotIndex;  // 0x0120, size 0x4
    UPROPERTY() FMarkerSyncData MarkerData;  // 0x0128, size 0x20
    UPROPERTY() TArray<FCompositeSection> CompositeSections;  // 0x0148, size 0x10
    UPROPERTY() TArray<FSlotAnimationTrack> SlotAnimTracks;  // 0x0158, size 0x10
    UPROPERTY(Deprecated) TArray<FBranchingPoint> BranchingPoints;  // 0x0168, size 0x10
    UPROPERTY() bool bEnableRootMotionTranslation;  // 0x0178, size 0x1
    UPROPERTY() bool bEnableRootMotionRotation;  // 0x0179, size 0x1
    UPROPERTY(EditAnywhere) bool bEnableAutoBlendOut;  // 0x017A, size 0x1
    UPROPERTY() TEnumAsByte<ERootMotionRootLock> RootMotionRootLock;  // 0x017B, size 0x1
    UPROPERTY() TArray<FBranchingPointMarker> BranchingPointMarkers;  // 0x0180, size 0x10
    UPROPERTY() TArray<int32> BranchingPointStateNotifyIndices;  // 0x0190, size 0x10
    UPROPERTY(EditAnywhere) FTimeStretchCurve TimeStretchCurve;  // 0x01A0, size 0x28
    UPROPERTY(EditAnywhere) FName TimeStretchCurveName;  // 0x01C8, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintPure) float GetDefaultBlendOutTime() const;  // parameters 0x4
};
