// /Script/RTXGI.DDGIVolume
// Derives from: AActor > UObject
// size 0x228, declared in Engine/Plugins/Runtime/Nvidia/RTXGI/Source/RTXGI/Public/DDGIVolume.h

UCLASS(Config=Engine)
class ADDGIVolume : public AActor
{
public:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UDDGIVolumeComponent* DDGIVolumeComponent;  // 0x0220, size 0x8
};
