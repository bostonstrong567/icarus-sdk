// /Script/Icarus.PlayerFootstepAudioData
// size 0x90, declared in Icarus/Source/Icarus/DataStructs/PlayerFootstepAudioData.h

USTRUCT()
struct FPlayerFootstepAudioData : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFMODEvent> FootstepSound;  // 0x0018, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFMODEvent> JumpUpSound;  // 0x0040, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFMODEvent> JumpLandSound;  // 0x0068, size 0x28
};
