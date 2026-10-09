// /Script/Engine.SoundModulationDefaultSettings
// size 0x40, declared in Engine/Source/Runtime/Engine/Classes/Sound/SoundModulationDestination.h

USTRUCT()
struct FSoundModulationDefaultSettings
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSoundModulationDestinationSettings VolumeModulationDestination;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSoundModulationDestinationSettings PitchModulationDestination;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSoundModulationDestinationSettings HighpassModulationDestination;  // 0x0020, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSoundModulationDestinationSettings LowpassModulationDestination;  // 0x0030, size 0x10
};
