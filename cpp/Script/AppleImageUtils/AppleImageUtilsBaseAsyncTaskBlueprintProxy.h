// /Script/AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy
// Derives from: UObject
// size 0x88, declared in Engine/Plugins/Runtime/AppleImageUtils/Source/AppleImageUtils/Public/AppleImageUtilsBlueprintProxy.h

UCLASS(MinimalAPI)
class UAppleImageUtilsBaseAsyncTaskBlueprintProxy : public UObject
{
public:
    UPROPERTY(BlueprintAssignable) FAppleImageConversionDelegate OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FAppleImageConversionDelegate OnFailure;  // 0x0040, size 0x10
    UPROPERTY(BlueprintReadOnly) FAppleImageUtilsImageConversionResult ConversionResult;  // 0x0060, size 0x20

    // Not reflected: the engine's scripting cannot see these.
    TSharedPtr<FAppleImageUtilsConversionTaskBase,1> ConversionTask;  // 0x0050
    bool bShouldTick;  // 0x0080, private

    UFUNCTION(BlueprintCallable) static UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToHEIF(UTexture* SourceImage, int32 Quality, bool bWantColor, bool bUseGpu, float Scale, ETextureRotationDirection Rotate);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToJPEG(UTexture* SourceImage, int32 Quality, bool bWantColor, bool bUseGpu, float Scale, ETextureRotationDirection Rotate);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToPNG(UTexture* SourceImage, bool bWantColor, bool bUseGpu, float Scale, ETextureRotationDirection Rotate);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToTIFF(UTexture* SourceImage, bool bWantColor, bool bUseGpu, float Scale, ETextureRotationDirection Rotate);  // parameters 0x20
};
