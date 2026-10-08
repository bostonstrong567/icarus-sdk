// /Script/Engine.AnimBoneCompressionSettings
// Derives from: UObject
// size 0x38, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimBoneCompressionSettings.h

UCLASS()
class UAnimBoneCompressionSettings : public UObject
{
public:
    UPROPERTY(EditAnywhere) TArray<UAnimBoneCompressionCodec*> Codecs;  // 0x0028, size 0x10
};
