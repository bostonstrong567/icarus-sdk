// /Game/UI/Components/UMG_SpeederBikeHUDInfo.UMG_SpeederBikeHUDInfo_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x288, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_SpeederBikeHUDInfo_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* FuelOverlay;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* FuelPct;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* FuelProgress;  // 0x0278, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* BoundSpeederBike;  // 0x0280, size 0x8

    UFUNCTION() void ExecuteUbergraph_UMG_SpeederBikeHUDInfo(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
};
