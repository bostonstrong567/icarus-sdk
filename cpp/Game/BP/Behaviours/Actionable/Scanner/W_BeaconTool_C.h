// /Game/BP/Behaviours/Actionable/Scanner/W_BeaconTool.W_BeaconTool_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x33D, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UW_BeaconTool_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* NoLink;  // 0x0268, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* Scanning;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Border_Status;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* DistanceText;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Grid;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* HorizontalBox_Distance;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* PointerImage;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ScanningLine;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Signal;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Status;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UW_HandheldBackground_C* W_HandheldBackground;  // 0x02B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Closest_Angle;  // 0x02C0, size 0x4, named "Closest Angle"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TargetOffset;  // 0x02C4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CurrentOffset;  // 0x02C8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasSignal;  // 0x02CC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DistanceToLinkedBeacon;  // 0x02D0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor WarningRed;  // 0x02D8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor Green;  // 0x0300, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* LinkedBeaconActor;  // 0x0328, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ASkeletalItem* ItemOwner;  // 0x0330, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxDistance;  // 0x0338, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CurrentlyWithinDistance;  // 0x033C, size 0x1

    UFUNCTION() void ExecuteUbergraph_W_BeaconTool(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetSignalPercentageText();  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetSignalText();  // parameters 0x18
    UFUNCTION(BlueprintCallable) void Initialise(ASkeletalItem* Item);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsWithinDistance() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetHasSignal(bool Signal);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetLinkedBeacon(AActor* LinkedBeaconActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetWithinDistance(bool CurrentlyWithinDistance);  // parameters 0x1
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
};
