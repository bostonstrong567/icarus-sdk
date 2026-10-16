// /Game/UI/Windows/UMG_Fishing.UMG_Fishing_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x537, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Fishing_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Background;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* CatchBoxBorder;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Corner1;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Corner2;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Corner3;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Corner4;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* FishBox;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* FishImage;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* FishImage_1;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* FishingProgress;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* FishName;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* FishRarity;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* GoldenZone;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* LureBox;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* LureIcon;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Outline;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Quality;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeybindPrompt_C* UMG_KeybindPrompt;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeybindPrompt_C* UMG_KeybindPrompt_5;  // 0x02F8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FishSpeed;  // 0x0300, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 FishTargetX;  // 0x0304, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool FishHasReachedTarget;  // 0x0308, size 0x1
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FFishCaught FishCaught;  // 0x0310, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CatchSpeed;  // 0x0320, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CurrentProgress;  // 0x0324, size 0x4
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FFishLost FishLost;  // 0x0328, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemData Fish;  // 0x0338, size 0x1F0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsFishing;  // 0x0528, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float GoldenZoneLeft;  // 0x052C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float GoldenZoneRight;  // 0x0530, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsReeling;  // 0x0534, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool WidgetActive;  // 0x0535, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasFoundBiome;  // 0x0536, size 0x1

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_Fishing(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FishCaught__DelegateSignature();
    UFUNCTION(BlueprintCallable) void FishLost__DelegateSignature();
    UFUNCTION(BlueprintCallable) void FishMovement(float Delta);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FishReachedLocation();
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetRarityColour(FSlateColor& Color);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetZoneModifier();  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GoldenZoneMovement(float Delta);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void HideWidget();
    UFUNCTION(BlueprintCallable, BlueprintPure) void IsFishInZone(bool& InZone);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnLoaded_3AFF794A415218479E289AADCD46432B(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnLoaded_AA2603A94131712FB30430969197527B(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnLoaded_D5C124624117D085040657BA30762E76(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Reset();
    UFUNCTION(BlueprintCallable) void SetReeling(bool IsReeling);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void StartCatchingFish(FItemData Fish, FItemData Lure, FBiomesRowHandle Biome);  // parameters 0x3F8
    UFUNCTION(BlueprintCallable) void StopMinigame();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void UpdateProgress(float Delta);  // parameters 0x4
};
