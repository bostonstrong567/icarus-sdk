// /Script/FMODStudio.FMODAmbientSound
// Derives from: AActor > UObject
// size 0x228, declared in Icarus/Plugins/FMODStudio/Source/FMODStudio/Classes/FMODAmbientSound.h

UCLASS(Config=Engine)
class AFMODAmbientSound : public AActor
{
public:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UFMODAudioComponent* AudioComponent;  // 0x0220, size 0x8
};
