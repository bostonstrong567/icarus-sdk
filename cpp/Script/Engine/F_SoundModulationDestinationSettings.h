// /Script/Engine.SoundModulationDestinationSettings
// size 0x10, declared in Engine/Source/Runtime/Engine/Classes/Sound/SoundModulationDestination.h

USTRUCT()
struct FSoundModulationDestinationSettings
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Value;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) USoundModulatorBase* Modulator;  // 0x0008, size 0x8
};
