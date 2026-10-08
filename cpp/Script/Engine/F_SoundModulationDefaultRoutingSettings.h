// /Script/Engine.SoundModulationDefaultRoutingSettings
// size 0x48, declared in Engine/Source/Runtime/Engine/Classes/Sound/SoundModulationDestination.h

USTRUCT()
struct FSoundModulationDefaultRoutingSettings : public FSoundModulationDefaultSettings
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EModulationRouting VolumeRouting;  // 0x0040, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EModulationRouting PitchRouting;  // 0x0041, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EModulationRouting HighpassRouting;  // 0x0042, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EModulationRouting LowpassRouting;  // 0x0043, size 0x1
};
