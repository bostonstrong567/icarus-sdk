// /Script/Icarus.IcarusPlayerChatMessage
// size 0x40, declared in Icarus/Source/Icarus/Controllers/IcarusPlayerController.h

USTRUCT()
struct FIcarusPlayerChatMessage
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString PlayerID;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString PlayerName;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTexture2D* PlayerIcon;  // 0x0020, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FColor PlayerColour;  // 0x0028, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString Message;  // 0x0030, size 0x10
};
