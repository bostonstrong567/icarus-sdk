// /Script/HeadMountedDisplay.XRLoadingScreenFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Engine/Source/Runtime/HeadMountedDisplay/Public/XRLoadingScreenFunctionLibrary.h

UCLASS()
class UXRLoadingScreenFunctionLibrary : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AddLoadingScreenSplash(UTexture* Texture, FVector Translation, FRotator Rotation, FVector2D Size, FRotator DeltaRotation, bool bClearBeforeAdd);  // parameters 0x35
    UFUNCTION(BlueprintCallable) static void ClearLoadingScreenSplashes();
    UFUNCTION(BlueprintCallable) static void HideLoadingScreen();
    UFUNCTION(BlueprintCallable) static void SetLoadingScreen(UTexture* Texture, FVector2D Scale, FVector Offset, bool bShowLoadingMovie, bool bShowOnSet);  // parameters 0x1E
    UFUNCTION(BlueprintCallable) static void ShowLoadingScreen();
};
