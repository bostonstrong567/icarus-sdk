// /Script/Engine.VirtualTextureBuilder
// Derives from: UObject
// size 0x38, declared in Engine/Source/Runtime/Engine/Classes/VT/VirtualTextureBuilder.h

UCLASS()
class UVirtualTextureBuilder : public UObject
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UVirtualTexture2D* Texture;  // 0x0028, size 0x8
    UPROPERTY() uint64 BuildHash;  // 0x0030, size 0x8
};
