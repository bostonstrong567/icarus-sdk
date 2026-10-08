// /Script/Engine.AnimSequence
// Derives from: UAnimSequenceBase > UAnimationAsset > UObject
// size 0x1C0, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimSequence.h

UCLASS(Config=Engine)
class UAnimSequence : public UAnimSequenceBase
{
public:
    UPROPERTY() int32 NumFrames;  // 0x00A8, size 0x4
    UPROPERTY() TArray<FTrackToSkeletonMap> TrackToSkeletonMapTable;  // 0x00B0, size 0x10
    UPROPERTY(EditAnywhere) UAnimBoneCompressionSettings* BoneCompressionSettings;  // 0x00D0, size 0x8
    UPROPERTY(EditAnywhere) UAnimCurveCompressionSettings* CurveCompressionSettings;  // 0x00D8, size 0x8
    UPROPERTY(EditAnywhere) TEnumAsByte<EAdditiveAnimationType> AdditiveAnimType;  // 0x0150, size 0x1
    UPROPERTY(EditAnywhere) TEnumAsByte<EAdditiveBasePoseType> RefPoseType;  // 0x0151, size 0x1
    UPROPERTY(EditAnywhere) UAnimSequence* RefPoseSeq;  // 0x0158, size 0x8
    UPROPERTY(EditAnywhere) int32 RefFrameIndex;  // 0x0160, size 0x4
    UPROPERTY(EditAnywhere) FName RetargetSource;  // 0x0164, size 0x8
    UPROPERTY() TArray<FTransform> RetargetSourceAssetReferencePose;  // 0x0170, size 0x10
    UPROPERTY(EditAnywhere) EAnimInterpolationType Interpolation;  // 0x0180, size 0x1
    UPROPERTY(EditAnywhere) bool bEnableRootMotion;  // 0x0181, size 0x1
    UPROPERTY(EditAnywhere) TEnumAsByte<ERootMotionRootLock> RootMotionRootLock;  // 0x0182, size 0x1
    UPROPERTY(EditAnywhere) bool bForceRootLock;  // 0x0183, size 0x1
    UPROPERTY(EditAnywhere) bool bUseNormalizedRootMotionScale;  // 0x0184, size 0x1
    UPROPERTY() bool bRootMotionSettingsCopiedFromMontage;  // 0x0185, size 0x1
    UPROPERTY() TArray<FAnimSyncMarker> AuthoredSyncMarkers;  // 0x0188, size 0x10
    UPROPERTY() TArray<FBakedCustomAttributePerBoneData> BakedPerBoneCustomAttributeData;  // 0x01B0, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    TArray<FRawAnimSequenceTrack,TSizedDefaultAllocator<32> > RawAnimationData;  // 0x00C0, protected
    FCompressedAnimSequence CompressedData;  // 0x00E0
    TArray<FName,TSizedDefaultAllocator<32> > UniqueMarkerNames;  // 0x0198
    bool bUseRawDataOnly;  // 0x01A8, private
};
