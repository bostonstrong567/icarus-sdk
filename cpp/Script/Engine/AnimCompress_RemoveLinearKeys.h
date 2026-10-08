// /Script/Engine.AnimCompress_RemoveLinearKeys
// Derives from: UAnimCompress > UAnimBoneCompressionCodec > UObject
// size 0x60, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimCompress_RemoveLinearKeys.h

UCLASS(EditInlineNew, MinimalAPI)
class UAnimCompress_RemoveLinearKeys : public UAnimCompress
{
public:
    UPROPERTY(EditAnywhere) float MaxPosDiff;  // 0x0040, size 0x4
    UPROPERTY(EditAnywhere) float MaxAngleDiff;  // 0x0044, size 0x4
    UPROPERTY(EditAnywhere) float MaxScaleDiff;  // 0x0048, size 0x4
    UPROPERTY(EditAnywhere) float MaxEffectorDiff;  // 0x004C, size 0x4
    UPROPERTY(EditAnywhere) float MinEffectorDiff;  // 0x0050, size 0x4
    UPROPERTY(EditAnywhere) float EffectorDiffSocket;  // 0x0054, size 0x4
    UPROPERTY(EditAnywhere) float ParentKeyScale;  // 0x0058, size 0x4
    UPROPERTY(EditAnywhere) uint8 bRetarget : 1;  // 0x005C, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bActuallyFilterLinearKeys : 1;  // 0x005C, mask 0x02
};
