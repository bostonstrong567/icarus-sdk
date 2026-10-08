// /Script/IcarusGenerated.OnlineProfileUser
// size 0x48, declared in Icarus/Source/IcarusGenerated/Public/Struct/OnlineProfileUser.h

USTRUCT()
struct FOnlineProfileUser
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString UserID;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FMetaResource> MetaResources;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<int32> UnlockedFlags;  // 0x0020, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FBackendTalent> Talents;  // 0x0030, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 NextChrSlot;  // 0x0040, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 DataVersion;  // 0x0044, size 0x4
};
