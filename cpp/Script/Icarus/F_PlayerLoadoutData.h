// /Script/Icarus.PlayerLoadoutData
// size 0x3E0, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/PlayerDataComponent.generated.h

USTRUCT()
struct FPlayerLoadoutData
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemData EnviroSuit;  // 0x0000, size 0x1F0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDropship Dropship;  // 0x01F0, size 0xE0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FItemData> MetaItems;  // 0x02D0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProspectInfo AssociatedProspect;  // 0x02E0, size 0xA0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLastProspectHostInfo HostedBy;  // 0x0380, size 0x38
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bInsured;  // 0x03B8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bSettled;  // 0x03B9, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int64 LoadoutClaimTime;  // 0x03C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ChrSlot;  // 0x03C8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString GUID;  // 0x03D0, size 0x10
};
