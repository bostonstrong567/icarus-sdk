// /Script/ImageWriteQueue.ImageWriteBlueprintLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Engine/Source/Runtime/ImageWriteQueue/Public/ImageWriteBlueprintLibrary.h

UCLASS()
class UImageWriteBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void ExportToDisk(UTexture* Texture, FString Filename, const FImageWriteOptions& Options);  // parameters 0x80
};
