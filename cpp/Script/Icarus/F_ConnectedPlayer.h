// /Script/Icarus.ConnectedPlayer
// size 0x38, declared in Icarus/Source/Icarus/Subsystems/World/ConnectedPlayer.h

USTRUCT()
struct FConnectedPlayer
{
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FPlayerCharacterID PlayerCharacterID;  // 0x0000, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadOnly) AIcarusPlayerController* PlayerController;  // 0x0018, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) AIcarusPlayerCharacter* PlayerCharacter;  // 0x0020, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) AIcarusPlayerState* PlayerState;  // 0x0028, size 0x8
    UPROPERTY() float ConnectionStartTime;  // 0x0030, size 0x4
    UPROPERTY() float ConnectionCompleteTime;  // 0x0034, size 0x4
};
