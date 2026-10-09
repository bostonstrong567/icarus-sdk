// /Script/Icarus.FirearmAudioData
// size 0x48, declared in Icarus/Source/Icarus/DataStructs/Audio/FirearmAudioData.h

USTRUCT()
struct FFirearmAudioData : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FFirearmSoundData> FireSounds;  // 0x0018, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FFirearmSoundData> PersistentSounds;  // 0x0028, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FFirearmSoundData> NoFireSounds;  // 0x0038, size 0x10
};
