// /Script/Icarus.TreeAudioData
// size 0x1B0, declared in Icarus/Source/Icarus/DataStructs/Audio/TreeAudioData.h

USTRUCT()
struct FTreeAudioData : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFMODEvent> DetachTrunkSound;  // 0x0018, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFMODEvent> DetachBranchSound;  // 0x0040, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFMODEvent> DetachLeafSound;  // 0x0068, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFMODEvent> InitialBreakTopSound;  // 0x0090, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFMODEvent> InitialBreakTrunkSound;  // 0x00B8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFMODEvent> FallSound;  // 0x00E0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFMODEvent> TrunkLandSound;  // 0x0108, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bTrunkLandSoundUsesSurfaceParameters;  // 0x0130, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFMODEvent> HitSound;  // 0x0138, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFMODEvent> HitBuildingSound;  // 0x0160, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFMODEvent> InstantFellSound;  // 0x0188, size 0x28
};
