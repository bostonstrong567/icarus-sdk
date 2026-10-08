// /Script/Icarus.VocalisationData
// size 0x58, declared in Icarus/Source/Icarus/DataStructs/Audio/VocalisationData.h

USTRUCT()
struct FVocalisationData : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFMODEvent> Sound;  // 0x0018, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVocalisationSettingsRowHandle Setting;  // 0x0040, size 0x18
};
