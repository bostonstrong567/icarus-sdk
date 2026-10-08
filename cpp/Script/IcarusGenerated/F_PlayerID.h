// /Script/IcarusGenerated.PlayerID
// size 0x30, declared in Icarus/Source/IcarusGenerated/Public/Struct/PlayerID.h

USTRUCT()
struct FPlayerID
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString PlayerName;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Score;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString UserID;  // 0x0018, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ChrSlot;  // 0x0028, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bHost;  // 0x002C, size 0x1
};
