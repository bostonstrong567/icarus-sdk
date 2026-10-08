// /Script/Engine.RuntimeVirtualTextureVolume
// Derives from: AActor > UObject
// size 0x228, declared in Engine/Source/Runtime/Engine/Classes/VT/RuntimeVirtualTextureVolume.h

UCLASS(MinimalAPI, Config=Engine)
class ARuntimeVirtualTextureVolume : public AActor
{
public:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) URuntimeVirtualTextureComponent* VirtualTextureComponent;  // 0x0220, size 0x8
};
