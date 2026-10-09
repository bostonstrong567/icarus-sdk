// /Script/Icarus.PlayerCharacterID
// size 0x18, declared in Icarus/Source/Icarus/PlayerCharacterID.h

USTRUCT()
struct FPlayerCharacterID
{
public:
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadOnly) FString PlayerID;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadOnly) int32 ChrSlot;  // 0x0010, size 0x4
};
