// /Script/Icarus.CargoLandingPadRecord
// size 0x8, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/CargoLandingPadRecorderComponent.h

USTRUCT()
struct FCargoLandingPadRecord
{
    UPROPERTY(SaveGame) int32 LeftSlotUID;  // 0x0000, size 0x4
    UPROPERTY(SaveGame) int32 RightSlotUID;  // 0x0004, size 0x4
};
