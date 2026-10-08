// /Game/BP/Behaviours/Actionable/Scanner/W_Radiation_Tracker.W_Radiation_Tracker_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x314, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UW_Radiation_Tracker_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* Scanning;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Grid;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* PointerImage;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ScanningLine;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Signal;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* SignalText;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UW_HandheldBackground_C* W_HandheldBackground;  // 0x0298, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UBP_ActionableBehaviour_RadiationTracker_C* Tracker;  // 0x02A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Closest_Angle;  // 0x02A8, size 0x4, named "Closest Angle"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TargetOffset;  // 0x02AC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CurrentOffset;  // 0x02B0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasSignal;  // 0x02B4, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SignalIntensity;  // 0x02B8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor WarningRed;  // 0x02C0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor Green;  // 0x02E8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ARROW_INTERP_SPEED;  // 0x0310, size 0x4

    UFUNCTION() void ExecuteUbergraph_W_Radiation_Tracker(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetSignalPercentageText();  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetSignalText();  // parameters 0x18
    UFUNCTION(BlueprintCallable) void Init(UBP_ActionableBehaviour_RadiationTracker_C* Tracker);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetHasSignal(bool Signal);  // parameters 0x1
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
};
