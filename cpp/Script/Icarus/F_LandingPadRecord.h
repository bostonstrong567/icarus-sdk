// /Script/Icarus.LandingPadRecord
// size 0x20, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/LandingPadRecorderComponent.h

USTRUCT()
struct FLandingPadRecord
{
public:
    UPROPERTY(SaveGame) int32 LeveTimeBuilt;  // 0x0000, size 0x4
    UPROPERTY(SaveGame) FPlayerCharacterID PlayerID;  // 0x0008, size 0x18
};
