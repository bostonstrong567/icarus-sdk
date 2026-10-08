// /Script/Icarus.PakFileNameAndSize
// size 0x18, declared in Icarus/Source/Icarus/Utility/IcarusPakMeta.h

USTRUCT()
struct FPakFileNameAndSize
{
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FString Filename;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int64 FileSize;  // 0x0010, size 0x8
};
