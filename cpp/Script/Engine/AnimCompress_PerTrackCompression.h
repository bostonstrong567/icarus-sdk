// /Script/Engine.AnimCompress_PerTrackCompression
// Derives from: UAnimCompress_RemoveLinearKeys > UAnimCompress > UAnimBoneCompressionCodec > UObject
// size 0xD8, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimCompress_PerTrackCompression.h

UCLASS(EditInlineNew)
class UAnimCompress_PerTrackCompression : public UAnimCompress_RemoveLinearKeys
{
public:
    UPROPERTY(EditAnywhere) float MaxZeroingThreshold;  // 0x0060, size 0x4
    UPROPERTY(EditAnywhere) float MaxPosDiffBitwise;  // 0x0064, size 0x4
    UPROPERTY(EditAnywhere) float MaxAngleDiffBitwise;  // 0x0068, size 0x4
    UPROPERTY(EditAnywhere) float MaxScaleDiffBitwise;  // 0x006C, size 0x4
    UPROPERTY(EditAnywhere) TArray<TEnumAsByte<AnimationCompressionFormat>> AllowedRotationFormats;  // 0x0070, size 0x10
    UPROPERTY(EditAnywhere) TArray<TEnumAsByte<AnimationCompressionFormat>> AllowedTranslationFormats;  // 0x0080, size 0x10
    UPROPERTY(EditAnywhere) TArray<TEnumAsByte<AnimationCompressionFormat>> AllowedScaleFormats;  // 0x0090, size 0x10
    UPROPERTY(EditAnywhere) uint8 bResampleAnimation : 1;  // 0x00A0, mask 0x01
    UPROPERTY(EditAnywhere) float ResampledFramerate;  // 0x00A4, size 0x4
    UPROPERTY(EditAnywhere) int32 MinKeysForResampling;  // 0x00A8, size 0x4
    UPROPERTY(EditAnywhere) uint8 bUseAdaptiveError : 1;  // 0x00AC, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bUseOverrideForEndEffectors : 1;  // 0x00AC, mask 0x02
    UPROPERTY(EditAnywhere) int32 TrackHeightBias;  // 0x00B0, size 0x4
    UPROPERTY(EditAnywhere) float ParentingDivisor;  // 0x00B4, size 0x4
    UPROPERTY(EditAnywhere) float ParentingDivisorExponent;  // 0x00B8, size 0x4
    UPROPERTY(EditAnywhere) uint8 bUseAdaptiveError2 : 1;  // 0x00BC, mask 0x01
    UPROPERTY(EditAnywhere) float RotationErrorSourceRatio;  // 0x00C0, size 0x4
    UPROPERTY(EditAnywhere) float TranslationErrorSourceRatio;  // 0x00C4, size 0x4
    UPROPERTY(EditAnywhere) float ScaleErrorSourceRatio;  // 0x00C8, size 0x4
    UPROPERTY(EditAnywhere) float MaxErrorPerTrackRatio;  // 0x00CC, size 0x4
    UPROPERTY() float PerturbationProbeSize;  // 0x00D0, size 0x4
};
