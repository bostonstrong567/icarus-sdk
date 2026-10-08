// /Script/Icarus.TextureListItem
// Derives from: UObject
// size 0x50, declared in Icarus/Source/Icarus/UI/TextureListItem.h

UCLASS()
class UTextureListItem : public UObject
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> ItemTexture;  // 0x0028, size 0x28
};
