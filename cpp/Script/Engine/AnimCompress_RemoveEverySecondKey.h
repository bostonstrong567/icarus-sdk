// /Script/Engine.AnimCompress_RemoveEverySecondKey
// Derives from: UAnimCompress > UAnimBoneCompressionCodec > UObject
// size 0x48, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimCompress_RemoveEverySecondKey.h

UCLASS(EditInlineNew, MinimalAPI)
class UAnimCompress_RemoveEverySecondKey : public UAnimCompress
{
public:
    UPROPERTY(EditAnywhere) int32 MinKeys;  // 0x0040, size 0x4
    UPROPERTY(EditAnywhere) uint8 bStartAtSecondKey : 1;  // 0x0044, mask 0x01
};
