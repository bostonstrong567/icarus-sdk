// /Script/ImgMediaEngine.ImgMediaPlaybackComponent
// Derives from: UActorComponent > UObject
// size 0xD8, declared in Engine/Plugins/Media/ImgMedia/Source/ImgMediaEngine/Public/Unreal/ImgMediaPlaybackComponent.h

UCLASS(Config=Engine)
class UImgMediaPlaybackComponent : public UActorComponent
{
public:
    UPROPERTY(EditAnywhere) float Width;  // 0x00B0, size 0x4
    UPROPERTY(EditAnywhere) float LODBias;  // 0x00B4, size 0x4

    // Not reflected: the engine's scripting cannot see these.
    TArray<TWeakObjectPtr<UMediaTexture,FWeakObjectPtr>,TSizedDefaultAllocator<32> > MediaTextures;  // 0x00B8, protected
    TSharedPtr<FImgMediaMipMapObjectInfo,1> ObjectInfo;  // 0x00C8, protected
};
