// /Script/Engine.SoundGroup
// size 0x20, declared in Engine/Source/Runtime/Engine/Classes/Sound/SoundGroups.h

USTRUCT()
struct FSoundGroup
{
    UPROPERTY(Config) TEnumAsByte<ESoundGroup> SoundGroup;  // 0x0000, size 0x1
    UPROPERTY(Config) FString DisplayName;  // 0x0008, size 0x10
    UPROPERTY(Config) uint8 bAlwaysDecompressOnLoad : 1;  // 0x0018, mask 0x01
    UPROPERTY(Config) float DecompressedDuration;  // 0x001C, size 0x4
};
