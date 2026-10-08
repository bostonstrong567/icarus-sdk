// /Game/BP/Behaviours/Actionable/Scanner/W_Fishfinder.W_Fishfinder_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2E8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UW_Fishfinder_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* Scanning;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* FishQuailityBorder;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Grid;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Quality;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* ScanningImage;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ScanningLine;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Signal;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IcarusGrid_C* UMG_IcarusGrid;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UW_HandheldBackground_C* W_HandheldBackground;  // 0x02A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFishSpawnZonesRowHandle SpawnZone;  // 0x02B0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnSonarAudioEvent OnSonarAudioEvent;  // 0x02C8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FFishFinderFinish FishFinderFinish;  // 0x02D8, size 0x10

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_W_Fishfinder(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FishFinderFinish__DelegateSignature();
    UFUNCTION(BlueprintCallable) void OnSonarAudioEvent__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Recalibrate();
    UFUNCTION(BlueprintCallable) void ScanningLine_PlayAudio(UImage* ScanningLine);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SequenceEvent__ENTRYPOINTW_Fishfinder_0(UImage* ScanningLine);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void TriggerRecalibration();
    UFUNCTION(BlueprintCallable) void UpdateDisplay(FFishSpawnZonesRowHandle Spawn);  // parameters 0x18
};
