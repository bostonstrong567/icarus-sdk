// /Script/Icarus.PlayerHistoryEntry
// size 0x28, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/IcarusFunctionLibrary.generated.h

USTRUCT()
struct FPlayerHistoryEntry
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FString UserId;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 ChrSlot;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FString CachedCharacterName;  // 0x0018, size 0x10
};
