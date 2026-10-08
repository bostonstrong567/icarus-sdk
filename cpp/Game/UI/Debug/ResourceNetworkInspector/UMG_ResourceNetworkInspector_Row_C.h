// /Game/UI/Debug/ResourceNetworkInspector/UMG_ResourceNetworkInspector_Row.UMG_ResourceNetworkInspector_Row_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x280, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ResourceNetworkInspector_Row_C : public UUserWidget
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* InRateText;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* NameText;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* OutRateText;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UResourceNetworkComponent* CachedComponent;  // 0x0278, size 0x8

    UFUNCTION(BlueprintCallable) void Get_Rate_Text(UResourceNetworkComponent* Component, bool Producer, FText& OutText);  // parameters 0x28, named "Get Rate Text"
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetDeviceDisplayName(AActor* Actor);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void SetupForData(FDeviceDataRow Data);  // parameters 0x48
    UFUNCTION(BlueprintCallable) void SetupForDevice(UResourceNetworkComponent* Component);  // parameters 0x8
};
