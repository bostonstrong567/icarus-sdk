// /Script/Icarus.ProspectSaveState
// size 0xF8, declared in Icarus/Source/Icarus/Systems/Prospects/ProspectSaveState.h

USTRUCT()
struct FProspectSaveState : public FProspectSaveStateHeader
{
    UPROPERTY() TArray<FStateRecorderBlob> StateRecorderBlobs;  // 0x00E8, size 0x10
};
