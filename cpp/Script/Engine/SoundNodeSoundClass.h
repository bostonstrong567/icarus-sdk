// /Script/Engine.SoundNodeSoundClass
// Derives from: USoundNode > UObject
// size 0x58, declared in Engine/Source/Runtime/Engine/Classes/Sound/SoundNodeSoundClass.h

UCLASS(EditInlineNew, MinimalAPI)
class USoundNodeSoundClass : public USoundNode
{
public:
    UPROPERTY(EditAnywhere) USoundClass* SoundClassOverride;  // 0x0048, size 0x8
private:
    bool bRetainingAudioDueToSoundClass;  // 0x0050, not reflected
};
