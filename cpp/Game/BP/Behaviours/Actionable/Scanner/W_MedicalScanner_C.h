// /Game/BP/Behaviours/Actionable/Scanner/W_MedicalScanner.W_MedicalScanner_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2C8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UW_MedicalScanner_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* Scanning;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Grid;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* HealthBar;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* HealthBarOutline;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* NoTarget;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* NPC_Overlay;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* ScanningImage;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ScanningLine;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* StabilityText;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* StabilityText_1;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CharacterModifiers_Basic_C* UMG_CharacterModifiers_Basic;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UW_HandheldBackground_C* W_HandheldBackground;  // 0x02C0, size 0x8

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_W_MedicalScanner(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetMedicalValues(AActor* Actor, float& WaterPercent, float& FoodPercent, float& OxygenPercent, int32& Stability, FString& Name);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) FString GetName(UObject* Object);  // parameters 0x18
    UFUNCTION(BlueprintCallable) UWidgetComponent* GetScreenWidget();  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetScannedActor(AActor* Actor);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void ToPercent(int32 Current, int32 Max, float& Percent);  // parameters 0xC
};
