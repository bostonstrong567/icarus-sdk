// /Script/FMODStudio.FMODAttenuationDetails
// size 0xC, declared in Icarus/Plugins/FMODStudio/Source/FMODStudio/Classes/FMODAudioComponent.h

USTRUCT()
struct FFMODAttenuationDetails
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverrideAttenuation : 1;  // 0x0000, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinimumDistance;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaximumDistance;  // 0x0008, size 0x4
};
