// /Script/Engine.AnimCompress
// Derives from: UAnimBoneCompressionCodec > UObject
// size 0x40, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimCompress.h

UCLASS(Abstract, EditInlineNew, MinimalAPI)
class UAnimCompress : public UAnimBoneCompressionCodec
{
public:
    UPROPERTY() uint8 bNeedsSkeleton : 1;  // 0x0038, mask 0x01
    UPROPERTY(EditAnywhere) TEnumAsByte<AnimationCompressionFormat> TranslationCompressionFormat;  // 0x003C, size 0x1
    UPROPERTY(EditAnywhere) TEnumAsByte<AnimationCompressionFormat> RotationCompressionFormat;  // 0x003D, size 0x1
    UPROPERTY(EditAnywhere) TEnumAsByte<AnimationCompressionFormat> ScaleCompressionFormat;  // 0x003E, size 0x1
};
