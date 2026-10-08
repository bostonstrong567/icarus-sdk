// /Script/Icarus.PakFileDetails
// size 0x20, declared in Icarus/Source/Icarus/Utility/IcarusPakMeta.h

USTRUCT()
struct FPakFileDetails
{
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<FPakFileNameAndSize> PakFiles;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FString PakHash;  // 0x0010, size 0x10
};
