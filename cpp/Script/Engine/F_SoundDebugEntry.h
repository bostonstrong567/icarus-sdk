// /Script/Engine.SoundDebugEntry
// size 0x20, declared in Engine/Source/Runtime/Engine/Classes/Sound/AudioSettings.h

USTRUCT()
struct FSoundDebugEntry
{
public:
    UPROPERTY(EditAnywhere, Config) FName DebugName;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, Config) FSoftObjectPath Sound;  // 0x0008, size 0x18
};
