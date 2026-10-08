// /Script/AppleImageUtils.AppleImageUtilsImageConversionResult
// size 0x20, declared in Engine/Plugins/Runtime/AppleImageUtils/Source/AppleImageUtils/Public/AppleImageUtilsBlueprintProxy.h

USTRUCT()
struct FAppleImageUtilsImageConversionResult
{
    UPROPERTY(BlueprintReadOnly) FString Error;  // 0x0000, size 0x10
    UPROPERTY(BlueprintReadOnly) TArray<uint8> ImageData;  // 0x0010, size 0x10
};
