// /Script/Icarus.BiomeAudioData
// size 0x88, declared in Icarus/Source/Icarus/DataStructs/Audio/BiomeAudioData.h

USTRUCT()
struct FBiomeAudioData : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EGlobalEnvironmentBiomeFMODParam BiomeFMODParam;  // 0x0018, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FMusicLocationConditionsRowHandle MusicLocationCondition;  // 0x001C, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFMODEvent> AudioAmbienceBase;  // 0x0038, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFMODEvent> AudioAmbienceTransitional;  // 0x0060, size 0x28
};
