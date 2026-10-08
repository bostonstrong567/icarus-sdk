// /Script/AssetRegistry.TagAndValue
// size 0x18, declared in Engine/Source/Runtime/AssetRegistry/Public/AssetRegistry/AssetRegistryHelpers.h

USTRUCT()
struct FTagAndValue
{
    UPROPERTY(Transient, BlueprintReadWrite) FName Tag;  // 0x0000, size 0x8
    UPROPERTY(Transient, BlueprintReadWrite) FString Value;  // 0x0008, size 0x10
};
