// /Script/MediaAssets.FileMediaSource
// Derives from: UBaseMediaSource > UMediaSource > UObject
// size 0xB0, declared in Engine/Source/Runtime/MediaAssets/Public/FileMediaSource.h

UCLASS(EditInlineNew)
class UFileMediaSource : public UBaseMediaSource
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString FilePath;  // 0x0088, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool PrecacheFile;  // 0x0098, size 0x1

    // Not reflected: the engine's scripting cannot see these.
    FString ResolvedFullPath;  // 0x00A0, private

    UFUNCTION(BlueprintCallable) void SetFilePath(FString Path);  // parameters 0x10
};
