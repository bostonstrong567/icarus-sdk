// /Script/Engine.VolumetricCloud
// Derives from: AInfo > AActor > UObject
// size 0x228, declared in Engine/Source/Runtime/Engine/Classes/Components/VolumetricCloudComponent.h

UCLASS(MinimalAPI, Config=Engine)
class AVolumetricCloud : public AInfo
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UVolumetricCloudComponent* VolumetricCloudComponent;  // 0x0220, size 0x8
};
