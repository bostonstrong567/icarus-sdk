// /Script/Engine.StereoLayerFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Engine/Source/Runtime/Engine/Classes/Kismet/StereoLayerFunctionLibrary.h

UCLASS()
class UStereoLayerFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void EnableAutoLoadingSplashScreen(bool InAutoShowEnabled);  // parameters 0x1
    UFUNCTION(BlueprintCallable) static void HideSplashScreen();
    UFUNCTION(BlueprintCallable) static void SetSplashScreen(UTexture* Texture, FVector2D Scale, FVector Offset, bool bShowLoadingMovie, bool bShowOnSet);  // parameters 0x1E
    UFUNCTION(BlueprintCallable) static void ShowSplashScreen();
};
