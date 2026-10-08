// /Game/UI/Windows/UMG_Fishing_2.UMG_Fishing_2_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x4E6, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Fishing_2_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* FishImage;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* FishingProgress;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* GoldenZone;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_375;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_617;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_716;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Quality;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DarkTitlebar_C* UMG_DarkTitlebar;  // 0x02A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FishSpeed;  // 0x02B0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 FishTargetY;  // 0x02B4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool FishHasReachedTarget;  // 0x02B8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FFishCaught FishCaught;  // 0x02C0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CatchSpeed;  // 0x02D0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CurrentProgress;  // 0x02D4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FFishLost FishLost;  // 0x02D8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemData Fish;  // 0x02E8, size 0x1F0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsFishing;  // 0x04D8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float GoldenZoneUp;  // 0x04DC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float GoldenZoneDown;  // 0x04E0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsReeling;  // 0x04E4, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool WidgetActive;  // 0x04E5, size 0x1

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_Fishing_2(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FishCaught__DelegateSignature();
    UFUNCTION(BlueprintCallable) void FishLost__DelegateSignature();
    UFUNCTION(BlueprintCallable) void FishMovement(float Delta);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FishReachedLocation();
    UFUNCTION(BlueprintCallable) void GoldenZoneMovement(float Delta);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void HideWidget();
    UFUNCTION(BlueprintCallable, BlueprintPure) void IsFishInZone(bool& InZone);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnLoaded_0305A7674E5E105490209FBE88C8C5EA(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Reset();
    UFUNCTION(BlueprintCallable) void SetReeling(bool IsReeling);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void StartCatchingFish(FItemData Fish);  // parameters 0x1F0
    UFUNCTION(BlueprintCallable) void StopMinigame();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void UpdateProgress(float Delta);  // parameters 0x4
};
