// /Script/Engine.AnimBoneCompressionCodec
// Derives from: UObject
// size 0x38, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimBoneCompressionCodec.h

UCLASS(Abstract, EditInlineNew)
class UAnimBoneCompressionCodec : public UObject
{
public:
    UPROPERTY(EditAnywhere) FString Description;  // 0x0028, size 0x10

    // Virtual functions that start here:
    //   AllocateAnimData, ByteSwapIn, ByteSwapOut, DecompressBone, DecompressPose, GetCodec
    //   GetCodecDDCHandle
};
