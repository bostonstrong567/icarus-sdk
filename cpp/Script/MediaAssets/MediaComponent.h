// /Script/MediaAssets.MediaComponent
// Derives from: UActorComponent > UObject
// size 0xC0, declared in Engine/Source/Runtime/MediaAssets/Public/MediaComponent.h

UCLASS(Config=Engine)
class UMediaComponent : public UActorComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY(Transient, Instanced, BlueprintReadOnly) UMediaTexture* MediaTexture;  // 0x00B0, size 0x8
    UPROPERTY(EditAnywhere, Transient, Instanced, Interp, BlueprintReadOnly) UMediaPlayer* MediaPlayer;  // 0x00B8, size 0x8
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) UMediaPlayer* GetMediaPlayer() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) UMediaTexture* GetMediaTexture() const;  // parameters 0x8
};
