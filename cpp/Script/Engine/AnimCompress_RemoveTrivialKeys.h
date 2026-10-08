// /Script/Engine.AnimCompress_RemoveTrivialKeys
// Derives from: UAnimCompress > UAnimBoneCompressionCodec > UObject
// size 0x50, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimCompress_RemoveTrivialKeys.h

UCLASS(EditInlineNew, MinimalAPI)
class UAnimCompress_RemoveTrivialKeys : public UAnimCompress
{
public:
    UPROPERTY(EditAnywhere) float MaxPosDiff;  // 0x0040, size 0x4
    UPROPERTY(EditAnywhere) float MaxAngleDiff;  // 0x0044, size 0x4
    UPROPERTY(EditAnywhere) float MaxScaleDiff;  // 0x0048, size 0x4
};
