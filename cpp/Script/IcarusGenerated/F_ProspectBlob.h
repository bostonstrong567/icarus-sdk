// /Script/IcarusGenerated.ProspectBlob
// size 0x40, declared in Icarus/Source/IcarusGenerated/Public/Struct/ProspectBlob.h

USTRUCT()
struct FProspectBlob
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString Key;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString Hash;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TotalLength;  // 0x0020, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 DataLength;  // 0x0024, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 UncompressedLength;  // 0x0028, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString BinaryBlob;  // 0x0030, size 0x10
};
