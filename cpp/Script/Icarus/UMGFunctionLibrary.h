// /Script/Icarus.UMGFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/UI/UMGFunctionLibrary.h

UCLASS()
class UUMGFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable) static bool AnyChildrenVisible(UPanelWidget* PanelWidget);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void CopyToClipboard(FString Text);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static TArray<FText> FormatTimeLengthDigital(int32 Seconds);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static FText GetTextForKeybind(UObject* WorldContextObject, const FKeybindingsRowHandle& Keybinding);  // parameters 0x38
    UFUNCTION(BlueprintCallable) static FString PasteFromClipboard();  // parameters 0x10
};
