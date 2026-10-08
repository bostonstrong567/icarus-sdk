// /Script/Icarus.DataTableValidationHelperLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/Validation/DataTableValidationHelperLibrary.h

UCLASS()
class UDataTableValidationHelperLibrary : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void GetTextureInfo(UTexture* Texture, FVector& ImportedSize, FVector& DisplayedSize, FVector& MaxSizeInGame, int32& ResourceSize, bool& bHasAlphaChannel, FString& Method, FString& Format, int32& CombinedLODBias, int32& NumMips);  // parameters 0x60
};
