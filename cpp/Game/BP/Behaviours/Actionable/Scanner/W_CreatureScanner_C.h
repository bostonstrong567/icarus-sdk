// /Game/BP/Behaviours/Actionable/Scanner/W_CreatureScanner.W_CreatureScanner_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2F0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UW_CreatureScanner_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* Scanning;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* Creature;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Grid;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* ScanningImage;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ScanningLine;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Signal;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Status;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* StatusBox;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UW_HandheldBackground_C* W_HandheldBackground;  // 0x02A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnSonarAudioEvent OnSonarAudioEvent;  // 0x02B0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FFishFinderFinish FishFinderFinish;  // 0x02C0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* Scanner;  // 0x02D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAISetupRowHandle AI;  // 0x02D8, size 0x18

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_W_CreatureScanner(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FishFinderFinish__DelegateSignature();
    UFUNCTION(BlueprintCallable) void OnSonarAudioEvent__DelegateSignature();
    UFUNCTION(BlueprintCallable) void ScanningLine_PlayAudio(UImage* ScanningLine);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SequenceEvent__ENTRYPOINTW_CreatureScanner_0(UImage* ScanningLine);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void UpdateScannedAI(FAISetupRowHandle AI);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void UpdateScanning(TEnumAsByte<ECreatureScanState> ScanState);  // parameters 0x1
};
