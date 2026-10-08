// /Script/Icarus.PakMetaDetail
// size 0xA8, declared in Icarus/Source/Icarus/Utility/IcarusPakMeta.h

USTRUCT()
struct FPakMetaDetail
{
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FPakFileDetails MissingFilesPak;  // 0x0000, size 0x20
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FPakFileDetails BadFileSizesPak;  // 0x0020, size 0x20
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FPakFileDetails ExtraFilesPak;  // 0x0040, size 0x20
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FPakFileDetails ModFilesPak;  // 0x0060, size 0x20
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FString Path;  // 0x0080, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FString PakHash;  // 0x0090, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 Result;  // 0x00A0, size 0x4
};
