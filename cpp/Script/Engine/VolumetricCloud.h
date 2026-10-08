// /Script/Engine.VolumetricCloud
// Derives from: AInfo > AActor > UObject
// size 0x228, declared in Engine/Source/Runtime/Engine/Classes/Components/VolumetricCloudComponent.h

UCLASS(MinimalAPI, Config=Engine)
class AVolumetricCloud : public AInfo
{
public:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UVolumetricCloudComponent* VolumetricCloudComponent;  // 0x0220, size 0x8
};
